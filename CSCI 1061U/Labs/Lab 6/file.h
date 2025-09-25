#include <iostream>
#include <fstream>
using namespace std;

class File{
public:
    void readDataFromFile(const string& filename);
    void writeDataToFile(const string& filename, const string& fruits);
};