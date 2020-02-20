#include "RestoreHP.h"

RestoreHP::RestoreHP(int cost, int spPower, const std::string spName, const std::string spType) 
    : BaseSpell(cost, spPower, spName, spType) {
        // std::cout << "Restore constructor" << std::endl;
    }

RestoreHP::~RestoreHP() {
    std::cout << "Restore destructor!" << std::endl;
}
