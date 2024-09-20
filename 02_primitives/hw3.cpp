// Homework #3: print the fav tea and quantity of cups.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string favTea;
    cout << "What is your favorite tea? ";
    getline(cin, favTea);

    short cups; 
    cout << "How many cups of " << favTea << " do you want? ";
    cin >> cups;

    cout << "Your favorite tea is " << favTea << endl;
    cout << "You have " << cups << " cups of your favorite tea (" << favTea << ").\n";
    cout << "Prepare yourself for a tea-rrific adventure!\n";

    return 0;
}