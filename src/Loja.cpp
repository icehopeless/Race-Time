#include "header.hpp"

void Loja::InicializarLoja() {
	offLoja = 0;

	//Textures and Sprites p1
	ArrowR.loadFromFile("assets/Loja/SetR.png");
	ArrowL.loadFromFile("assets/Loja/SetL.png");
	ArrowRS.setTexture(ArrowR,true);
	ArrowLS.setTexture(ArrowL,true);
	ArrowRS.setColor(sf::Color::White);
	ArrowLS.setColor(sf::Color::White);
	ArrowRS.setScale(0.3, 0.3);
	ArrowRS.setPosition(370, 360);
	ArrowLS.setScale(0.3, 0.3);
	ArrowLS.setPosition(0,360);
	vitrineS.setColor(sf::Color::White);
	ArrowRS2.setTexture(ArrowR);
	ArrowLS2.setTexture(ArrowL);
	ArrowRS2.setScale(0.3, 0.3);
	ArrowRS2.setPosition(1070, 360);
	ArrowLS2.setScale(0.3, 0.3);
	ArrowLS2.setPosition(700,360);
	vitrineS2.setColor(sf::Color::White);
	ArrowRS2.setColor(sf::Color::White);
	ArrowLS2.setColor(sf::Color::White);
	CarSelectP1 = 1;
	CarSelectP2 = 1;
	SelecionadoEnter= false;
	KeyDown = false;
	 KeyUP = false;
	 KeyLeft = false;
	 KeyRight = false;
	 SelecionadoEnter = false;
	 Space = false;
	 KeyA = false;
	 KeyD = false;
}

void Loja::DesenharFundoLoja(sf::Sprite * Fundo){
	fundo.loadFromFile("assets/Loja/Loja.png");
	Fundo->setTexture(fundo, true);
}
void Loja::EventesKeyBoard(){

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && KeyDown == false) {
				KeyA = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)
					&& SelecionadoEnter == false) {
				Space = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && KeyDown == false) {
				KeyD = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)
					&& KeyDown == false) {
				KeyDown = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && KeyUP == false) {
				KeyUP = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)
					&& KeyLeft == false) {
				KeyLeft = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)
					&& KeyRight == false) {
				KeyRight = true;
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)
					&& SelecionadoEnter == false) {
				SelecionadoEnter = true;
			}

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
				vitrine.loadFromFile("assets/Cars/V1.png");
				vitrineS.setTexture(vitrine);
				vitrineS.setScale(0.34, 0.34);
				vitrineS.setPosition(156, 326);
			}
			if (CarSelectP1 == 2) {
				vitrine.loadFromFile("assets/Cars/V2.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.14, 0.14);
				vitrineS.setPosition(146, 326);
			}
			if (CarSelectP1 == 3) {
				vitrine.loadFromFile("assets/Cars/V3.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.34, 0.34);
				vitrineS.setPosition(136, 326);
			}
			if (CarSelectP1 == 4) {
				vitrine.loadFromFile("assets/Cars/V4.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setScale(0.34, 0.34);
				vitrineS.setPosition(156, 326);
			}
			if (CarSelectP1 == 5) {
				vitrineS.setScale(0.14, 0.14);
				vitrine.loadFromFile("assets/Cars/V5.png");
				vitrineS.setTexture(vitrine, true);
				vitrineS.setPosition(156, 326);
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
			vitrine2.loadFromFile("assets/Cars/V1.png");
			vitrineS2.setTexture(vitrine2);
			vitrineS2.setScale(0.34, 0.34);
			vitrineS2.setPosition(840, 326);
		}
		if (CarSelectP2 == 2) {
			vitrine2.loadFromFile("assets/Cars/V2.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.14, 0.14);
			vitrineS2.setPosition(840, 326);
		}
		if (CarSelectP2 == 3) {
			vitrine2.loadFromFile("assets/Cars/V3.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.34, 0.34);
			vitrineS2.setPosition(840, 326);
		}
		if (CarSelectP2 == 4) {
			vitrine2.loadFromFile("assets/Cars/V4.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.34, 0.34);
			vitrineS2.setPosition(840, 326);
		}
		if (CarSelectP2 == 5) {
			vitrine2.loadFromFile("assets/Cars/V5.png");
			vitrineS2.setTexture(vitrine2, true);
			vitrineS2.setScale(0.14, 0.14);
			vitrineS2.setPosition(840, 326);
		}

	
	
}
void Loja::CarsSelecteds(int *Car1,int *Car2){
	*Car1 = this->CarP1;
	*Car2 = this->CarP2;
}
void Loja::SelectTwoPlayer() {
		Section1();
		Section2();


	if (escolhafinalizada1 == true and escolhafinalizada2 == true) {
		OffLoja();

		escolhafinalizada1 = false;
		escolhafinalizada2 = false;
	}

}
void Loja::OffLoja(){
	offLoja = 1;
	init_Loja = false;
}
int Loja::returnKeyLoja(){
	return offLoja;

}
void Loja::EventsLoja() {
		SelectTwoPlayer();

}
void Loja::drawLoja(sf::RenderWindow * w){
	w->draw(vitrineS2);
	w->draw(ArrowRS);
	w->draw(ArrowLS2);
	w->draw(ArrowLS);
	w->draw(vitrineS);
	w->draw(ArrowRS2);
}
void Loja::run_loja() {
	if(init_Loja == false){
		InicializarLoja();
		init_Loja = true;
	}
	EventsLoja();

}

