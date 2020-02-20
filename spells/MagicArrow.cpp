#include "MagicArrow.h"

MagicArrow::MagicArrow(int cost, int spPower, const std::string spName, const std::string spType) 
    : BaseSpell(cost, spPower, spName, spType) {
        // std::cout << "MagicArrow constructor" << std::endl;
     }

MagicArrow::~MagicArrow() {
    std::cout << "MagicArrow destructor!" << std::endl;
}
