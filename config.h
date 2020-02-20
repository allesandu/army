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
    NECROMANCER = 190
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
    NECROMANCER = 110
};

enum class MAGIC {
    WIZARD = 100,
    HEALER = 90,
    PRIEST = 80,
    WARLOCK = 75,
    NECROMANCER = 130
};

enum class COST {
    RESTORE = 30,
    MAGICARROW = 40
};

enum class POWER {
    RESTORE = 25,
    MAGICARROW = 35
};

#endif // CONFIG_H
