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
	car.loadFromFile("assets/Cars/SuperB.png");
	spritecars.setTexture(car);
	spritecars.setScale(3,3);
}
void Game::run_game(){
	InicializarGame();

	MovimentCar();
}

void Game::game(){
	Carros carroPlayer;
	Carros carroBot;

}
void Game::DrawGame(){

}
void Game::MovimentCar(){
	 int vel = 70;
	 int velR = 12;
	if(KeyDown == true){
		spritecars.setPosition(spritecars.getPosition().x - vel, spritecars.getPosition().y);
		KeyDown= false;
	}

	if(KeyUP == true){
			spritecars.setPosition(spritecars.getPosition().x + vel, spritecars.getPosition().y);
			KeyUP= false;
		}

	if(KeyLeft == true){
		spritecars.setRotation(spritecars.getRotation() - velR);
			spritecars.setPosition(spritecars.getPosition().x, spritecars.getPosition().y - vel);
			KeyLeft = false;
		}

	if(KeyRight == true){
			spritecars.setRotation(spritecars.getRotation() + velR);
			spritecars.setPosition(spritecars.getPosition().x - vel, spritecars.getPosition().y + vel);
			KeyRight= false;
		}
}



