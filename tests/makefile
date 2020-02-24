clean:
	rm *.o
compile_all:
	g++ -c ../units/Unit.cpp
	g++ -c ../units/Soldier.cpp
	g++ -c ../units/Rogue.cpp
	g++ -c ../units/Berserker.cpp
	g++ -c ../units/Vampire.cpp
	g++ -c ../units/Werewolf.cpp
	g++ -c ../units/IObserver.cpp
	g++ -c ../units/IObservable.cpp
	g++ -c ../states/State.cpp
	g++ -c ../states/SoldierState.cpp
	g++ -c ../states/BerserkerState.cpp
	g++ -c ../states/RogueState.cpp
	g++ -c ../states/VampireState.cpp
	g++ -c ../states/WerewolfState.cpp
	g++ -c ../states/WolfState.cpp
	g++ -c ../attacks/BaseAttack.cpp
	g++ -c ../attacks/RogueAttack.cpp
	g++ -c ../attacks/VampireAttack.cpp
	g++ -c ../attacks/WerewolfAttack.cpp
	g++ -c test_Soldier.cpp
	g++ -c test_Rogue.cpp
	g++ -c test_Berserker.cpp
	g++ -c test_Vampire.cpp
	g++ -c test_Werewolf.cpp
	g++ -c main.cpp
all:compile_all
	g++ *.o -o test.out