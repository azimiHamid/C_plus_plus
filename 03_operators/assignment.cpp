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
        cout << "Total tea-bugs(added 5 extra bags): " << teaBugs << endl;

    } else {

        cout << "Total tea-bugs: " << teaBugs << endl;

    }

    return 0;
}
