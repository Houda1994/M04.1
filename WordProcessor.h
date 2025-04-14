#ifndef WORD_PROCESSOR_H
#define WORD_PROCESSOR_H

#include <set>
#include <string>

class WordProcessor {
private:
    std::set<std::string> uniqueWords;

public:
    void readFromFile(const std::string& filename);
    void displayWords() const;
};

#endif
