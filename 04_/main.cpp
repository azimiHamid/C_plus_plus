#include <iostream>
#include <string>
using namespace std;

int main() {

    string teaOrder;
    
    cout << "Enter your tea order? ";
    getline(cin, teaOrder);

    if (teaOrder == "green tea") {
        cout << "You have ordered Green Tea.\n";
    }

    return 0;
}