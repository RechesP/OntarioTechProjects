#include <iostream>
#include <fstream>
// #include <string>
using namespace std;

class Bits{
private:
    string sequence;
    string packet;
public:
    Bits(){}
    void get_sequence(){
        cout << this->sequence << endl;
    }
    void get_packet(){
        cout << this->packet << endl;
    }

    void set_sequence(string sequence){
        this->sequence = sequence;
    }
    void set_packet(string packet){
        this->packet = packet;
    }
    void toString(){
        cout << "Sequence: " << this->sequence;
        cout << "\tPacket: " << this->packet << endl;
    }
    bool isEmpty(){
        if (this->packet == "" || this->sequence == "") return true;
        return false;
    }
};

Bits getBitsObject(string word, string user_sequence){
    Bits bit = Bits();
    if (word.find(user_sequence) != std::string::npos){
        bit.set_sequence(user_sequence);
        bit.set_packet(word);
        return bit;
    }
    return bit;
}

Bits* resize(Bits* arr, int& size){
    Bits* new_arr = new Bits[size + 1];
    for (int i = 0; i < size;i++){
        new_arr[i] = arr[i];
    }
    delete[] arr;
    arr = new_arr;
    size++; 
    return arr;
}

void display(Bits* arr, int size){
    for (int i = 0; i < size; i++){
        arr[i].toString();
    }
    cout << "Total occurences of the bit sequence: " << size << endl;
}

int main(){
    string user_sequence;    
    do{
        bool not_bi = false;
        cout << "Enter a sequence of 1's and 0's (2 to exit): ";
        cin >> user_sequence;
        for (int i = 0; i < user_sequence.length(); i++){
            if (user_sequence[i] == '1' ||user_sequence[i] == '0'){
                not_bi = false;
            }
            else{
                not_bi = true;
                break;
            }
        }
        if (user_sequence == "2") break;
        else if (not_bi == true){
            cout << "your sequence " << user_sequence << " contains characters other than 1's and 0's." << endl;
            cout << "Try a different sequence" << endl;
        }
        else{ 
            ifstream input;
            string word;
            input.open("bits.txt");

            Bits* arr = new Bits[0];
            int size = 0;

            while(input >> word){
                Bits bit = getBitsObject(word, user_sequence);
                if (!bit.isEmpty()){
                    //bit.toString();
                    arr = resize(arr, size);
                    arr[size-1] = bit;
                }
            }
            input.close();
            display(arr, size);
        }
        cout << endl;
    }while(user_sequence != "2");
}