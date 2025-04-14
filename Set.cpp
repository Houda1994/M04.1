#include <iostream>
#include <fstream>
#include <set>
#include <string>

int main() {
    std::set<std::string> uniqueWords; // Set to store non-duplicate words
    std::ifstream file("input.txt");  // Open file for reading
    std::string word;

    if (!file) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Read words from file and insert them into the set
    while (file >> word) {
        uniqueWords.insert(word);
    }

    // Display words in ascending order (automatically done by set)
    std::cout << "Unique words in ascending order:" << std::endl;
    for (const auto& w : uniqueWords) {
        std::cout << w << std::endl;
    }

    file.close();
    return 0;
}
