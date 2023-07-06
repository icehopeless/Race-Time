#include "header.hpp"
#include "Loja.cpp"
#include "GameRace.cpp"
#include "MenuRace.cpp"
#include "FinalGame.cpp"
#include "Levels.cpp"
#include "Player.cpp"
int main()
{
	Menu * start = new Menu();
	start->run_menu();
	delete start;
	start = nullptr;
	return EXIT_SUCCESS;
}
