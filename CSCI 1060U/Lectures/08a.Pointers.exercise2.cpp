# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int main() {

  int a = 1;
  int b = '$';
  int *p1;
  int *p2;
  p1 = &a;
  p2 = &b;
  p1 = p2;
  *p1 = *p2;
  cout << " *p1: " << *p1 << " p1: " << p1 << "\n *p2: " << *p2 << " p2: " << p2 << endl;

  return 0;