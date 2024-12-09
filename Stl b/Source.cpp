#include <iostream>
#include <cmath> // For std::round

// Templated function to calculate half
template <typename T>
T half(T value);

// Specialization for floating-point types
template <>
float half<float>(float value) {
    return value / 2.0f;
}

template <>
double half<double>(double value) {
    return value / 2.0;
}

// Specialization for integer types
template <>
int half<int>(int value) {
    return static_cast<int>(std::round(value / 2.0));
}

// Main function to test the half function
int main() {
    // Test with integer
    int intValue = 5;
    std::cout << "Half of " << intValue << " is " << half(intValue) << std::endl;

    intValue = 6;
    std::cout << "Half of " << intValue << " is " << half(intValue) << std::endl;

    // Test with float
    float floatValue = 5.5f;
    std::cout << "Half of " << floatValue << " is " << half(floatValue) << std::endl;

    floatValue = 6.0f;
    std::cout << "Half of " << floatValue << " is " << half(floatValue) << std::endl;

    // Test with double
    double doubleValue = 5.5;
    std::cout << "Half of " << doubleValue << " is " << half(doubleValue) << std::endl;

    doubleValue = 6.0;
    std::cout << "Half of " << doubleValue << " is " << half(doubleValue) << std::endl;

    return 0;
}