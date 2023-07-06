#include "header.hpp"

void Game::InicializarGame() {
	timepassado = clock.restart();
	Voltas = 0;
	Check_Lap = false;
	Voltas2 = 0;
	Check_Lap2 = false;
	Contagem_Realizada = false;
	SoundCont = false;
	Init_Game = false;
	KeyFinaleGame = false;
	draw_cars = false;
	bufferNItro.loadFromFile("assets/Sounds/Game/Nitrous.wav");
	sound.setBuffer(bufferNItro);
	sound.setVolume(1000);
	Contador.loadFromFile("assets/Sounds/Game/GO.wav");
	Go.setBuffer(Contador);
	Go.setVolume(SOundGo);
	font.loadFromFile("assets/Font/VintageTimes.ttf");
	Contagem.setFont(font);
	Contagem.setCharacterSize(500);
	Contagem.setFillColor(sf::Color::Black);
	Contagem.setPosition(500, 50);
	KeyFinaleGame = false;
	Result = 0;
	meio.setFillColor(sf::Color::Transparent);
	meio.setSize(sf::Vector2f(850, 355));
	meio.setPosition(215.0, 185.0);
	Money1 = false;
	Money2 = false;
	Money3 = false;
	Money4 = false;
	Money5 = false;
	Money6 = false;
	for(int i =0; i < 6; i++){
		moeda[i].setColor(sf::Color::White);
	}
	PistaRefrent();

}

void Game::Setpista(int pista) {
	this->Nivelatual = pista;
}
void Game::CarsSelceteds(int CarP1, int CarP2) {
	this->CarP1 = CarP1;
	this->CarP2 = CarP2;

}
void Game::PistaRefrent() {
	if (Nivelatual == 0) {
		fundo.loadFromFile("assets/Game/map1.png");
	} else if (Nivelatual == 1) {
		fundo.loadFromFile("assets/Game/map2.png");
	} else if (Nivelatual == 2) {
		fundo.loadFromFile("assets/Game/map3.png");
	} else if (Nivelatual == 3) {
		KeyFinaleGame = true;
	} else if (Nivelatual == 4) {
		fundo.loadFromFile("assets/Game/map5.png");
	} else if (Nivelatual == 5) {
		fundo.loadFromFile("assets/Game/map6.png");
	} else if (Nivelatual == 6) {
		fundo.loadFromFile("assets/Game/map7.png");
	} else if (Nivelatual == 7) {
		fundo.loadFromFile("assets/Game/map8.png");
	} else if (Nivelatual == 8) {
		KeyFinaleGame = true;
	} else if (Nivelatual == 9) {
		KeyFinaleGame = true;
	}

	else if (Nivelatual != 0) {
		KeyFinaleGame = true;
	}
}

void Game::stopedMusic(sf::Music *music) {
	Volume = music->getVolume();
	Go.setVolume(Volume + 100);
	music->stop();
}
void Game::DrawGame(sf::RenderWindow *w) {
	w->draw(textp1);
	w->draw(textp2);
	w->draw(TimeGame);
	w->draw(cars1);
	w->draw(cars2);
	w->draw(nitroSprite);
	w->draw(nitroSprite2);
	w->draw(nitroSprite3);
	w->draw(nitroSprite4);


	for (int i = 0; i < 6; i++) {
		w->draw(moeda[i]);
	}

	w->draw(meio);
	w->draw(Contagem);
}

void Game::DesenharFundoPista(sf::Sprite *Fundo) {
	Fundo->setTexture(fundo);
}
void Carros::draw(sf::RenderWindow *w) {
	w->draw(zero);
}
void Game::FinalPista(int *pista) {
	*pista = this->Nivelatual;
}

void Game::Start_Cars(Carros *carro, Carros *carro2) {
	if (draw_cars == false) {
		carro->Init_Carros(1, CarP1);
		carro2->Init_Carros(2, CarP2);
		carro->SetCar();
		carro2->SetCar();
		draw_cars = true;
	}
}

