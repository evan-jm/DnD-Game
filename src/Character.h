#ifndef CHARACTER_H
#define CHARACTER_H

#import <iostream>

class Character {
private:
  std::string name;
  std::string description;
  int strength;
  int dexterity;
  int constitution;
  int intelligence;
  int wisdom;
  int charisma;

public:
  std::string getName() {return name};
  void setName(std:: input) {name = input};
  std::string getDescription() {return description};
  void setDescription(std:: input) {description = input};
};

#endif