#include "WordProcessor.h"
#include <iostream>
#include <fstream>

void WordProcessor::readFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return;
    }

    std::string word;
    while (file >> word) {
        uniqueWords.insert(word);
    }
    file.close();
}

void WordProcessor::displayWords() const {
    std::cout << "Unique words in ascending order:" << std::endl;
    for (const auto& word : uniqueWords) {
        std::cout << word << std::endl;
    }
}