void Game::ColisionsInCars(Carros *car1, Carros *car2) {
	/*
	 carBounds1 = car1->zero.getGlobalBounds();
	 carBounds2 = car2->zero.getGlobalBounds();

	 if (carBounds1.intersects(carBounds2)) {
	 car1->zero.setPosition(car1->zero.getPosition().x,
	 car1->zero.getPosition().y + 0.1);
	 }
	 if (carBounds2.intersects(carBounds1)) {
	 car2->zero.setPosition(car2->zero.getPosition().x,
	 car2->zero.getPosition().y - 0.1);
	 }
	 *
	 */
}
void Game::Colisions(Carros *car) {

	colison1.setSize(sf::Vector2f(1280, 70));
	colison2.setSize(sf::Vector2f(39, 1090));
	colison2.setPosition(41, 0);
	colison3.setSize(sf::Vector2f(120, 1080));
	colison3.setPosition(1211, 0);
	colison4.setSize(sf::Vector2f(1280, 60));
	colison4.setPosition(0, 657);

	carBounds = car->zero.getGlobalBounds();
	ColisonBounds = colison1.getGlobalBounds();
	ColisonBounds2 = colison2.getGlobalBounds();
	ColisonBounds3 = colison3.getGlobalBounds();
	ColisonBounds4 = colison4.getGlobalBounds();
	ColisonBounds5 = colison5.getGlobalBounds();
	ColisonBounds6 = colison6.getGlobalBounds();
	ColisonBounds7 = colison7.getGlobalBounds();
	ColisonBounds8 = colison8.getGlobalBounds();
	ColisonBounds9 = colison9.getGlobalBounds();
	ColisonBounds10 = colison10.getGlobalBounds();
	LineVicttory = Line.getGlobalBounds();
	CheckPoint = check.getGlobalBounds();

	if (Nivelatual == 0) {

		colison9.setSize(sf::Vector2f(0, 0));
		colison10.setSize(sf::Vector2f(0, 0));
		colison8_1.setSize(sf::Vector2f(0, 0));
		colison8_2.setSize(sf::Vector2f(0, 0));
		colison8_3.setSize(sf::Vector2f(0, 0));
		colison8_4.setSize(sf::Vector2f(0, 0));
		colison5.setSize(sf::Vector2f(239, 39));
		colison6.setSize(sf::Vector2f(239, 39));
		colison7.setSize(sf::Vector2f(746, 39));
		colison8.setSize(sf::Vector2f(746, 39));
		colison5.setRotation(90);
		colison6.setRotation(90);
		colison5.setPosition(262, 246);
		colison6.setPosition(1060, 246);
		colison7.setPosition(260, 490);
		colison8.setPosition(260, 186);
		check.setSize(sf::Vector2f(239, 70));
		check.setRotation(90);
		check.setPosition(810, 0);
		Line.setSize(sf::Vector2f(239, 78));
		Line.setRotation(90);
		Line.setPosition(810, 460);

		if (carBounds.intersects(ColisonBounds5)) {
			car->zero.setPosition(car->zero.getPosition().x - car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds6)) {
			car->zero.setPosition(car->zero.getPosition().x + car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds7)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y + car->vel);
		}
		if (carBounds.intersects(ColisonBounds8)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}
	}

	if (Nivelatual == 1) {
		colison5.setSize(sf::Vector2f(329, 70));
		colison6.setSize(sf::Vector2f(329, 70));
		colison7.setSize(sf::Vector2f(746, 39));
		colison8.setSize(sf::Vector2f(746, 39));
		colison9.setSize(sf::Vector2f(329, 70));
		colison10.setSize(sf::Vector2f(329, 70));
		colison5.setRotation(90);
		colison6.setRotation(90);
		colison9.setRotation(90);
		colison10.setRotation(90);
		colison5.setPosition(1010, 180);
		colison6.setPosition(1066, 180);
		colison9.setPosition(285, 180);
		colison10.setPosition(341, 180);
		colison7.setPosition(260, 320);
		colison8.setPosition(265, 206);
		colison5.setFillColor(sf::Color::Blue);
		colison6.setFillColor(sf::Color::Red);
		colison7.setFillColor(sf::Color::Green);
		colison8.setFillColor(sf::Color::Yellow);
		colison10.setFillColor(sf::Color::Red);
		colison9.setFillColor(sf::Color::Red);
		check.setSize(sf::Vector2f(239, 78));
		check.setRotation(90);
		check.setPosition(810, 0);
		Line.setSize(sf::Vector2f(239, 78));
		Line.setRotation(180);
		Line.setPosition(270, 500);

		colison8_1.setSize(sf::Vector2f(369, 320));
		colison8_1.setRotation(90);
		colison8_1.setPosition(800, 480);

		colison8_2.setSize(sf::Vector2f(369, 20));
		colison8_2.setRotation(90);
		colison8_2.setPosition(805, 480);
		colison8_2.setFillColor(sf::Color::Cyan);

		colison8_3.setSize(sf::Vector2f(369, 20));
		colison8_3.setRotation(90);
		colison8_3.setPosition(495, 480);
		colison8_3.setFillColor(sf::Color::Cyan);

		ColisonBounds8_1 = colison8_1.getGlobalBounds();
		ColisonBounds8_2 = colison8_2.getGlobalBounds();
		ColisonBounds8_3 = colison8_3.getGlobalBounds();
		if (carBounds.intersects(ColisonBounds5)) {
			car->zero.setPosition(car->zero.getPosition().x - car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds6)) {
			car->zero.setPosition(car->zero.getPosition().x + car->vel,
					car->zero.getPosition().y);
		}

		if (carBounds.intersects(ColisonBounds9)) {
			car->zero.setPosition(car->zero.getPosition().x - car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds10)) {
			car->zero.setPosition(car->zero.getPosition().x + car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds7)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y + car->vel);
		}
		if (carBounds.intersects(ColisonBounds8)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}
		if (carBounds.intersects(ColisonBounds8_1)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}
		if (carBounds.intersects(ColisonBounds8_2)) {
			car->zero.setPosition(car->zero.getPosition().x + car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds8_3)) {
			car->zero.setPosition(car->zero.getPosition().x - car->vel,
					car->zero.getPosition().y);
		}
	}
	if (Nivelatual == 2) {
		colison5.setSize(sf::Vector2f(239, 39));
		colison6.setSize(sf::Vector2f(239, 39));
		colison7.setSize(sf::Vector2f(746, 39));
		colison8.setSize(sf::Vector2f(746, 39));
		colison5.setRotation(90);
		colison6.setRotation(90);

		colison5.setPosition(300, 240);
		colison6.setPosition(1023, 240);
		colison7.setPosition(260, 430);
		colison8.setPosition(260, 250);

		colison8_1.setPosition(480, 650);
		colison8_2.setPosition(520, 610);
		colison8_3.setPosition(470, 40);
		colison8_4.setPosition(520, 70);

		//order = x,y x,y
		colison8_1.setSize(sf::Vector2f(410, 39));
		colison8_2.setSize(sf::Vector2f(300, 39));
		colison8_3.setSize(sf::Vector2f(410, 39));
		colison8_4.setSize(sf::Vector2f(300, 39));

		check.setSize(sf::Vector2f(239, 78));
		check.setRotation(90);
		check.setPosition(720, 10);
		Line.setSize(sf::Vector2f(239, 78));
		Line.setRotation(90);
		Line.setPosition(720, 460);

		if (carBounds.intersects(ColisonBounds5)) {
			car->zero.setPosition(car->zero.getPosition().x - car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds6)) {
			car->zero.setPosition(car->zero.getPosition().x + car->vel,
					car->zero.getPosition().y);
		}
		if (carBounds.intersects(ColisonBounds7)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y + car->vel);
		}
		if (carBounds.intersects(ColisonBounds8)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}

		if (carBounds.intersects(ColisonBounds)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y + car->vel);
		}

		if (carBounds.intersects(ColisonBounds2)) {
			car->zero.setPosition(car->zero.getPosition().x + car->vel,
					car->zero.getPosition().y);
		}

		if (carBounds.intersects(ColisonBounds3)) {
			car->zero.setPosition(car->zero.getPosition().x - car->vel,
					car->zero.getPosition().y);
		}

		if (carBounds.intersects(ColisonBounds4)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}

		if (carBounds.intersects(ColisonBounds8_1)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}
		if (carBounds.intersects(ColisonBounds8_2)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y - car->vel);
		}
		if (carBounds.intersects(ColisonBounds8_3)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y + car->vel);
		}
		if (carBounds.intersects(ColisonBounds8_4)) {
			car->zero.setPosition(car->zero.getPosition().x,
					car->zero.getPosition().y + car->vel);
		}

	}

	if (carBounds.intersects(ColisonBounds)) {
		car->zero.setPosition(car->zero.getPosition().x,
				car->zero.getPosition().y + car->vel);
	}

	if (carBounds.intersects(ColisonBounds2)) {
		car->zero.setPosition(car->zero.getPosition().x + car->vel,
				car->zero.getPosition().y);
	}

	if (carBounds.intersects(ColisonBounds3)) {
		car->zero.setPosition(car->zero.getPosition().x - car->vel,
				car->zero.getPosition().y);
	}

	if (carBounds.intersects(ColisonBounds4)) {
		car->zero.setPosition(car->zero.getPosition().x,
				car->zero.getPosition().y - car->vel);
	}

}

