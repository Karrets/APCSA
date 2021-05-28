#pragma once
#ifndef BUILD_LIVING_HPP
#define BUILD_LIVING_HPP

class living {
private:
    unsigned int health;
    unsigned int maxHealth;

    unsigned int maxDefense;
    unsigned int defense;

    unsigned int crit;

public:
    living(unsigned int health, unsigned int maxDefense, unsigned int crit);

    void attack(living opponent);
    void block();
    void hurt(unsigned int damage);

    void reset();
};

#endif //BUILD_LIVING_HPP
