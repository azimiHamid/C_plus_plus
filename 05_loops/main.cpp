#include <iostream>
using namespace std;

int main() {

    int teaCups;
    
    cout << "Enter the number of tea cups to the server: ";
    cin >> teaCups;
    
    int order = 0;
    while (teaCups > 0) {
        cout << "You made your order-" << ++order << endl;
        teaCups--;
    }

    cout << "You used all your orders!\n";
    
    return 0;
}