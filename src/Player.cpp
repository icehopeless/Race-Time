#include "header.hpp"


void Carros::Moviment_cars(){
	if(Player == 1){
		Moviment_car1();
	}
	if(Player == 2){
		Moviment_car2();
	}
}


void Carros::Moviment_car1() {
	bool camb1;
	bool camb2;
	bool camb3;
	bool camb4;

	if (CarP1 == 1) {
		if (KeyA == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyA = false;
			zero.setRotation(180);
			camb1 = true;
		}
		if (KeyD == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyD = false;
			zero.setRotation(360);

			camb2 = true;
		}
		if (KeyW == true) {
			zero.setRotation(270);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyW = false;
			camb3 = true;
		}
		if (KeyS == true) {
			zero.setRotation(90);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyS = false;
		}
		if (camb1 == true and camb3 == true) {
			zero.setRotation(225);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(330);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(135);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(45);
			camb2 = false;
			camb4 = false;
		}
	}

	if (CarP1 == 2) {
		if (KeyA == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyA = false;
			zero.setRotation(90);
			camb1 = true;
		}
		if (KeyD == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyD = false;
			zero.setRotation(270);

			camb2 = true;
		}
		if (KeyW == true) {
			zero.setRotation(180);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyW = false;
			camb3 = true;
		}
		if (KeyS == true) {
			zero.setRotation(360);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyS = false;
		}
		if (camb1 == true and camb3 == true) {
			zero.setRotation(135);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(225);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(45);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(330);
			camb2 = false;
			camb4 = false;
		}
	}

	if (CarP1 == 3) {
		if (KeyA == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyA = false;
			zero.setRotation(360);
			camb1 = true;
		}
		if (KeyD == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyD = false;
			zero.setRotation(180);

			camb2 = true;
		}
		if (KeyW == true) {
			zero.setRotation(90);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyW = false;
			camb3 = true;
		}
		if (KeyS == true) {
			zero.setRotation(270);
			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyS = false;
		}
		if (camb1 == true and camb3 == true) {
			zero.setRotation(45);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(135);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(330);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(225);
			camb2 = false;
			camb4 = false;
		}

	}

	if (CarP1 == 4) {
			if (KeyA == true) {
				zero.setPosition(zero.getPosition().x - vel,
						zero.getPosition().y);
				KeyA = false;
				zero.setRotation(180);
				camb1 = true;
			}
			if (KeyD == true) {
				zero.setPosition(zero.getPosition().x + vel,
						zero.getPosition().y);
				KeyD = false;
				zero.setRotation(360);

				camb2 = true;
			}
			if (KeyW == true) {
				zero.setRotation(270);

				zero.setPosition(zero.getPosition().x,
						zero.getPosition().y - vel);
				KeyW = false;
				camb3 = true;
			}
			if (KeyS == true) {
				zero.setRotation(90);

				camb4 = true;
				zero.setPosition(zero.getPosition().x,
						zero.getPosition().y + vel);
				KeyS = false;
			}
			if (camb1 == true and camb3 == true) {
				zero.setRotation(225);
				camb1 = false;
				camb3 = false;
			}

			if (camb3 == true and camb2 == true) {
				zero.setRotation(330);
				camb2 = false;
				camb3 = false;
			}

			if (camb1 == true and camb4 == true) {
				zero.setRotation(135);

				camb1 = false;
				camb4 = false;
			}

			if (camb4 == true and camb2 == true) {
				zero.setRotation(45);
				camb2 = false;
				camb4 = false;
			}
		}

	if (CarP1 == 5) {
		if (KeyA == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyA = false;
			zero.setRotation(180);
			camb1 = true;
		}
		if (KeyD == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyD = false;
			zero.setRotation(360);

			camb2 = true;
		}
		if (KeyW == true) {
			zero.setRotation(270);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyW = false;
			camb3 = true;
		}
		if (KeyS == true) {
			zero.setRotation(90);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyS = false;
		}
		if (camb1 == true and camb3 == true) {
			zero.setRotation(225);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(330);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(135);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(45);
			camb2 = false;
			camb4 = false;
		}
	}


}


