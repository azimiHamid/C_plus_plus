#include <iostream>
using namespace std;

int main() {

    int teaCups = 5;

    for (int i = 1; i <= teaCups; i++) {
        cout << "Brewing cup " << i << " of tea...\n";
    }

    cout << "Outside of for loop.\n";
    
    return 0;
}