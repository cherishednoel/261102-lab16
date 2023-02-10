#include <iostream>
using namespace std;

int main() {
    char a,*b = &a;
    float c,*d = &c;
    double e,*f = &e;
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(d) << endl;
    cout << sizeof(e) << endl;
    cout << sizeof(f) << endl;
    return 0;
}

//size of char = 1
//size of char* = 8

//size of float = 4
//size of float* = 8

//size of double = 8
//size of double* = 8

//size of pointers = 8