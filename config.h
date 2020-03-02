#ifndef CONFIG_H
#define CONFIG_H

enum class HP {
    SOLDIER = 150,
    ROGUE = 160,
    BERSERKER = 140,
    VAMPIRE = 200,
    WEREWOLF = 180,
    WOLF = 230,
    WIZARD = 80,
    HEALER = 75,
    PRIEST = 90,
    WARLOCK = 100,
    NECROMANCER = 190,
    DEMON = 155
};

enum class DMG {
    SOLDIER = 50,
    ROGUE = 60,
    BERSERKER = 70,
    VAMPIRE = 100,
    WEREWOLF = 90,
    WOLF = 120,
    WIZARD = 30,
    HEALER = 35,
    PRIEST = 25,
    WARLOCK = 40,
    NECROMANCER = 110,
    DEMON = 55
};

enum class MAGIC {
    WIZARD = 100,
    HEALER = 90,
    PRIEST = 80,
    WARLOCK = 75,
    NECROMANCER = 130
};

enum class COST {
    RESTOREHP = 30,
    MAGICARROW = 35,
    FIREBALL = 40,
    SUMMONSPELL = 20
};

enum class POWER {
    RESTOREHP = 20,
    MAGICARROW = 25,
    FIREBALL = 35,
    SUMMONSPELL = 20
};

// enum class SPELL {
enum SPELL {
    BASESPELL = 0,
    RESTOREHP,
    MAGICARROW,
    FIREBALL,
    SUMMONSPELL
};

#endif // CONFIG_H