void Game::nitroo(Carros *car, sf::RenderWindow *w) {

	nitroTexture.loadFromFile("assets/Game/nitro.png");
	operationsNitro(car);

	carBounds = car->zero.getGlobalBounds();
	meiobounds = meio.getGlobalBounds();

	nitroSprite.setScale(0.2, 0.2);
	nitroSprite.setTexture(nitroTexture);
	nitroBounds = nitroSprite.getGlobalBounds();
	if(Nivelatual == 0){
		nitroSprite.setPosition(929, 522);
	}

	moveNitro();

}

void Game::operationsNitro(Carros *car) {
	carBounds = car->zero.getGlobalBounds();
	if (time == 1500) {
		car->vel -= (cont_speed * 0.1);
		cont_speed = 0;
	}

	if (time > 3000) {
		if (carBounds.intersects(nitroBounds)) {
			car->vel += 0.1;
			cont_speed++;
			sound.play();
			time = 0;

		}
		nitroSprite.setColor(sf::Color::White);
	} else {
		nitroSprite.setColor(sf::Color::Transparent);
	}

}

/*void Game::nitroo(Carros *car, sf::RenderWindow *w){

 nitroTexture.loadFromFile("assets/Game/nitro.png");
 nitroSprite.setScale(0.3,0.3);
 nitroSprite.setTexture(nitroTexture);
 carBounds = car->zero.getGlobalBounds();
 meiobounds = meio.getGlobalBounds();

 std::random_device rd;
 std::mt19937 gen(rd());
 std::uniform_real_distribution<float> dis(0.0,w->getSize().y);
 int ynitro = dis(gen);
 ynitro = dis(gen);

 nitroSprite.setPosition(300, ynitro);

 while (nitroBounds.intersects(meiobounds)){
 ynitro = dis(gen);
 }


 <<"|"<<ynitro <<endl;
 fflush(stdin);

 if(carBounds.intersects(nitroBounds)){
 car->vel = car->vel+0.00007;
 }
 }
 */

