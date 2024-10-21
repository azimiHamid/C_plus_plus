#include <iostream>
using namespace std;

int main() {

    int arr[5] = {23, 65, 78, 54, 99};
    cout << "Array Elements: ";
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}