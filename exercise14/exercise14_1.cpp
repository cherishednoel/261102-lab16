#include <iostream>
using namespace std;

int main() {
    int a = 69;
    int *b = &a;
    int **c = &b;
    cout << **c << endl;
    return 0;
}

//Ans = (G) cout << **c;
