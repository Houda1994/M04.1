#include "StateCapitalManager.h"
#include <iostream>

StateCapitalManager::StateCapitalManager() {
    // Initialize with some state-capital pairs
    stateCapitalMap = {
        {"California", "Sacramento"},
        {"Texas", "Austin"},
        {"Florida", "Tallahassee"},
        {"New York", "Albany"},
        {"Illinois", "Springfield"}
    };
}

void StateCapitalManager::addStateCapital(const std::string& state, const std::string& capital) {
    stateCapitalMap[state] = capital;
}

std::string StateCapitalManager::findCapital(const std::string& state) const {
    auto it = stateCapitalMap.find(state);
    return (it != stateCapitalMap.end()) ? it->second : "";
}

void StateCapitalManager::displayCapital(const std::string& state) const {
    std::string capital = findCapital(state);
    if (!capital.empty()) {
        std::cout << "The capital of " << state << " is " << capital << "." << std::endl;
    } else {
        std::cout << "State not found." << std::endl;
    }
}