void Carros::velocidadeP1(){
	switch(CarP1){
		case 2:
			this->vel = vel+0.002;
		break;

		case 3:
			this->vel = vel+0.003;
		break;

		case 4:
			this->vel = vel+0.004;
		break;

		case 5:
			this->vel = vel+0.005;
		break;
	}
}


void Carros::Moviment_car2() {

	bool camb1;
	bool camb2;
	bool camb3;
	bool camb4;

	if (CarP2 == 1) {

		if (KeyLeft == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyLeft = false;
			zero.setRotation(180);
			camb1 = true;
		}
		if (KeyRight == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyRight = false;
			zero.setRotation(360);

			camb2 = true;
		}
		if (KeyUP == true) {
			zero.setRotation(270);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyUP = false;
			camb3 = true;
		}
		if (KeyDown == true) {
			zero.setRotation(90);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyDown = false;
		}

		if (camb1 == true and camb3 == true) {
			zero.setRotation(225);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(330);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(135);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(45);
			camb2 = false;
			camb4 = false;
		}
	}


	if (CarP2 == 2) {

		if (KeyLeft == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyLeft = false;
			zero.setRotation(90);
			camb1 = true;
		}
		if (KeyRight == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyRight = false;
			zero.setRotation(270);

			camb2 = true;
		}
		if (KeyUP == true) {
			zero.setRotation(180);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyUP = false;
			camb3 = true;
		}
		if (KeyDown == true) {
			zero.setRotation(360);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyDown = false;
		}

		if (camb1 == true and camb3 == true) {
			zero.setRotation(135);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(225);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(45);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(330);
			camb2 = false;
			camb4 = false;
		}
	}



	if (CarP2 == 3) {

		if (KeyLeft == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyLeft = false;
			zero.setRotation(360);
			camb1 = true;
		}
		if (KeyRight == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyRight = false;
			zero.setRotation(180);

			camb2 = true;
		}
		if (KeyUP == true) {
			zero.setRotation(90);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyUP = false;
			camb3 = true;
		}
		if (KeyDown == true) {
			zero.setRotation(270);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyDown = false;
		}

		if (camb1 == true and camb3 == true) {
			zero.setRotation(45);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(135);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(330);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(225);
			camb2 = false;
			camb4 = false;
		}
	}

	if (CarP2 == 4) {

		if (KeyLeft == true) {
			zero.setPosition(zero.getPosition().x - vel,
					zero.getPosition().y);
			KeyLeft = false;
			zero.setRotation(180);
			camb1 = true;
		}
		if (KeyRight == true) {
			zero.setPosition(zero.getPosition().x + vel,
					zero.getPosition().y);
			KeyRight = false;
			zero.setRotation(360);

			camb2 = true;
		}
		if (KeyUP == true) {
			zero.setRotation(270);

			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y - vel);
			KeyUP = false;
			camb3 = true;
		}
		if (KeyDown == true) {
			zero.setRotation(90);

			camb4 = true;
			zero.setPosition(zero.getPosition().x,
					zero.getPosition().y + vel);
			KeyDown = false;
		}

		if (camb1 == true and camb3 == true) {
			zero.setRotation(225);
			camb1 = false;
			camb3 = false;
		}

		if (camb3 == true and camb2 == true) {
			zero.setRotation(330);
			camb2 = false;
			camb3 = false;
		}

		if (camb1 == true and camb4 == true) {
			zero.setRotation(135);

			camb1 = false;
			camb4 = false;
		}

		if (camb4 == true and camb2 == true) {
			zero.setRotation(45);
			camb2 = false;
			camb4 = false;
		}
	}
	if (CarP2 == 5) {

			if (KeyLeft == true) {
				zero.setPosition(zero.getPosition().x - vel,
						zero.getPosition().y);
				KeyLeft = false;
				zero.setRotation(180);
				camb1 = true;
			}
			if (KeyRight == true) {
				zero.setPosition(zero.getPosition().x + vel,
						zero.getPosition().y);
				KeyRight = false;
				zero.setRotation(360);

				camb2 = true;
			}
			if (KeyUP == true) {
				zero.setRotation(270);

				zero.setPosition(zero.getPosition().x,
						zero.getPosition().y - vel);
				KeyUP = false;
				camb3 = true;
			}
			if (KeyDown == true) {
				zero.setRotation(90);

				camb4 = true;
				zero.setPosition(zero.getPosition().x,
						zero.getPosition().y + vel);
				KeyDown = false;
			}

			if (camb1 == true and camb3 == true) {
				zero.setRotation(225);
				camb1 = false;
				camb3 = false;
			}

			if (camb3 == true and camb2 == true) {
				zero.setRotation(330);
				camb2 = false;
				camb3 = false;
			}

			if (camb1 == true and camb4 == true) {
				zero.setRotation(135);

				camb1 = false;
				camb4 = false;
			}

			if (camb4 == true and camb2 == true) {
				zero.setRotation(45);
				camb2 = false;
				camb4 = false;
			}
		}

}

