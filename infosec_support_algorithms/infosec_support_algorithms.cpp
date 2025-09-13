#include <iostream>
#include <string>

static std::string get_alphabet(int k) {
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
    int count_of_characters_in_alphabet;
    std::cout << "Enter count of characters in alphabet: ";
    std::cin >> count_of_characters_in_alphabet;

    if (count_of_characters_in_alphabet > 52 || count_of_characters_in_alphabet < 1) {
        std::cout << "Count of characters in alphabet is incorrect" << std::endl;
        return 0;
    }

    std::string alphabet = get_alphabet(count_of_characters_in_alphabet);
    std::cout << "Current alphabet: " << alphabet << std::endl;

    std::string encryption_string;
    std::cout << "Enter encryption string: ";
    std::cin >> encryption_string;

    if (encryption_string.size() > pow(10, 6) || encryption_string.size() < 1) {
        std::cout << "Incorrect count of characters in encryption string" << std::endl;
        return 0;
    }
    else {
        for (auto c : encryption_string) {
            if (alphabet.find(c) == std::string::npos) {
                std::cout << "Encryption string contains characters that are not in current alphabet" << std::endl;
                return 0;
            }
        }
    }


    return 0;
}