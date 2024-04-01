#include <iostream>
#include <string>
#include <bitset>

size_t find_first_of(const std::string& str, const char* s, size_t pos = 0) {
    return str.find_first_of(s, pos);
}

std::string decimal_to_binary(const std::string& decimal) {
    int dec = std::stoi(decimal);
    return std::bitset<8>(dec).to_string(); // assuming 8-bit binary representation
}

int main() {
    // Task 1: find_first_of
    std::string str = "Hello, world!";
    char s[] = {'o', 'd', 'l', '\0'};
    size_t index = find_first_of(str, s);
    if (index != std::string::npos) {
        std::cout << "Index of first occurrence: " << index << std::endl;
    } else {
        std::cout << "No occurrence found." << std::endl;
    }

    // Task 2: decimal_to_binary
    std::string decimal = "42";
    std::string binary = decimal_to_binary(decimal);
    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}