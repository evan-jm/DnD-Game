#import "./Character.h"
#include <string>

Character::Character(std::string name, std::string description, int strength,
                     int dexterity, int constitution, int intelligence,
                     int wisdom, int charisma) {
  Character::setName(name);
  Character::setDescription(description);
  Character::setStrength(strength);
  Character::setDexterity(dexterity);
  Character::setConstitution(constitution);
  Character::setIntelligence(intelligence);
  Character::setWisdom(wisdom);
  Character::setCharisma(charisma);
}