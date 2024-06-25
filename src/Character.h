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
  Character(std::string name, std::string description, int strength,
            int dexterity, int constitution, int intelligence, int wisdom,
            int charisma);
  std::string getName() { return name; }
  void setName(std::string input) { name = input; };
  std::string getDescription() { return description; }
  void setDescription(std::string input) { description = input; }
  int getStrength() { return strength; }
  void setStrength(int input) { strength = input; }
  int getDexterity() { return dexterity; }
  void setDexterity(int input) { dexterity = input; }
  int getConstitution() { return constitution; }
  void setConstitution(int input) { constitution = input; }
  int getIntelligence() { return intelligence; }
  void setIntelligence(int input) { intelligence = input; }
  int getWisdom() { return wisdom; }
  void setWisdom(int input) { wisdom = input; }
  int getCharisma() { return charisma; }
  void setCharisma(int input) { charisma = input; }
};

#endif