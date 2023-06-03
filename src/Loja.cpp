#include "header.hpp"

void Loja::InicializarLoja() {
	//retangles Shapes p1
	arrowMouseL.setPosition(20, 330);
	arrowMouseL.setSize(sf::Vector2f(50, 50));
	arrowMouseR.setPosition(398, 330);
	arrowMouseR.setSize(sf::Vector2f(50, 50));
	SelectCar.setSize(sf::Vector2f(200, 150));
	SelectCar.setPosition(130, 270);

	//Textures and Sprites p1
	ArrowR.loadFromFile("../assets/Loja/SetR.png");
	ArrowL.loadFromFile("../assets/Loja/SetL.png");
	ArrowRS.setTexture(ArrowR);
	ArrowLS.setTexture(ArrowL);
	ArrowRS.setColor(sf::Color::White);
	ArrowLS.setColor(sf::Color::White);

	ArrowRS.setScale(0.2, 0.2);
	ArrowRS.setPosition(350, 320);
	ArrowLS.setScale(0.2, 0.2);
	ArrowLS.setPosition(-25,320);
	vitrineS.setColor(sf::Color::White);


	///////retangle shapes p2
	arrowMouseL2.setPosition(845, 330);
	arrowMouseL2.setSize(sf::Vector2f(50, 50));
	arrowMouseR2.setPosition(1210, 330);
	arrowMouseR2.setSize(sf::Vector2f(50, 50));
	SelectCar2.setSize(sf::Vector2f(200, 150));
	SelectCar2.setPosition(955, 270);



	//Textures and Sprites p2
	ArrowRS2.setTexture(ArrowR);
	ArrowLS2.setTexture(ArrowL);
	ArrowRS2.setScale(0.2, 0.2);
	ArrowRS2.setPosition(1170, 320);
	ArrowLS2.setScale(0.2, 0.2);
	ArrowLS2.setPosition(800,320);
	vitrineS2.setColor(sf::Color::White);
	
	


	VolumeS.setColor(sf::Color::Transparent);
	fundo.loadFromFile("../assets/Loja/Loja.png");
	Fundo.setTexture(fundo, true);
	startButtonS.setColor(sf::Color::White);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	startButtonS.setPosition(550, 570);
<<<<<<< HEAD
	arrowR.loadFromFile("assets/Loja/SetR.png");
	arrowL.loadFromFile("assets/Loja/SetL.png");
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

=======




	
>>>>>>> 18f9739b6bdd83469f89cdafc5bc796d76798ea5
}


