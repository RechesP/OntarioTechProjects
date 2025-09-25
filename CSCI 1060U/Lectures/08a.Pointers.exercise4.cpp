# include <iostream>
# include <string>
# include <fstream>
using namespace std;

int* add_nums(int *x, int *y, int sum){
 sum = *x + *y;
 int *p3 = &sum;
 return p3;
}

int main() {

  int a = 1;
  int b = 2;
  int *p1, *p2, *p3;
  p1 = &a;
  p2 = &b;
  p3 = add_nums(p1,p2,0);
  cout << *p3 << endl;
  
  return 0;
}