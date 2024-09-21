// Assignment Operators: +=  -=  *=  /=  %=

#include <iostream>
using namespace std;

int main() {

    int teaBugs;
    cout << "Enter the number of tea-bugs you have? ";
    cin >> teaBugs;
    
    // Add 5 extra tea-bugs if total tea-bugs is less than 10
    if (teaBugs < 10) {
        teaBugs += 5;
    }

    cout << "Your total tea-bugs: " << teaBugs << endl;

    return 0;
}
