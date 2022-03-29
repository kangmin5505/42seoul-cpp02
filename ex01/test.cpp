#include <iostream>

using namespace std;
int main(void) {
  int a;
  a = 1234.4321f * ( 1 << 8) ;
  cout << a << endl;

  cout << static_cast<float>(a) << endl;
  cout << static_cast<float>(a) / (1 << 8)<< endl;

  float b;
  b = 1;
  cout << b << endl;
}