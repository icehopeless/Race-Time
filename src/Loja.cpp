#include "header.hpp"

void Loja::InicializarLoja() {
	SelectCar.setSize(sf::Vector2f(700, 400));
	SelectCar.setPosition(300, 200);
	VolumeS.setColor(sf::Color::Transparent);
	fundo.loadFromFile("../assets/Loja/Loja.png");
	Fundo.setTexture(fundo, true);
	startButtonS.setColor(sf::Color::White);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	startButtonS.setPosition(550, 570);
	arrowR.loadFromFile("../assets/Loja/SetR.png");
	arrowL.loadFromFile("../assets/Loja/SetL.png");
	arrowRS.setTexture(arrowR);
	arrowLS.setTexture(arrowL);

	arrowRS.setScale(0.6, 0.6);
	arrowLS.setScale(0.6, 0.6);

	arrowRS.setPosition(980, 260);
	arrowLS.setPosition(-100, 260);
	vitrineS.setColor(sf::Color::White);
	arrowMouseL.setPosition(47, 310);
	arrowMouseL.setSize(sf::Vector2f(110, 120));
	arrowMouseR.setPosition(1121, 310);
	arrowMouseR.setSize(sf::Vector2f(110, 120));

}

void Loja::SelectOnePlayer() {
	if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
		arrowLS.setColor(sf::Color::Blue);
		arrowRS.setColor(sf::Color::White);
	} else {
		arrowLS.setColor(sf::Color::White);
	}
	if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
		arrowRS.setColor(sf::Color::Blue);
		arrowLS.setColor(sf::Color::White);
	} else {
		arrowRS.setColor(sf::Color::White);
	}

	if (KeyRight == true) {
		CarSelectP1++;
		arrowRS.setColor(sf::Color::Blue);
		arrowLS.setColor(sf::Color::White);
		if (CarSelectP1 > 5) {
			CarSelectP1 = 1;
		}
		KeyRight = false;
	}

	if (KeyLeft == true) {
		CarSelectP1--;
		arrowLS.setColor(sf::Color::Blue);
		arrowRS.setColor(sf::Color::White);
		if (CarSelectP1 < 1) {
			CarSelectP1 = 5;
		}
		KeyLeft = false;
	}
	if (Mouse_Left == true) {
		if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
			CarSelectP1++;
			if (CarSelectP1 > 5) {
				CarSelectP1 = 1;
			}
		}

		if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
			CarSelectP1--;
			if (CarSelectP1 < 1) {
				CarSelectP1 = 5;
			}
		}

		if (SelectCar.getGlobalBounds().contains(mouse_coord)) {
			contSction = 1;
			keyShop = false;
			keyMenu = true;
			escolhafinalizada = false;

		}


		Mouse_Left = false;
	}

	if (CarSelectP1 == 1) {
		vitrine.loadFromFile("../assets/Cars/V1.png");
		vitrineS.setTexture(vitrine);
		vitrineS.setScale(0.7, 0.7);
		vitrineS.setPosition(360, 210);
	}
	if (CarSelectP1 == 2) {
		vitrine.loadFromFile("../assets/Cars/V2.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(0.3, 0.3);
	}
	if (CarSelectP1 == 3) {
		vitrine.loadFromFile("../assets/Cars/V3.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(0.7, 0.7);
	}
	if (CarSelectP1 == 4) {
		vitrine.loadFromFile("../assets/Cars/V4.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(0.7, 0.7);
	}
	if (CarSelectP1 == 5) {
		vitrineS.setScale(0.3, 0.3);
		vitrine.loadFromFile("../assets/Cars/V5.png");
		vitrineS.setTexture(vitrine, true);
	}

	if (SelecionadoEnter == true) {
		keyShop = false;
		keyMenu = true;
	}
}


void Loja::Section1(){
	if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
				arrowLS.setColor(sf::Color::Blue);
				arrowRS.setColor(sf::Color::White);
			} else {
				arrowLS.setColor(sf::Color::White);
			}
			if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
				arrowRS.setColor(sf::Color::Blue);
				arrowLS.setColor(sf::Color::White);
			} else {
				arrowRS.setColor(sf::Color::White);
			}

			if (KeyRight == true) {
				CarSelectP1++;
				arrowRS.setColor(sf::Color::Blue);
				arrowLS.setColor(sf::Color::White);
				if (CarSelectP1 > 5) {
					CarSelectP1 = 1;
				}
				KeyRight = false;
			}

			if (KeyLeft == true) {
				CarSelectP1--;
				arrowLS.setColor(sf::Color::Blue);
				arrowRS.setColor(sf::Color::White);
				if (CarSelectP1 < 1) {
					CarSelectP1 = 5;
				}
				KeyLeft = false;
			}
			if (Mouse_Left == true) {
				if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
					CarSelectP1++;
					if (CarSelectP1 > 5) {
						CarSelectP1 = 1;
					}
				}

				if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
					CarSelectP1--;
					if (CarSelectP1 < 1) {
						CarSelectP1 = 5;
					}
				}
				if (SelectCar.getGlobalBounds().contains(mouse_coord)) {
					contSction++;
				}

				Mouse_Left = false;
			}

			if (CarSelectP1 == 1) {
				vitrine.loadFromFile("../assets/Cars/V1.png");
				vitrineS.setTexture(vitrine);
				vitrineS.setScale(0.7, 0.7);
				vitrineS.setPosition(360, 210);
			}
			if (CarSelectP1 == 2) {
				vitrine.loadFromFile("../assets/Cars/V2.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.3, 0.3);
			}
			if (CarSelectP1 == 3) {
				vitrine.loadFromFile("../assets/Cars/V3.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.7, 0.7);
			}
			if (CarSelectP1 == 4) {
				vitrine.loadFromFile("../assets/Cars/V4.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.7, 0.7);
			}
			if (CarSelectP1 == 5) {
				vitrineS.setScale(0.3, 0.3);
				vitrine.loadFromFile("../assets/Cars/V5.png");
				vitrineS.setTexture(vitrine, true);
			}

}


void Loja::Section2(){
	startButton.loadFromFile("../assets/Settings/2Players.png");
	startButtonS.setTexture(settingButton, true);
	if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
			arrowLS.setColor(sf::Color::Blue);
			arrowRS.setColor(sf::Color::White);
		} else {
			arrowLS.setColor(sf::Color::White);
		}
		if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
			arrowRS.setColor(sf::Color::Blue);
			arrowLS.setColor(sf::Color::White);
		} else {
			arrowRS.setColor(sf::Color::White);
		}

		if (KeyRight == true) {
			CarSelectP2++;
			arrowRS.setColor(sf::Color::Blue);
			arrowLS.setColor(sf::Color::White);
			if (CarSelectP2 > 5) {
				CarSelectP2 = 1;
			}
			KeyRight = false;
		}

		if (KeyLeft == true) {
			CarSelectP2--;
			arrowLS.setColor(sf::Color::Blue);
			arrowRS.setColor(sf::Color::White);
			if (CarSelectP2 < 1) {
				CarSelectP2 = 5;
			}
			KeyLeft = false;
		}
		if (Mouse_Left == true) {
			if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
				CarSelectP2++;
				if (CarSelectP2 > 5) {
					CarSelectP2 = 1;
				}
			}

			if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
				CarSelectP2--;
				if (CarSelectP2 < 1) {
					CarSelectP2 = 5;
				}
			}

			if (SelectCar.getGlobalBounds().contains(mouse_coord)) {
						escolhafinalizada = true;
				}
			Mouse_Left = false;
		}

		if (CarSelectP2 == 1) {
			vitrine.loadFromFile("../assets/Cars/V1.png");
			vitrineS.setTexture(vitrine);
			vitrineS.setScale(0.7, 0.7);
			vitrineS.setPosition(360, 210);
		}
		if (CarSelectP2 == 2) {
			vitrine.loadFromFile("../assets/Cars/V2.png");
			vitrineS.setTexture(vitrine, true);
			vitrineS.setScale(0.3, 0.3);
		}
		if (CarSelectP2 == 3) {
			vitrine.loadFromFile("../assets/Cars/V3.png");
			vitrineS.setTexture(vitrine, true);
			vitrineS.setScale(0.7, 0.7);
		}
		if (CarSelectP2 == 4) {
			vitrine.loadFromFile("../assets/Cars/V4.png");
			vitrineS.setTexture(vitrine, true);
			vitrineS.setScale(0.7, 0.7);
		}
		if (CarSelectP2 == 5) {
			vitrineS.setScale(0.3, 0.3);
			vitrine.loadFromFile("../assets/Cars/V5.png");
			vitrineS.setTexture(vitrine, true);
		}

}

void Loja::SelectTwoPlayer() {
	if (contSction == 1) {
		Section1();

	}
	if (contSction == 2) {
		Section2();
	}

	if (escolhafinalizada == false) {
		if (SelecionadoEnter == true && contSction == 1) {
			contSction++;
			SelecionadoEnter = false;
		}
		if (SelecionadoEnter == true && contSction == 2) {
			escolhafinalizada = true;
			SelecionadoEnter = false;
		}
	}

	if (escolhafinalizada == true) {
		contSction = 1;
		keyShop = false;
		keyMenu = true;
		escolhafinalizada = false;
	}




}

void Loja::EventsLoja() {


	if (ModoGame == 1) {
		SelectOnePlayer();
	}

	if (ModoGame == 2) {
		SelectTwoPlayer();
	}

}

void Loja::run_loja() {
	InicializarLoja();
	EventsLoja();
}

