#include <iostream>
using namespace std;

// Function that uses pointers to swap two numbers
void swapNumbers(int* a, int* b) {
    int temp = *a;   // dereference pointer to get value
    *a = *b;
    *b = temp;
}

int main() {
    // Example 1: Pointer with a single variable
    int num = 10;
    int* ptr = &num;  // pointer stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value at ptr (dereferencing): " << *ptr << endl;

    // Example 2: Pointer with arrays
    int arr[3] = {1, 2, 3};
    int* arrPtr = arr;  // array name acts like a pointer

    cout << "\nArray elements using pointer: ";
    for (int i = 0; i < 3; i++) {
        cout << *(arrPtr + i) << " ";  // pointer arithmetic
    }
    cout << endl;

    // Example 3: Pointer with functions
    int x = 5, y = 7;
    cout << "\nBefore swap: x = " << x << ", y = " << y << endl;
    swapNumbers(&x, &y);  // pass addresses to function
    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}
