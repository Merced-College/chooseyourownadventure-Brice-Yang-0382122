// Enemy.cpp 
#include "Enemy.h"

Enemy::Enemy(string name, string description, vector<string> actions, string damage)
    : name(name), description(description), actions(actions), damage(damage) {}

void Enemy::setName(const string& newName) { name = newName; }
void Enemy::setDescription(const string& newDescription) { description = newDescription; }
void Enemy::setActions(const vector<string>& newActions) { actions = newActions; }
void Enemy::setDamage(const string& newDamage) { damage = newDamage; }
string Enemy::getName() const { return name; }
string Enemy::getDescription() const { return description; }
vector<string> Enemy::getActions() const { return actions; }
string Enemy::getDamage() const { return damage; }
string Enemy::toString() const {
    string info = "Enemy: " + name + "\nDescription: " + description + "\nActions:\n";
    for (const auto& action : actions) {
        info += "- " + action + "\n";
    }

    info += "Damage: " + damage + "\n";
    return info;
}
