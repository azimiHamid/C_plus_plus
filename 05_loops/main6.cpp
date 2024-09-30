#include <iostream>
#include <string>
using namespace std;

int main() {

    string teaTypes[] = {"Green Tea", "Lemon Tea", "Black Tea"};
    int strSize = sizeof(teaTypes) / sizeof(teaTypes[0]); 

    for (int i = 0; i < strSize; i++) {

        cout << teaTypes[i] << ":\n";

        for (int j = 1; j <= 2; j++) {
            cout << "Brewing " << j << " cup of " << teaTypes[i] << endl;
        }
    }
    
    return 0;
}