void Carros::velocidadeP2(){
	switch(CarP2){
		case 2:
			this->vel += 0.002;
		break;

		case 3:
			this->vel = vel+0.003;
		break;

		case 4:
			this->vel = vel+0.004;
		break;

		case 5:
			this->vel = vel+0.005;
		break;
	}
}
void Carros::Reception(int x){
	this->Track_referent = x;
}
void Carros::SetCar() {
	if(Player == 1){
		SetCar1();
	}
	if(Player == 2){
		SetCar2();
	}
}

void Carros::SetCar1() {
	velocidadeP1();
		if(CarP1 == 1){
			car.loadFromFile("assets/Cars/Sprites/BlackOut.png");
			zero.setScale(1, 1);
			zero.setRotation(180);
		}
		if(CarP1 == 2){
			car.loadFromFile("assets/Cars/Sprites/TT.png");
			zero.setScale(0.13, 0.13);
			zero.setRotation(90);

		}
		if(CarP1 == 3){
			car.loadFromFile("assets/Cars/Sprites/SkyLine.png");
			zero.setScale(0.08, 0.1);
		}
		if(CarP1 == 4){
			car.loadFromFile("assets/Cars/Sprites/Trueno.png");
			zero.setScale(0.1, 0.1);
			zero.setRotation(180);
		}
		if(CarP1 == 5){
			car.loadFromFile("assets/Cars/Sprites/Ferrari.png");
			zero.setScale(0.08, 0.08);
			zero.setRotation(180);
		}

		if(Track_referent == 0 and CarP1 == 1){
			zero.setTexture(car,true);
			zero.setPosition(900, 598);
		}
		if(Track_referent == 0 and CarP1 == 2){
			zero.setTexture(car,true);
			zero.setPosition(914, 534);
			zero.setRotation(90);
		}
		if(Track_referent == 0 and CarP1 == 3){
			zero.setTexture(car,true);
			zero.setPosition(843, 552);
		}
		if(Track_referent == 0 and CarP1 == 4){
			zero.setTexture(car,true);
			zero.setPosition(909, 582);
		}
		if(Track_referent == 0 and CarP1 == 5){
			zero.setTexture(car,true);
			zero.setPosition(909, 608);
		}

		if(Track_referent == 1 and CarP1 == 1){
			zero.setTexture(car,true);
			zero.setPosition(84, 579);
			zero.setRotation(270);
		}
		if(Track_referent == 1 and CarP1 == 2){
			zero.setTexture(car,true);
			zero.setPosition(144, 579);
			zero.setRotation(180);
		}
		if(Track_referent == 1 and CarP1 == 3){
			zero.setTexture(car,true);
			zero.setPosition(84, 579);
			zero.setRotation(90);
		}
		if(Track_referent == 1 and CarP1 == 4){
			zero.setTexture(car,true);
			zero.setPosition(84, 579);
			zero.setRotation(270);
		}
		if(Track_referent == 1 and CarP1 == 5){
			zero.setTexture(car,true);
			zero.setPosition(84, 589);
			zero.setRotation(270);
		}


		if(Track_referent == 2 and CarP1 == 1){
					zero.setTexture(car,true);
					zero.setPosition(796, 534);
				}
				if(Track_referent == 2 and CarP1 == 2){
					zero.setTexture(car,true);
					zero.setPosition(805, 469);
					zero.setRotation(90);
				}
				if(Track_referent == 2 and CarP1 == 3){
					zero.setTexture(car,true);
					zero.setPosition(730, 470);
				}
				if(Track_referent == 2 and CarP1 == 4){
					zero.setTexture(car,true);
					zero.setPosition(790, 510);
				}
				if(Track_referent == 2 and CarP1 == 5){
					zero.setTexture(car,true);
					zero.setPosition(812, 535);
				}




}

