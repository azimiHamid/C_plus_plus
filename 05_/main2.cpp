#include <iostream>
#include <string>
using namespace std;

int main() {

    string response;
    
    do
    {
        cout << "Do you wnat more Tea? (yes/no) : ";
        getline(cin, response);

    } while (response == "Yes" || response == "yes");
    
    
    return 0;
}