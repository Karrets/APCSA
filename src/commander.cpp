#include "commander.hpp"

unsigned int commander::sim(const std::string& compare, const std::string& to) {
    int comval = 0;
    int toval = 0;

    for(char letter : compare) {
        comval += toupper(letter);
    }
    for(char letter : to) {
        toval += toupper(letter);
    }

    unsigned int missingchar = compare.size() - to.size();
    unsigned int backup = 78 * missingchar;

    if(comval > toval) {
        toval += backup;
    } else if(comval < toval) {
        comval += backup;
    }

    return abs(comval - toval); //uint - uint = uint (Can't be negative / Unsigned)
}

commander::word commander::parse(const std::string &input) {
    std::pair<uint, word> max_sim = {5, word::INVALID}; //Most similar, smaller values == more similar

    for(std::pair<std::string, word> command : dictionary) {
        uint score = commander::sim(input, command.first);

        if(std::min(score, max_sim.first) == score) { //New similarity better?
            max_sim = {score, command.second};
        }
    }

    return max_sim.second;
}
