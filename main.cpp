#include "WordProcessor.h"
#include "StateCapitalManager.h"
#include <iostream>

int main() {
    // Part 1: Word Processing
    WordProcessor wp;
    wp.readFromFile("input.txt");
    wp.displayWords();

    std::cout << "\n----------------------------------------\n\n";

    // Part 2: State Capital Management
    StateCapitalManager scm;
    std::string state;
    std::cout << "Enter a state name: ";
    std::getline(std::cin, state);
    scm.displayCapital(state);

    return 0;
}
