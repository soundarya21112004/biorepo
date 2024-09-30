#include <iostream>  // Include the input-output stream library

using namespace std;

// Function to greet
void greet() {
    cout << "Hello, World!" << endl;
}

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    greet();  // Call the greet function

    int result = addNumbers(5, 3);  // Add 5 and 3
    cout << "The sum is: " << result << endl;  // Print the result

    return 0;
}
