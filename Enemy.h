// Enemy.h
#ifndef ENEMY_H
#define ENEMY_H

#include <string>
#include <vector>
using namespace std;

class Enemy {
private:
    string name;
    string description;
    vector<string> actions;  // Vector to store multiple actions
    string damage;

public:
    Enemy(string name, string description, vector<string> actions, string damage);
    void setName(const string& newName);
    void setDescription(const string& newDescription);
    void setActions(const vector<string>& newActions);
    void setDamage(const string& newDamage);
    string getName() const;
    string getDescription() const;
    vector<string> getActions() const;
    string getDamage() const;
    string toString() const;
};

#endif