void Game::moveNitro() {

	if (aniY < 10 && CHeck_any == false) {
		aniY -= 0.02;
		if (aniY < -9) {
			CHeck_any = true;
		}
	} else if (aniY > -10 and CHeck_any == true) {
		aniY += 0.02;
		if (aniY > 9) {
			CHeck_any = false;
		}
	}

	nitroSprite.setPosition(nitroSprite.getPosition().x,
			nitroSprite.getPosition().y + aniY);
	nitroSprite.setRotation(20);

	time++;
}
void Game::Checks1(Carros *car1) {
	carBounds = car1->zero.getGlobalBounds();
	if (carBounds.intersects(CheckPoint)) {
		Check_Lap = true;

	}
	if (carBounds.intersects(LineVicttory)) {
		if (Check_Lap == true) {
			Voltas++;
			Check_Lap = false;
		}
	}
	if (Voltas == 3 and Voltas2 < 3) {
		Nivelatual++;
		Result = 1;
		Init_Game = false;
		KeyFinaleGame = true;
	}
}
void Game::Checks2(Carros *car2) {
	carBounds = car2->zero.getGlobalBounds();
	if (carBounds.intersects(CheckPoint)) {
		Check_Lap2 = true;

	}
	if (carBounds.intersects(LineVicttory)) {
		if (Check_Lap2 == true) {
			Voltas2++;
			Check_Lap2 = false;
		}
	}
	if (Voltas2 == 3 and Voltas < 3) {
		Init_Game = false;
		Nivelatual++;
		KeyFinaleGame = true;
		Result = 2;
	}

}

