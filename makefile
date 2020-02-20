clean:
	rm *.o
compile_all:
	g++ units/IObserver.cpp -c
	g++ units/IObservable.cpp -c
	g++ states/State.cpp -c
	g++ states/SoldierState.cpp -c
	g++ states/RogueState.cpp -c
	g++ states/BerserkerState.cpp -c
	g++ states/VampireState.cpp -c
	g++ states/WerewolfState.cpp -c
	g++ states/WolfState.cpp -c
	g++ states/MagicState.cpp -c
	g++ states/WizardState.cpp -c
	g++ states/HealerState.cpp -c
	g++ states/PriestState.cpp -c
	g++ states/WarlockState.cpp -c
	g++ states/NecromancerState.cpp -c
	g++ units/Unit.cpp -c
	g++ units/Soldier.cpp -c
	g++ units/Rogue.cpp -c
	g++ units/Berserker.cpp -c
	g++ units/Vampire.cpp -c
	g++ units/Werewolf.cpp -c
	g++ units/Wizard.cpp -c
	g++ units/Healer.cpp -c
	g++ units/Priest.cpp -c
	g++ units/Warlock.cpp -c
	g++ units/Necromancer.cpp -c
	g++ units/SpellCaster.cpp -c
	g++ attacks/BaseAttack.cpp -c
	g++ attacks/RogueAttack.cpp -c
	g++ attacks/VampireAttack.cpp -c
	g++ attacks/WerewolfAttack.cpp -c
	g++ attacks/MagicAttack.cpp -c
	g++ spells/BaseSpell.cpp -c
	g++ spells/RestoreHP.cpp -c
	g++ spells/MagicArrow.cpp -c
	g++ spells/SpellBook.cpp -c
all:compile_all
	g++ run.cpp *.o