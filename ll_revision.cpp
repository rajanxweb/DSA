#include <iostream>

int main() {
    int x = 42;             // A regular integer variable
    int* ptr = &x;          // 'ptr' now holds the address of 'x'

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x (&x): " << &x << std::endl;
    std::cout << "Value inside ptr: " << ptr << std::endl;

    // The Magic: Dereferencing (*)
    // *ptr means: "Go to the address held in ptr, and open that mailbox."
    std::cout << "Value pointed to by ptr (*ptr): " << *ptr << std::endl;

    // We can change x remotely using the pointer
    *ptr = 100;
    std::cout << "New value of x: " << x << std::endl;

    return 0;
}