# include <iostream>
# include <string>
# include <fstream>
using namespace std;

void swap_nums(int *x, int *y){
  // *x = 1, *y = 2
  *x = *x + *y; //*x = 3
  *y = *x - *y;//*y = 1
  *x = *x - *y;//*x = 2
}

int main() {

  int a = 1;
  int b = 2;
  int *p1, *p2;
  p1 = &a;
  p2 = &b;
  swap_nums(p1,p2);
  
  return 0;
}