void Game::Return_Plac_result(int *p) {
	*p = Result;
}
void Game::loopEventGame(Carros *loopcar) {
	loopcar->Moviment_cars();
	loopcar->EventsCar();
}
int Game::returnGameFinal() {
	int keyGameFinal;
	if (KeyFinaleGame == true) {
		keyGameFinal = 1;
		Init_Game = false;
		KeyFinaleGame = false;
		CarP1 = 0;
		CarP2 = 0;
	}
	return keyGameFinal;
}

void Game::run_game() {

	if (Init_Game == false) {
		x = 3;
		Contagem.setString("");
		test_Cont = false;
		Contagem_Realizada = false;
		sf::sleep(sf::milliseconds(0.0f));
		InicializarGame();
		l = 0;
		Init_Game = true;

	}

	if (l > 0 and test_Cont == false) {
		if (SoundCont == false and KeyFinaleGame == false) {
			Go.play();
			SoundCont = true;

		}
		if (Contagem_Realizada == false and KeyFinaleGame == false) {
			sf::sleep(sf::milliseconds(900.0f));
			stringstream ss;
			ss << x--;
			Contagem.setString(ss.str());
			if (x == -1) {
				sf::sleep(sf::milliseconds(0.0f));
				stringstream b;
				b << "Go!";
				Contagem.setString(b.str());
				Contagem.setPosition(200, 50);
			}
			if (x == -2) {
				Contagem_Realizada = true;
				Contagem.setFillColor(sf::Color::Transparent);
				l = 0;
				test_Cont = true;
			}
			sf::sleep(sf::milliseconds(0.0f));
		}
	} else {
		l = 1;
	}

}

