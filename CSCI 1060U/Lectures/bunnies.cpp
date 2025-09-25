#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

vector<string> names;
ofstream myOutput;

struct Bunny{
    public:
        string sex;
        string colour;
        int age;
        string name;
        bool radioactive_mutant_vampire_bunny;
        Bunny(){
            sex = Sex();
            colour = Colour();
            age = 0;
            name = Name();
            radioactive_mutant_vampire_bunny = Radioactive_mutant_vampire_bunny();
        }
    
        string Sex(){
            string sex;
            int prob = rand()%2;
            if (prob == 0){
                sex = "Male";
            }else{
                sex = "Female";
            }
            return sex;
        }
    
        string Colour(){
            string colour;
            int prob = rand()%4;
            switch(prob){
                case 0:
                    colour = "White";
                    break;
                case 1:
                    colour = "Brown";
                    break;
                case 2:
                    colour = "Black";
                    break;
                case 3:
                    colour = "Spotted";
                    break;
                default:
                    colour = "Blue";
                    break;
            }
            return colour;
        }
        
        string Name(){
            string name;
            int prob = rand()%60;
            name = names[prob];
            return name;
        }
        bool Radioactive_mutant_vampire_bunny(){
            int prob = rand()%50;
            if (prob == 5){
                return true;
            }
            return false;
        }
    
};
bool bunniesTwoPlus(vector<Bunny> bunnies){
    int males = 0;
    int females = 0;
    for(int i = 0; i < bunnies.size(); i++){
            if(bunnies[i].age >= 2 && bunnies[i].sex == "Female" && bunnies[i].radioactive_mutant_vampire_bunny == false){
                females++;
            }
            else if(bunnies[i].age >= 2 && bunnies[i].sex == "Male" && bunnies[i].radioactive_mutant_vampire_bunny == false){
                males++;
            }
        }
    if (males >= 1 && females >= 1){
        return true;
    }
    return false;
}

int Mutant(vector<Bunny> bunnies){
    int rmvb = 0;
    for (int i = 0; i < bunnies.size(); i++){
        if (bunnies[i].radioactive_mutant_vampire_bunny == true){
            rmvb++;
        }
    }
    return rmvb;
}

void ageSort(vector<Bunny> &bunnies){
    for(int i = 0; i < bunnies.size(); i++){
        int minimum = i;
        for (int j = i+1; j < bunnies.size(); j++){
            if (bunnies[j].age < bunnies[minimum].age){
                minimum = j;
            }
        }
        Bunny temp = bunnies[minimum];
        bunnies[minimum] = bunnies[i];
        bunnies[i] = temp;
    }
}

int bunnySearch(Bunny bun, vector<Bunny> bunnies){
    for(int i = 0; i < bunnies.size(); i++){
        if (bunnies[i].name == bun.name && bunnies[i].sex == bun.sex && bunnies[i].colour == bun.colour && bunnies[i].age == bun.age && bunnies[i].radioactive_mutant_vampire_bunny == false){
            return i;
        }
    }
    return 999;
}

struct Farm{
    vector<Bunny> bunnies;
    void update(vector<Bunny> &bunnies){
        vector<Bunny> notRadio;
        myOutput << "Events:" << endl;
        bool birth = false;
        if (bunniesTwoPlus(bunnies) == true){
            birth = true;
        }
        vector<Bunny> birthVec;

        for(int i = 0; i < bunnies.size(); i++){
            bunnies[i].age++;
            if (birth == true && bunnies[i].sex == "Female"){
                Bunny bun = Bunny();
                bun.colour = bunnies[i].colour;
                birthVec.push_back(bun);

                if (bun.radioactive_mutant_vampire_bunny == true){
                    myOutput << "Radioactive Mutant Vampire ";
                }
                myOutput << "Bunny " << bun.name << " was born!" << endl;
            }
            if(bunnies[i].age > 10 && bunnies[i].radioactive_mutant_vampire_bunny == false){
                myOutput << "Bunny " << bunnies[i].name << " died!"<< endl;
                bunnies.erase(bunnies.begin()+i);
                
            }
            else if(bunnies[i].age == 50 && bunnies[i].radioactive_mutant_vampire_bunny == true){
                myOutput << "Radioactive Mutant Vampire Bunny " << bunnies[i].name << " died!" << endl;
                bunnies.erase(bunnies.begin()+i);
            }
            if (bunnies[i].radioactive_mutant_vampire_bunny == false){
                notRadio.push_back(bunnies[i]);
            }
        }
        for(int i = 0; i < birthVec.size(); i++){
            bunnies.push_back(birthVec[i]);
        }
        int rmvb = Mutant(bunnies);
        for(int i = 0; i < rmvb; i++){
            if (notRadio.size() > 0){
                int mutate = rand()%notRadio.size();
                int index = bunnySearch(notRadio[mutate], bunnies);
                notRadio.erase(notRadio.begin() + mutate);
                if (index != 999){
                    bunnies[index].radioactive_mutant_vampire_bunny = true; 
                    myOutput << "Bunny " << bunnies[index].name << " is now a Radioactive Mutant Vampire Bunny!" << endl;
                }
                // else if(index == 999){
                //     myOutput << "No bunnies left to turn." << endl;
                //     break;
                // }
            }
            else{
                myOutput << "No bunnies left to turn." << endl;
                break;
            }
            }
        if (bunnies.size() > 100){
            myOutput << "Food shortage!"<< endl;
            int half = bunnies.size()/2;
            for(int i = 0; i < half; i++){
                int snap = rand()%bunnies.size();
                myOutput << "Bunny " << bunnies[snap].name << " died!"<< endl;
                bunnies.erase(bunnies.begin()+snap);
            }
        }
        myOutput << endl;
        myOutput << "Bunnies:" << endl;
        ageSort(bunnies);
        for(int i = 0; i < bunnies.size(); i++){
            myOutput << bunnies[i].name << ": " << bunnies[i].sex << ", ";
            if (bunnies[i].radioactive_mutant_vampire_bunny == true){
                myOutput << "Radioactive Mutant Vampire Bunny, ";
            }
            myOutput << bunnies[i].age << " years old, " << bunnies[i].colour << " fur" << endl;
        }
        myOutput << endl;
    }
};

int main(){
    srand(time(NULL));
    ifstream myInput;
    string text;
    myInput.open("bunny_names.txt");
    while(getline(myInput,text)){
        names.push_back(text);
    }
    myOutput.open("BunniesResult.txt");
    vector<Bunny> bunnies;
    for(int i = 0; i < 5; i++){
        Bunny bun = Bunny();
        bunnies.push_back(bun);
    }
    
    Farm Dons;
    Dons.bunnies = bunnies;
    
    int years = 0;
    // while(Dons.bunnies.size() != 0){
    while(Dons.bunnies.size() > 0){
        Dons.update(Dons.bunnies);
        years++;
    }
    if(0 >= Dons.bunnies.size()){
        myOutput << "After " << years << " years all the bunnies died." << endl;
    }
    myInput.close();
    myOutput.close();
}