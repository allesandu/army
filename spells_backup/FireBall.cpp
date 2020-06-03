#include "FireBall.h"

FireBall::FireBall(int spCost, int spPower, const std::string& spName, const std::string& spType)
    : BaseSpell(spCost, spPower, spName, spType) {
    // std::cout << "FireBall constructor!" << std::endl;
}

FireBall::~FireBall() {};
