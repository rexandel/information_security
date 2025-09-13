#include <iostream>
#include <string>

static std::string getAlphabet() {
    std::string alphabet = "";
    
    int startBigChar = 65;
    int endBigChar = 90;

    for (int character = startBigChar; character < endBigChar; character++) {
        alphabet += (char)character;
    }

    int startSmallChar = 97;
    int endSmallChar = 122;

    for (int character = startSmallChar; character < endSmallChar; character++) {
        alphabet += (char)character;
    }

    return alphabet;
}

int main()
{
    std::cout << getAlphabet();
    return 0;
}