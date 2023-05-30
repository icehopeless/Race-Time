#include "header.hpp"

void Game::InicializarGame(){
	printf("Hellow");
	music.stop();
	VolumeS.setColor(sf::Color::Transparent);
	fundo.loadFromFile("assets/Game/pista1.png");
	Fundo.setTexture(fundo,true);
	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
}
void Game::run_game(){
	InicializarGame();
	game();
}

void Game::game(){
	Carros carroPlayer;
	Carros carroBot;

}
void Game::DrawGame(){

}




