#include "header.hpp"

int main()
{
	Menu * start = new Menu();
	start->run_menu();
	delete start;
	start = nullptr;
	return EXIT_SUCCESS;
}
