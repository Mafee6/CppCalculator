#include <iostream>
#include <typeinfo>
using namespace std;

int calciAdd (int val1, int val2) {
    return (val1 + val2);
}

int calciSub (int val1, int val2) {
    return (val1 - val2);
}

int calciMul (int val1, int val2) {
    return (val1 * val2);
}

int calciDiv (int val1, int val2) {
    return (val1 / val2);
}

int main () {
    string mode = "+";
    int v1;
    int v2;

    cout << "Welcome Mafee's Cpp Calculator" "\n";
    cout << "Take this menu!" "\n";
    cout << 
        "To Add press [+]" "\n"
        "To Subtract press [-]" "\n"
        "To Multiply press [*]" "\n"
        "To Divide press [/]" "\n"
        "Enter your choice: ";

    cin >> mode;
    cout << "Thanks. You have chosen: " + mode + "\n\n";
    
    cout << "Enter the first value: ";
    cin >> v1;

    cout << "Enter the second value: ";
    cin >> v2;
    cout << "\n";

    cout << "Thanks. Now the Calculation is: " << v1 << mode << v2 << "\nCalculating..\n";

    if(mode == "+") {
        cout << "Sum is: ";
        cout << calciAdd(v1, v2);
    } else if(mode == "-") {
        cout << "Difference is: ";
        cout << calciSub(v1, v2);
    } else if(mode == "*") {
        cout << "Product is: ";
        cout << calciMul(v1, v2);
    } else if(mode == "/") {
        cout << "Quotient is: ";
        cout << calciDiv(v1, v2);
    } else {
        cout << "Sorry, Seems that you selected an invalid mode.";
    }

    cout << "\n\nThank you for using my app!";

    return 0;
}