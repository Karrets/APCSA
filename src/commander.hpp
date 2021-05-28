#pragma once
#ifndef BUILD_COMMANDER_HPP
#define BUILD_COMMANDER_HPP

#include <string>
#include <map>

namespace commander {
    enum struct word  {
        INVALID = -1,
        USE     =  0,
        MOVE    =  1,
        ATTACK  =  2,
        BLOCK   =  3,
        FLEE    =  4,
    };

    static std::map<std::string, word> dictionary = {
        {"\0",     word::INVALID},
        {"USE",    word::USE    },
        {"MOVE",   word::MOVE   },
        {"GO TO",  word::MOVE   },
        {"ATTACK", word::ATTACK },
        {"FLEE",   word::FLEE   },
        {"RUN",    word::FLEE   },
        {"BLOCK",  word::BLOCK  }
    };

    unsigned int sim(const std::string& compare, const std::string& to);
    word parse(const std::string& input);
}

#endif //BUILD_COMMANDER_HPP
