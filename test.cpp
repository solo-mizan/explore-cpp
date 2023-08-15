#include <iostream>

// Define a structure to hold the swapped values
struct SwappedValues {
    int first;
    int second;
};

// Function to swap two values and return them using a structure
SwappedValues swapAndReturn(int a, int b) {
    SwappedValues result;
    result.first = b;
    result.second = a;
    return result;
}

int main() {
    int x = 5;
    int y = 10;

    SwappedValues swapped = swapAndReturn(x, y);

    std::cout << "Original values: x = " << x << ", y = " << y << std::endl;
    std::cout << "Swapped values: x = " << swapped.first << ", y = " << swapped.second << std::endl;

    return 0;
}
