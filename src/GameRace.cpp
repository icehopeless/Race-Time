#include "header.hpp"

void Menu::InicializarGame() {
	music.stop();
	VolumeS.setColor(sf::Color::Transparent);
	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	car.loadFromFile("assets/Cars/Sprites/Car_BMW_M1_86x145.png");
	spritecars.setTexture(car);
	spritecars.setScale(0.42, 0.42);
	spritecars.setRotation(180);
	spritecars.setPosition(400, 400);
	spritecars.setColor(sf::Color::White);
	ArrowRS.setColor(sf::Color::Transparent);
	ArrowLS.setColor(sf::Color::Transparent);
	ArrowRS2.setColor(sf::Color::Transparent);
	ArrowLS2.setColor(sf::Color::Transparent);
	vitrineS2.setColor(sf::Color::Transparent);
	vitrineS.setColor(sf::Color::Transparent);
	colison1.setSize(sf::Vector2f(1200, 110));
	carrohit.setSize(sf::Vector2f(80, 110));
	carrohit.setFillColor(sf::Color::Transparent);
	carrohit.setPosition(spritecars.getPosition().x,spritecars.getPosition().y + 30);
	ColisonBounds = colison1.getGlobalBounds();
	carBounds = carrohit.getGlobalBounds();
	font->loadFromFile("assets/Font/VintageTimes.ttf");
	Contagem->setFont(*font);
	Contagem->setCharacterSize(500);
	Contagem->setFillColor(sf::Color::Cyan);
	Contagem->setPosition(500, 50);
	KeyFinaleGame = false;
	counterKeyboard = 0;
	PistaRefrent();

}
void Menu::PistaRefrent() {
	if (Nivelatual == 0) {
		fundo.loadFromFile("assets/Game/map1.png");
		Fundo.setTexture(fundo, true);
	} else if (Nivelatual != 0) {
		KeyFinaleGame = true;
	}
}

void Carros::draw(sf::RenderWindow * w){
	w->draw(zero);
}
void Menu::run_game() {

	if (Init_Game == false) {
		sf::sleep(sf::milliseconds(0.0f));
		InicializarGame();
		Init_Game = true;
		Nivelatual++;
		l = 0;

		carro.zero.setTexture(car);
		carro.zero.setScale(0.42, 0.42);
		carro.zero.setRotation(180);
		carro.zero.setPosition(400, 400);
	}

	if (l > 0) {
		if (SoundCont == false and KeyFinaleGame == false) {
			Go.play();
			SoundCont = true;
		}
		if (Contagem_Realizada == false and KeyFinaleGame == false) {
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
	if (KeyFinaleGame == true) {
		Final_game();
	}

	l = 1;

	MovimentCar();
}

void Menu::game() {
	Carros carroPlayer;
	Carros carroBot;

}

void Menu::MovimentCar() {
	bool camb1;
	bool camb2;
	bool camb3;
	bool camb4;

	if (KeyLeft == true) {
		spritecars.setPosition(spritecars.getPosition().x - 19,
				spritecars.getPosition().y);
		KeyLeft = false;
		camb1 = true;
	}
	if (KeyRight == true) {
		spritecars.setPosition(spritecars.getPosition().x + 19,
				spritecars.getPosition().y);
		KeyRight = false;
		camb2 = true;
	}
	if (KeyUP == true) {
		spritecars.setPosition(spritecars.getPosition().x,spritecars.getPosition().y - 19);
		KeyUP = false;
		camb3 = true;
	}
	if (KeyDown == true) {
		camb4 = true;
		spritecars.setPosition(spritecars.getPosition().x,spritecars.getPosition().y + 19);
		KeyDown = false;
	}

	if (camb1 == true and camb3 == true) {
		spritecars.setRotation(330);
		camb1 = false;
		camb3 = false;
	}

	if (camb3 == true and camb2 == true) {
		spritecars.setRotation(45);
		camb2 = false;
		camb3 = false;
	}

	if (camb1 == true and camb4 == true) {
		spritecars.setRotation(225);
		camb1 = false;
		camb4 = false;
	}

	if (camb4 == true and camb2 == true) {
		spritecars.setRotation(135);
		camb2 = false;
		camb4 = false;
	}
}