void Carros::SetCar2() {

	velocidadeP2();

		if(CarP2 == 1){
			car.loadFromFile("assets/Cars/Sprites/BlackOut.png");
			zero.setScale(1, 1);
			zero.setRotation(180);
		}
		if(CarP2 == 2){
			car.loadFromFile("assets/Cars/Sprites/TT.png");
			zero.setScale(0.13, 0.13);
			zero.setRotation(90);
		}
		if(CarP2 == 3){
			car.loadFromFile("assets/Cars/Sprites/SkyLine.png");
			zero.setScale(0.08, 0.1);
		}
		if(CarP2 == 4){
			car.loadFromFile("assets/Cars/Sprites/Trueno.png");
			zero.setScale(0.1, 0.1);
			zero.setRotation(180);
		}
		if(CarP2 == 5){
			car.loadFromFile("assets/Cars/Sprites/Ferrari.png");
			zero.setScale(0.08, 0.08);
			zero.setRotation(180);
		}


		if(Track_referent == 0 and CarP2 == 1){
			zero.setTexture(car,true);
			zero.setPosition(900, 658);
		}
		if(Track_referent == 0 and CarP2 == 2){
			zero.setTexture(car,true);
			zero.setPosition(914, 604);
			zero.setRotation(90);
		}
		if(Track_referent == 0 and CarP2 == 3){
			zero.setTexture(car,true);
			zero.setPosition(843, 602);
		}
		if(Track_referent == 0 and CarP2 == 4){
			zero.setTexture(car,true);
			zero.setPosition(909, 622);
		}
		if(Track_referent == 0 and CarP2 == 5){
			zero.setTexture(car,true);
			zero.setPosition(909, 658);
		}


		if(Track_referent == 1 and CarP2 == 1){
			zero.setTexture(car,true);
			zero.setPosition(144, 579);
			zero.setRotation(270);
		}

		if(Track_referent == 1 and CarP2 == 2){
			zero.setTexture(car,true);
			zero.setPosition(204, 579);
			zero.setRotation(180);
		}

		if(Track_referent == 1 and CarP2 == 3){
			zero.setTexture(car,true);
			zero.setPosition(182, 510);
			zero.setRotation(90);
		}

		if(Track_referent == 1 and CarP2 == 4){
			zero.setTexture(car,true);
			zero.setPosition(144, 579);
			zero.setRotation(270);
		}

		if(Track_referent == 1 and CarP2 == 5){
			zero.setTexture(car,true);
			zero.setPosition(144, 599);
			zero.setRotation(270);
		}


		if(Track_referent == 2 and CarP2 == 1){
					zero.setTexture(car,true);
					zero.setPosition(796, 584);
				}
				if(Track_referent == 2 and CarP2 == 2){
					zero.setTexture(car,true);
					zero.setPosition(805, 539);
					zero.setRotation(90);
				}
				if(Track_referent == 2 and CarP2 == 3){
					zero.setTexture(car,true);
					zero.setPosition(730, 540);
				}
				if(Track_referent == 2 and CarP2 == 4){
					zero.setTexture(car,true);
					zero.setPosition(790, 570);
				}
				if(Track_referent == 2 and CarP2 == 5){
					zero.setTexture(car,true);
					zero.setPosition(812, 585);
				}



}


void Carros::EventsCar(){
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && KeyDown == false) {
		KeyA = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && KeyDown == false) {
		KeyD = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && KeyDown == false) {
		KeyDown = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && KeyUP == false) {
		KeyUP = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && KeyLeft == false) {
		KeyLeft = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && KeyRight == false) {
		KeyRight = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W) && KeyW == false) {
		KeyW = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && KeyD == false) {
		KeyD = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && KeyA == false) {
		KeyA = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S) && KeyS == false) {
		KeyS = true;
	}
}
