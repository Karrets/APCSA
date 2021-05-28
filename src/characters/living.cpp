#include "living.hpp"

living::living(unsigned int health, unsigned int maxDefense, unsigned int crit) {
    this->maxDefense = maxDefense;
    this->health, this->maxHealth = health;
}

void living::attack(living opponent) {
    opponent.hurt(10);
}

void living::block() {
    defense += 5;
}

void living::hurt(unsigned int damage) {
    health -= damage;
}

void living::reset() {
    defense = 0;
    health = maxHealth;
}
