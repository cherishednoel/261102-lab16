#include <iostream>
using namespace std;

void myfunc(int *x, int *y) { //(1)
    int temp = *x;
    *x += *y/2;
    *y += temp/2;
    //(2)
}

int main() {
    int x = 4, y = 6;
    cout << x << " " << y << endl;
    myfunc(&x, &y); //(3)
    cout << x << " " << y << endl;
    return 0;
}

//change function pass by references to pointers
//(1) change function arguments to pointers
//(2) change the function body to use the pointers
//(3) change the function call to use the addresses of variables(add &)
