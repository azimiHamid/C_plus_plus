// Relational Operators: >  <  >=  <=  ==  !=

#include <iostream>
using namespace std;

int main() {

    int cups;
    cout << "Enter the number of cups? ";
    cin >> cups;
    
    if (cups > 20) {

        cout << "You have received a golden badge!" << endl;

    } else if (cups >= 10 && cups <= 20) {

        cout << "You have received a silver badge!" << endl;

    } else {
        
        cout << "Buy more cups to earn special badges!" << endl;

    }

    return 0;
}
