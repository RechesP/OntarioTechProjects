/*Complete the following:
onlyNums() - given a vector<string>, return a new vector that only contains the strings with a number in them
delThree() - given a vector<string>, return a new vector with the same elements excluding the first three
*/
#include <vector>
#include <iostream>
using namespace std;

bool hasNum(string s){
    for (int i = 0; i < s.length(); i++){
        if (isdigit(s[i]))return true;
    }
    return false;
}

vector<string> delThree(vector<string> vec){
    vector<string> vec2;
    for (int i = 3; i < vec.size(); i++){
        vec2.push_back(vec.at(i));
    }
    return vec2;
}

vector<string> onlyNums(vector<string> vec){
    vector<string> vec2;
    for (int i = 0; i < vec.size(); i++){
        if (hasNum(vec.at(i))){
            vec2.push_back(vec.at(i));
        }
    }
    return vec2;
}

int main(){
    vector<string> vec1 = {"He11eo", "how", "are", "y0u?"};
    for (int i = 0; i < vec1.size(); i++){
        cout << vec1.at(i) << endl;
    }
    cout << endl;
    vector<string> vec2 = onlyNums(vec1);
    for (int i = 0; i < vec2.size(); i++){
        cout << vec2.at(i) << endl;
    }
    cout << endl;
    vector<string> vec3 = delThree(vec1);
    for (int i = 0; i < vec3.size(); i++){
        cout << vec3.at(i) << endl;
    }
}