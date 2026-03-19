// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
using namespace std;

class Player {
private:
    string name;
    string description;
    string health;

public:
    Player(string name, string description, string health);
    void setName(const string& newName);
    void setDescription(const string& newDescription);
    void setHealth(const string& newHealth);
    string getName() const;
    string getDescription() const;
    string getHealth() const;
    string toString() const;
};

#endif
