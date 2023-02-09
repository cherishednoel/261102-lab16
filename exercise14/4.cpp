#include <iostream>
using namespace std;

void funcOne(int n) {
    n = 1; }

void funcTwo(int *n) {
    *n = 2; }

int main() {
  int n = 0,*x = NULL;
  int &y = n;
  x = &y;
  *x = 3;
  funcOne(n);
  cout << "n = " << n << endl;
  cout << "y = " << y << endl;
  funcTwo(&n);
  cout << "n = " << n << endl;
  cout << "y = " << y << endl;
  return 0;
}

//funcOne is change value of n by using *x -> &y(address of n) -> n
//funcTwo is change value of n by using *n(address of n -> n)