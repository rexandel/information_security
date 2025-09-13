#include <iostream>
#include <string>

static std::string getAlphabet(int k) {
    std::string alphabet = "";

    for (char c = 'A'; c <= 'Z' && k > 0; c++, k--) {
        alphabet += c;
    }

    for (char c = 'a'; c <= 'z' && k > 0; c++, k--) {
        alphabet += c;
    }

    return alphabet;
}

int main()
{
    std::string alphabet = getAlphabet(27);
    std::cout << alphabet;
    return 0;
}