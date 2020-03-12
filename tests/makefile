CXX = g++ -std=c++11
CXXFLAGS = -c
clean:
	rm *.o
compile_all:
	$(CXX) $(CXXFLAGS) ../units/Unit.cpp
	$(CXX) $(CXXFLAGS) ../units/Soldier.cpp
	$(CXX) $(CXXFLAGS) ../units/Rogue.cpp
	$(CXX) $(CXXFLAGS) ../units/Berserker.cpp
	$(CXX) $(CXXFLAGS) ../units/Vampire.cpp
	$(CXX) $(CXXFLAGS) ../units/Werewolf.cpp
	$(CXX) $(CXXFLAGS) ../units/SpellCaster.cpp
	$(CXX) $(CXXFLAGS) ../units/Wizard.cpp
	$(CXX) $(CXXFLAGS) ../units/Healer.cpp
	$(CXX) $(CXXFLAGS) ../units/Priest.cpp
	$(CXX) $(CXXFLAGS) ../units/Warlock.cpp
	$(CXX) $(CXXFLAGS) ../units/Necromancer.cpp
	$(CXX) $(CXXFLAGS) ../units/Demon.cpp
	$(CXX) $(CXXFLAGS) ../units/IObserver.cpp
	$(CXX) $(CXXFLAGS) ../units/IObservable.cpp
	$(CXX) $(CXXFLAGS) ../states/State.cpp
	$(CXX) $(CXXFLAGS) ../states/SoldierState.cpp
	$(CXX) $(CXXFLAGS) ../states/BerserkerState.cpp
	$(CXX) $(CXXFLAGS) ../states/RogueState.cpp
	$(CXX) $(CXXFLAGS) ../states/VampireState.cpp
	$(CXX) $(CXXFLAGS) ../states/WerewolfState.cpp
	$(CXX) $(CXXFLAGS) ../states/WolfState.cpp
	$(CXX) $(CXXFLAGS) ../states/MagicState.cpp
	$(CXX) $(CXXFLAGS) ../states/WizardState.cpp
	$(CXX) $(CXXFLAGS) ../states/PriestState.cpp
	$(CXX) $(CXXFLAGS) ../states/HealerState.cpp
	$(CXX) $(CXXFLAGS) ../states/WarlockState.cpp
	$(CXX) $(CXXFLAGS) ../states/NecromancerState.cpp
	$(CXX) $(CXXFLAGS) ../states/DemonState.cpp
	$(CXX) $(CXXFLAGS) ../attacks/BaseAttack.cpp
	$(CXX) $(CXXFLAGS) ../attacks/RogueAttack.cpp
	$(CXX) $(CXXFLAGS) ../attacks/VampireAttack.cpp
	$(CXX) $(CXXFLAGS) ../attacks/WerewolfAttack.cpp
	$(CXX) $(CXXFLAGS) ../attacks/MagicAttack.cpp
	$(CXX) $(CXXFLAGS) ../attacks/PriestAttack.cpp
	$(CXX) $(CXXFLAGS) ../attacks/NecromancerAttack.cpp
	$(CXX) $(CXXFLAGS) ../spells/SpellBook.cpp
	$(CXX) $(CXXFLAGS) ../spells/BaseSpell.cpp
	$(CXX) $(CXXFLAGS) ../spells/RestoreHP.cpp
	$(CXX) $(CXXFLAGS) ../spells/MagicArrow.cpp
	$(CXX) $(CXXFLAGS) ../spells/FireBall.cpp
	$(CXX) $(CXXFLAGS) ../spells/SummonSpell.cpp
	$(CXX) $(CXXFLAGS) test_Soldier.cpp
	$(CXX) $(CXXFLAGS) test_Rogue.cpp
	$(CXX) $(CXXFLAGS) test_Berserker.cpp
	$(CXX) $(CXXFLAGS) test_Vampire.cpp
	$(CXX) $(CXXFLAGS) test_Werewolf.cpp
	$(CXX) $(CXXFLAGS) test_Wizard.cpp
	$(CXX) $(CXXFLAGS) test_Healer.cpp
	$(CXX) $(CXXFLAGS) test_Priest.cpp
	$(CXX) $(CXXFLAGS) test_Warlock.cpp
	$(CXX) $(CXXFLAGS) test_Necromancer.cpp
	$(CXX) $(CXXFLAGS) test_Demon.cpp
	$(CXX) $(CXXFLAGS) test_SummonSpell.cpp
	$(CXX) $(CXXFLAGS) test_VampireBite.cpp
	$(CXX) $(CXXFLAGS) main.cpp
all:compile_all
	$(CXX) *.o -o test.out && ./test.out