void Game::SetMoney(Carros *car, int *act1, int *act2) {

	CounterFrame++;

	if (test_Cont == true) {
		money[0].loadFromFile("assets/Loja/1.png");
		money[1].loadFromFile("assets/Loja/2.png");
		money[2].loadFromFile("assets/Loja/3.png");
		money[3].loadFromFile("assets/Loja/4.png");
		money[4].loadFromFile("assets/Loja/5.png");
		money[5].loadFromFile("assets/Loja/6.png");
	}
	if (CounterFrame == 20) {
		if (Update_Texture == 5) {
			Update_Texture = 0;
		} else {
			Update_Texture++;
		}
		CounterFrame = 0;
	}

	if (Nivelatual == 0 and test_Cont == true) {
		moeda[0].setPosition(154, 154);
		moeda[1].setPosition(154, 354);
		moeda[2].setPosition(154, 554);
		moeda[3].setPosition(1104, 154);
		moeda[4].setPosition(1104, 354);
		moeda[5].setPosition(1104, 554);
	}
	if (Nivelatual == 1) {
		moeda[0].setPosition(154, 154);
		moeda[1].setPosition(154, 354);
		moeda[2].setPosition(154, 554);
		moeda[3].setPosition(1104, 154);
		moeda[4].setPosition(1104, 354);
		moeda[5].setPosition(1104, 554);
	}
	if (Nivelatual == 2) {
		moeda[0].setPosition(154, 154);
			moeda[1].setPosition(154, 354);
			moeda[2].setPosition(154, 554);
			moeda[3].setPosition(1104, 154);
			moeda[4].setPosition(1104, 354);
			moeda[5].setPosition(1104, 554);
	}

	carBounds = car->zero.getGlobalBounds();
	for (int i = 0; i < 6; i++) {
		moeda[i].setScale(0.4, 0.4);
		moeda[i].setTexture(money[Update_Texture], true);
		posMoney[i] = moeda[i].getGlobalBounds();

		if (carBounds.intersects(posMoney[i])) {

			if (i == 0 and Money1 == false) {

				if (car->Player == 1) {
					*act1 = *act1 + 50;
				}
				if (car->Player == 2) {
					*act2 = *act2 + 50;
				}
				moeda[i].setColor(sf::Color::Transparent);
				Money1 = true;
			}

			if (i == 1 and Money2 == false) {
				if (car->Player == 1) {
					*act1 = *act1 + 50;
				}
				if (car->Player == 2) {
					*act2 = *act2 + 50;
				}
				moeda[i].setColor(sf::Color::Transparent);
				Money2 = true;
			}

			if (i == 2 and Money3 == false) {
				if (car->Player == 1) {
					*act1 = *act1 + 50;
				}
				if (car->Player == 2) {
					*act2 = *act2 + 50;
				}
				moeda[i].setColor(sf::Color::Transparent);
				Money3 = true;
			}

			if (i == 3 and Money4 == false) {
				if (car->Player == 1) {
					*act1 = *act1 + 50;
				}
				if (car->Player == 2) {
					*act2 = *act2 + 50;
				}
				moeda[i].setColor(sf::Color::Transparent);
				Money4 = true;
			}

			if (i == 4 and Money5 == false) {
				if (car->Player == 1) {
					*act1 = *act1 + 50;
				}
				if (car->Player == 2) {
					*act2 = *act2 + 50;
				}
				moeda[i].setColor(sf::Color::Transparent);
				Money5 = true;
			}
			if (i == 5 and Money6 == false) {
				if (car->Player == 1) {
					*act1 = *act1 + 50;
				}
				if (car->Player == 2) {
					*act2 = *act2 + 50;
				}
				moeda[i].setColor(sf::Color::Transparent);
				Money6 = true;
			}
		}
	}

}

void Game::textingame() {
	timepassado = clock.getElapsedTime();

	textp1.setFont(font);
	textp1.setString("Voltas: " + to_string(Voltas));
	textp1.setCharacterSize(24);
	textp1.setFillColor(sf::Color::Black);
	textp1.setPosition(10, 10);

	ostringstream ss;
	ss << std::fixed << setprecision(0) << timepassado.asSeconds() - 5;
	string stringtempo = ss.str();

	if (Contagem_Realizada) {
		TimeGame.setFont(font);
		TimeGame.setString(stringtempo);
		TimeGame.setCharacterSize(40);
		TimeGame.setFillColor(sf::Color::Black);
		TimeGame.setPosition(650, -5);
	}

	textp2.setFont(font);
	textp2.setString("Voltas: " + to_string(Voltas2));
	textp2.setCharacterSize(24);
	textp2.setFillColor(sf::Color::Black);
	textp2.setPosition(1160, 10);

	if (timepassado.asSeconds() >= 65) { //37 pois o time é ajustado inicialmente por -7
		KeyFinaleGame = true;


	}

}

