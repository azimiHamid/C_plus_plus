#include <iostream>
#include <string>
using namespace std;

int main() {

    string teaTypes[] = {"Oolong Tea", "Green Tea", "Lemon Tea", "Black Tea"};
    int strSize = sizeof(teaTypes) / sizeof(teaTypes[0]); 

    for (int i = 0; i < strSize; i++) {
        if (teaTypes[i] == "Green Tea") {
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }
        cout << "Brewing " << teaTypes[i] << "... \n";
    }
    
    return 0;
}