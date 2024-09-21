// Homework #2: Assignment Operators HW

#include <iostream>
using namespace std;

int main() {

    int teaBags;
    cout << "Enter the number of tea-bags you have? ";
    cin >> teaBags;

    if (teaBags < 20) {
        teaBags += 10;
        cout << "Your total tea-bags now is = " << teaBags << " (Added 10 extra bags)\n";
    
    } else {
        cout << "Your total tea-bags is = " << teaBags << endl;
    }

    return 0;
}