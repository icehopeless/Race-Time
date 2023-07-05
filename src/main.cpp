#include "header.hpp"
#include "FinalGame.cpp"
#include "Levels.cpp"
#include "GameRace.cpp"
#include "Loja.cpp"
#include "MenuRace.cpp"
#include "Player.cpp"
int main()
{
	Menu * start = new Menu();
	start->run_menu();
	delete start;
	start = nullptr;
	return EXIT_SUCCESS;
}
