#include <iostream>
using namespace std;

int main() {

    int choice;
    float price;
    
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "Enter your your choice (use numbers): ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        price = 2.0;
        cout << "You selected Green Tea. Price : " << price << "$\n";
        break;

    case 2:
        price = 2.5;
        cout << "You selected Lemon Tea. Price : " << price << "$\n";
        break;

    case 3:
        price = 4.0;
        cout << "You selected Oolong Tea. Price : " << price << "$\n";
        break;
    
    default:
        cout << "The selected Tea doesn't exist!\n";
        break;
    }

    return 0;
}