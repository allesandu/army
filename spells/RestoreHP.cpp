#include "RestoreHP.h"

RestoreHP::RestoreHP(int spCost, int spPower, const std::string& spName, const std::string& spType) 
    : BaseSpell(spCost, spPower, spName, spType) {
        // std::cout << "Restore constructor" << std::endl;
    }

RestoreHP::~RestoreHP() {
    std::cout << "Restore destructor!" << std::endl;
}
