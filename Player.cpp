// Player.cpp 
#include "Player.h"

Player::Player(string name, string description, string health)
    : name(name), description(description), health(health) {}

void Player::setName(const string& newName) { name = newName; }
void Player::setDescription(const string& newDescription) { description = newDescription; }
void Player::setHealth(const string& newHealth) { health = newHealth; }
string Player::getName() const { return name; }
string Player::getDescription() const { return description; }
string Player::getHealth() const { return health; }
string Player::toString() const {
    string info = "Player: " + name + "\nDescription: " + description;
    info += "Health: " + health + "\n";
    return info;
}
