#ifndef STATE_CAPITAL_MANAGER_H
#define STATE_CAPITAL_MANAGER_H

#include <map>
#include <string>

class StateCapitalManager {
private:
    std::map<std::string, std::string> stateCapitalMap;

public:
    StateCapitalManager();
    void addStateCapital(const std::string& state, const std::string& capital);
    std::string findCapital(const std::string& state) const;
    void displayCapital(const std::string& state) const;
};

#endif
