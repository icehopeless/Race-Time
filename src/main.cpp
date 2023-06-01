#include "header.hpp"
#include "GameRace.cpp"
#include "MenuRace.cpp"
#include "Loja.cpp"



int main()
{
	Menu * start = new Menu();
	start->run_menu();
	delete start;
	start = nullptr;
	
	return EXIT_SUCCESS;
}
