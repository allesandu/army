#include "MagicArrow.h"

MagicArrow::MagicArrow(int spCost, int spPower, const std::string& spName, const std::string& spType) 
    : BaseSpell(spCost, spPower, spName, spType) {
        // std::cout << "MagicArrow constructor" << std::endl;
}

MagicArrow::~MagicArrow() {
    std::cout << "MagicArrow destructor!" << std::endl;
}
