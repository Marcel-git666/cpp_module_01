
#include <iostream>
#include <string>
int main(void) {
    std::string test_string = "HI THIS IS BRAIN";
    std::string *string_PTR = &test_string;
    std::string &string_REF = test_string;
    std::cout << "Test string: " << test_string << '\n';
    std::cout << "Memory address of string variable:" << &test_string << '\n';
    std::cout << "Memory address held by stringPTR:" << string_PTR << '\n';
    std::cout << "Memory address held by stringREF:" << &string_REF << '\n';
    std::cout << "Value of string variable:" << test_string << '\n';
    std::cout << "Value of address held by stringPTR:" << *string_PTR << '\n';
    std::cout << "Value of address held by stringREF:" << string_REF << '\n';
    std::cout << "Program has ended.\n";
    return 0;
}
