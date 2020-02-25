clean:
	rm *.o
compile_all:
	g++ -c ../units/Unit.cpp
	g++ -c ../units/Soldier.cpp
	g++ -c ../units/Rogue.cpp
	g++ -c ../units/Berserker.cpp
	g++ -c ../units/Vampire.cpp
	g++ -c ../units/Werewolf.cpp
	g++ -c ../units/SpellCaster.cpp
	g++ -c ../units/Wizard.cpp
	g++ -c ../units/Healer.cpp
	g++ -c ../units/Priest.cpp
	g++ -c ../units/Warlock.cpp
	g++ -c ../units/Necromancer.cpp
	g++ -c ../units/IObserver.cpp
	g++ -c ../units/IObservable.cpp
	g++ -c ../states/State.cpp
	g++ -c ../states/SoldierState.cpp
	g++ -c ../states/BerserkerState.cpp
	g++ -c ../states/RogueState.cpp
	g++ -c ../states/VampireState.cpp
	g++ -c ../states/WerewolfState.cpp
	g++ -c ../states/WolfState.cpp
	g++ -c ../states/MagicState.cpp
	g++ -c ../states/WizardState.cpp
	g++ -c ../states/PriestState.cpp
	g++ -c ../states/HealerState.cpp
	g++ -c ../states/WarlockState.cpp
	g++ -c ../states/NecromancerState.cpp
	g++ -c ../attacks/BaseAttack.cpp
	g++ -c ../attacks/RogueAttack.cpp
	g++ -c ../attacks/VampireAttack.cpp
	g++ -c ../attacks/WerewolfAttack.cpp
	g++ -c ../attacks/MagicAttack.cpp
	g++ -c ../spells/SpellBook.cpp
	g++ -c ../spells/BaseSpell.cpp
	g++ -c ../spells/RestoreHP.cpp
	g++ -c ../spells/MagicArrow.cpp
	g++ -c test_Soldier.cpp
	g++ -c test_Rogue.cpp
	g++ -c test_Berserker.cpp
	g++ -c test_Vampire.cpp
	g++ -c test_Werewolf.cpp
	g++ -c test_Wizard.cpp
	g++ -c test_Healer.cpp
	g++ -c test_Priest.cpp
	g++ -c test_Warlock.cpp
	g++ -c test_Necromancer.cpp
	g++ -c main.cpp
all:compile_all
	g++ *.o -o test.out