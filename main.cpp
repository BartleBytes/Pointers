#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables
    int num1, num2, num3;

    // Ask the user for input
    cout << "Enter three integer values:\n";
    cin >> num1 >> num2 >> num3;

    // Dynamically allocate memory for pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Assign the values to the dynamically allocated memory
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the values of variables and pointers
    cout << "\nValues stored in variables:\n";
    cout << "num1: " << num1 << "\nnum2: " << num2 << "\nnum3: " << num3 << endl;

    cout << "\nValues pointed to by pointers:\n";
    cout << "*ptr1: " << *ptr1 << "\n*ptr2: " << *ptr2 << "\n*ptr3: " << *ptr3 << endl;

    // Free the allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    cout << "\nMemory has been freed." << endl;

    return 0;
}
