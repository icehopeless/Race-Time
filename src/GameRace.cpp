#include "header.hpp"

void Game::InicializarGame() {

	music.stop();
	VolumeS.setColor(sf::Color::Transparent);
	fundo.loadFromFile("assets/Game/pista1.png");
	Fundo.setTexture(fundo, true);
	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	car[0].loadFromFile("assets/Cars/Spt1.png");
	car[1].loadFromFile("assets/Cars/Spt2.png");
	spritecars.setTexture(car[AtualizacaoTextura]);
	spritecars.setScale(0.3, 0.3);

	spritecars.setScale(0.3, 0.3);
	ArrowRS.setColor(sf::Color::Transparent);
	ArrowLS.setColor(sf::Color::Transparent);
	ArrowRS2.setColor(sf::Color::Transparent);
	ArrowLS2.setColor(sf::Color::Transparent);
	vitrineS2.setColor(sf::Color::Transparent);
	vitrineS.setColor(sf::Color::Transparent);

	colison1.setSize(sf::Vector2f(1200, 110));
	carrohit.setSize(sf::Vector2f(80, 110));
	carrohit.setFillColor(sf::Color::Black);
	carrohit.setPosition(spritecars.getPosition().x,
			spritecars.getPosition().y + 30);

	ColisonBounds = colison1.getGlobalBounds();
	carBounds = carrohit.getGlobalBounds();

	font->loadFromFile("assets/Font/VintageTimes.ttf");
	Contagem->setFont(*font);
	Contagem->setCharacterSize(500);
	Contagem->setFillColor(sf::Color::Cyan);
	Contagem->setPosition(500, 50);

}
void Game::run_game() {
	if (Init_Game == false) {
		sf::sleep(sf::milliseconds(0.0f));
		InicializarGame();
		Init_Game = true;
	}

	if (l > 0) {
		if(SoundCont == false){
			Go.play();
			SoundCont = true;
		}
		if (Contagem_Realizada == false) {
			sf::sleep(sf::milliseconds(900.0f));
			stringstream a;
			a << x--;
			Contagem->setString(a.str());
			if (x == -1) {
				sf::sleep(sf::milliseconds(0.0f));
				stringstream b;
				b << "Go!";
				Contagem->setString(b.str());
				Contagem->setPosition(200, 50);
			}
			if (x == -2) {
				Contagem_Realizada = true;
				Contagem->setFillColor(sf::Color::Transparent);
			}
			sf::sleep(sf::milliseconds(0.0f));
		}
	}



	l = 1;

	MovimentCar();
}

void Game::game() {
	Carros carroPlayer;
	Carros carroBot;

}

void Game::MovimentCar() {
	/*

	 if(KeyUP == true){
	 spritecars.setRotation(90);
	 carrohit.setRotation(90);
	 spritecars.move(40,0);
	 if(l == 2 || l > 2){
	 l =0;
	 if(AtualizacaoTextura == 1){
	 AtualizacaoTextura=0;
	 }else{
	 AtualizacaoTextura++;
	 }
	 }
	 KeyUP=false;
	 }

	 if(KeyRight == true){
	 spritecars.setRotation(180);
	 carrohit.setRotation(180);
	 spritecars.move(0,40);
	 if(l == 2 || l > 2){
	 l =0;
	 if(AtualizacaoTextura == 1){
	 AtualizacaoTextura=0;
	 }else{
	 AtualizacaoTextura++;
	 }
	 }
	 KeyRight=false;
	 }

	 if(KeyLeft == true){
	 spritecars.setRotation(360);
	 carrohit.setRotation(360);
	 spritecars.move(0,-40);
	 if(l == 2 || l > 2){
	 l =0;
	 if(AtualizacaoTextura == 1){
	 AtualizacaoTextura=0;
	 }else{
	 AtualizacaoTextura++;
	 }
	 }
	 KeyLeft=false;
	 }

	 if(KeyDown == true){
	 spritecars.setRotation(270);
	 carrohit.setRotation(270);
	 spritecars.move(-40,0);
	 if(l == 2 || l > 2){
	 l =0;
	 if(AtualizacaoTextura == 1){
	 AtualizacaoTextura=0;
	 }else{
	 AtualizacaoTextura++;
	 }
	 }
	 KeyDown=false;
	 }

	 if (carBounds.intersects( ColisonBounds)) {
	 spritecars.setPosition(spritecars.getPosition().x , spritecars.getPosition().y + 110);

	 }

	 */

}
