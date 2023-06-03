#include "header.hpp"

void Game::InicializarGame(){
	music.stop();
	VolumeS.setColor(sf::Color::Transparent);
	fundo.loadFromFile("assets/Game/pista1.png");
	Fundo.setTexture(fundo,true);
	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	car[0].loadFromFile("assets/Cars/Spt1.png");
	car[1].loadFromFile("assets/Cars/Spt2.png");
	spritecars.setTexture(car[texturaRecorrente]);
	spritecars.setScale(0.3,0.3);

	colison1.setSize(sf::Vector2f(1200, 110));
	carrohit.setSize(sf::Vector2f(80, 110));
	carrohit.setFillColor(sf::Color::Black);
	carrohit.setPosition(spritecars.getPosition().x, spritecars.getPosition().y+30);

	 ColisonBounds = colison1.getGlobalBounds();
	 carBounds = carrohit.getGlobalBounds();


}
void Game::run_game(){
	InicializarGame();
	DrawGame();
	MovimentCar();
}

void Game::game(){
	Carros carroPlayer;
	Carros carroBot;

}
void Game::DrawGame(){
	window.draw(spritecars);
}
void Game::MovimentCar(){
	cout << c;
	fflush(stdout);

	if(KeyUP == true){
		spritecars.setRotation(90);
		carrohit.setRotation(90);
		spritecars.move(40,0);
		if(c == 2 || c > 2){
			c =0;
			if(texturaRecorrente == 1){
				texturaRecorrente=0;
			}else{
				texturaRecorrente++;
			}
		}
		KeyUP=false;
	}

	if(KeyRight == true){
			spritecars.setRotation(180);
			carrohit.setRotation(180);
			spritecars.move(0,40);
			if(c == 2 || c > 2){
				c =0;
				if(texturaRecorrente == 1){
					texturaRecorrente=0;
				}else{
					texturaRecorrente++;
				}
			}
			KeyRight=false;
		}

	if(KeyLeft == true){
			spritecars.setRotation(360);
			carrohit.setRotation(360);
			spritecars.move(0,-40);
			if(c == 2 || c > 2){
				c =0;
				if(texturaRecorrente == 1){
					texturaRecorrente=0;
				}else{
					texturaRecorrente++;
				}
			}
			KeyLeft=false;
		}

	if(KeyDown == true){
				spritecars.setRotation(270);
				carrohit.setRotation(270);
				spritecars.move(-40,0);
				if(c == 2 || c > 2){
					c =0;
					if(texturaRecorrente == 1){
						texturaRecorrente=0;
					}else{
						texturaRecorrente++;
					}
				}
				KeyDown=false;
			}

	if (carBounds.intersects( ColisonBounds)) {
		spritecars.setPosition(spritecars.getPosition().x , spritecars.getPosition().y + 110);

			}



}



