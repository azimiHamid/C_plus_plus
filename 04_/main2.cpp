#include <iostream>
using namespace std;

int main() {

    int hour;
    cout << "Enter the current hour (0-23)? ";
    cin >> hour;

    if (hour >= 8 && hour < 18) {
        cout << "The shop is open\n";
    } else {
        cout << "The shop is closed\n";
    }

    return 0;
}