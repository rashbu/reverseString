#include <iostream>
#include <string>


int main()
{
    int i;
    std::string word;
    std::cout << "Enter the word to reverse: ";
    
    std::getline(std::cin, word);

    int wordLength = word.length();

    for (i = wordLength - 1; i >= 0; i--) {
        std::cout << word[i];
    }
    
    return 0;
}
