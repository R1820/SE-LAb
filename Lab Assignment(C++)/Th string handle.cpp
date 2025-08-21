#include <iostream>
#include <string>
int main()
{
    std::string str1 = "Hello, ";
    std::string str2 = "World!";

    // Concatenation using + operator
    std::string result = str1 + str2;
    std::cout << "Concatenated using +: " << result << std::endl; // Output: Hello, World!

    // Concatenation using append()
    str1.append(" C++");
    std::cout << "After append(): " << str1 << std::endl; // Output: Hello, C++

    // Finding a substring
    size_t pos = str1.find("C++");
    if (pos != std::string::npos)
    {
        std::cout << "Found 'C++' at position: " << pos << std::endl; // Output: Found 'C++' at position: 7
    }

    // Replacing a substring
    str1.replace(pos, 3, "programming");
    std::cout << "After replace(): " << str1 << std::endl; // Output: Hello, programming

    // Extracting a substring
    std::string sub = str1.substr(7, 5);
    std::cout << "Extracted substring: " << sub << std::endl; // Output: programming

    return 0;
}
