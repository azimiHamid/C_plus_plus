#include <iostream>   //* include --> it's like import in JS
                      //* <iostream> --> it's like web api in browser, have some important methods and functionality like cin, cout, ...

using namespace std;  //* Namespace is a region for writting C++ codes
                      // which kind of c++ code? --> standard/std code
                      // We can create our own custom C++ region, too.

//* custom region/namespace like std region
namespace myRegion {
    void display(){
        // do nothing
    }
}

//! An important NOTE: you can use (using) keyword to use a namespace/region or you can directely use them. They are just different patterns of coding in C++
//? OR in Indirect method you can also do as below:
using std::cout;
using std::endl;

int main() {    //* This told c++ compiler where to start running the program. Remmeber that you should always mention the dataType (in this case int).
    myRegion::display();    //? Direct use of namespace
    cout << "Hello World!" << endl;  //* indirect use of namespace
    return 0; //! why return 0? because it shows a successful execution, and the next reason is because we have already mention the dataType for the main method and that means that the main method obviously have a returned value.
    //! in cout << 'Hello World!' : (<<) means that the text 'Hello World!' should be passed to cout method which comes from <iostream>
}


// Another method
int hamid() {
    std::cout "How are you Hamid";
    return 0;
}