void Loja::Section1(){

	//coloring
	/*if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
				ArrowLS.setColor(sf::Color::Blue);
				ArrowRS.setColor(sf::Color::White);
			} else {
				ArrowLS.setColor(sf::Color::White);
			}
			if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
				ArrowRS.setColor(sf::Color::Blue);
				ArrowLS.setColor(sf::Color::White);
			} else {
				ArrowRS.setColor(sf::Color::White);
			}*/

			if (KeyD == true) {
				CarSelectP1++;
				ArrowRS.setColor(sf::Color::Blue);
				ArrowLS.setColor(sf::Color::White);
				if (CarSelectP1 > 5) {
					CarSelectP1 = 1;
				}
				KeyD = false;
			}

			if (KeyA == true) {
				CarSelectP1--;
				ArrowLS.setColor(sf::Color::Blue);
				ArrowRS.setColor(sf::Color::White);
				if (CarSelectP1 < 1) {
					CarSelectP1 = 5;
				}
				KeyA = false;
			}
	//coloring p2
	/*if (arrowMouseL2.getGlobalBounds().contains(mouse_coord)) {
			ArrowLS2.setColor(sf::Color::Blue);
			ArrowRS2.setColor(sf::Color::White);
		} else {
			ArrowLS2.setColor(sf::Color::White);
		}
		if (arrowMouseR2.getGlobalBounds().contains(mouse_coord)) {
			ArrowRS2.setColor(sf::Color::Blue);
			ArrowLS2.setColor(sf::Color::White);
		} else {
			ArrowRS2.setColor(sf::Color::White);
		}*/
			//click p1
			if (Space == true) {
				/*if (arrowMouseR.getGlobalBounds().contains(mouse_coord)) {
					CarSelectP1++;
					if (CarSelectP1 > 5) {
						CarSelectP1 = 1;
					}
				}*/

				/*if (arrowMouseL.getGlobalBounds().contains(mouse_coord)) {
					CarSelectP1--;
					if (CarSelectP1 < 1) {
						CarSelectP1 = 5;
					}
				}*/
					CarP1=CarSelectP1;
					escolhafinalizada1 = true;
					Space = false;
			}


			if (CarSelectP1 == 1) {
				vitrine.loadFromFile("../assets/Cars/V1.png");
				vitrineS.setTexture(vitrine);
				vitrineS.setScale(0.3, 0.3);
				vitrineS.setPosition(110, 296);
			}
			if (CarSelectP1 == 2) {
				vitrine.loadFromFile("../assets/Cars/V2.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.3, 0.3);
				vitrineS.setPosition(110, 296);
			}
			if (CarSelectP1 == 3) {
				vitrine.loadFromFile("../assets/Cars/V3.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.3, 0.3);
				vitrineS.setPosition(110, 296);
			}
			if (CarSelectP1 == 4) {
				vitrine.loadFromFile("../assets/Cars/V4.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.3, 0.3);
				vitrineS.setPosition(110, 296);
			}
			if (CarSelectP1 == 5) {
				vitrineS.setScale(0.3, 0.3);
				vitrine.loadFromFile("../assets/Cars/V5.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setPosition(110, 296);
			}

}

void Loja::Section2(){
	//coloring p2
	if (KeyRight == true) {
			CarSelectP2++;
			ArrowRS2.setColor(sf::Color::Blue);
			ArrowLS2.setColor(sf::Color::White);
			if (CarSelectP2 > 5) {
				CarSelectP2 = 1;
			}
			KeyRight = false;
		}

		if (KeyLeft == true) {
			CarSelectP2--;
			ArrowLS2.setColor(sf::Color::Blue);
			ArrowRS2.setColor(sf::Color::White);
			if (CarSelectP2 < 1) {
				CarSelectP2 = 5;
			}
			KeyLeft = false;
		}


	//click p2

			if (SelecionadoEnter == true) {
			/*if (arrowMouseR2.getGlobalBounds().contains(mouse_coord)) {
				CarSelectP2++;
				if (CarSelectP2 > 5) {
					CarSelectP2 = 1;
				}
			}

			if (arrowMouseL2.getGlobalBounds().contains(mouse_coord)) {
				CarSelectP2--;
				if (CarSelectP2 < 1) {
					CarSelectP2 = 5;
				}
			}*/
						escolhafinalizada2 = true;
						CarP2 = CarSelectP2;
						SelecionadoEnter = false;
				
		}

		if (CarSelectP2 == 1) {
			vitrine2.loadFromFile("../assets/Cars/V1.png");
			vitrineS2.setTexture(vitrine2);
			vitrineS2.setScale(0.3, 0.3);
			vitrineS2.setPosition(940, 296);
		}
		if (CarSelectP2 == 2) {
			vitrine2.loadFromFile("../assets/Cars/V2.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.3, 0.3);
			vitrineS2.setPosition(940, 296);
		}
		if (CarSelectP2 == 3) {
			vitrine2.loadFromFile("../assets/Cars/V3.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.3, 0.3);
			vitrineS2.setPosition(940, 296);
		}
		if (CarSelectP2 == 4) {
			vitrine2.loadFromFile("../assets/Cars/V4.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.3, 0.3);
			vitrineS2.setPosition(940, 296);
		}
		if (CarSelectP2 == 5) {
			vitrine2.loadFromFile("../assets/Cars/V5.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.3, 0.3);
			vitrineS2.setPosition(940, 296);
		}

	
	
}

void Loja::SelectTwoPlayer() {
		Section1();
		Section2();

		

	if(escolhafinalizada1 == true){
		arrowMouseR.setPosition(4000.0, 4000.0);
		arrowMouseL.setPosition(4000.0, 4000.0);
		SelectCar.setPosition(4000.0, 4000.0);
		
	}

	if(escolhafinalizada2 == true){
		arrowMouseR2.setPosition(4000.0, 4000.0);
		arrowMouseL2.setPosition(4000.0, 4000.0);
		SelectCar2.setPosition(4000.0, 4000.0);
		
	}
	
	if (escolhafinalizada1 == true && escolhafinalizada2 == true) {
		keyShop = false;
		keyGame = true;
		escolhafinalizada1 = false;
		escolhafinalizada2 = false;
	}

}

void Loja::EventsLoja() {
<<<<<<< HEAD


		SelectTwoPlayer();

=======
		SelectTwoPlayer();
>>>>>>> 18f9739b6bdd83469f89cdafc5bc796d76798ea5

}

void Loja::run_loja() {
	InicializarLoja();
	EventsLoja();

}

