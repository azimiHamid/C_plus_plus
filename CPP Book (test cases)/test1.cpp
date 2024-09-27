// Check if we have two funcs with the same name, but different amount of parameters;

#include <iostream>
using namespace std;

int add2(int i) {
    int k = i + 2;
    return k;
}

int add2(int i, int j) {
    int k = i + j;
    return k;
}

int main() {

    cout << add2(23) << endl;
    cout << add2(2, 3) << endl;

    return 0;
}
