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
	car.loadFromFile("assets/Cars/SuperB.png");
	spritecars.setTexture(car);
	spritecars.setScale(2,1);
	spritecars.setRotation(180);
	spritecars.setPosition(400, 400);
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
	KeyFinaleGame = true;
	Saved = false;
	counterKeyboard = 0;

}
void Game::run_game() {
	if (Init_Game == false) {
		sf::sleep(sf::milliseconds(0.0f));
		InicializarGame();
		Init_Game = true;
		Nivelatual++;
	}

	if (l > 0) {
		if(SoundCont == false and KeyFinaleGame == false){
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
	if(KeyFinaleGame == true){
		Final_game();
	}


	l = 1;

	MovimentCar();
}

void Game::game() {
	Carros carroPlayer;
	Carros carroBot;

}

void Game::MovimentCar() {
	bool camb1;
	bool camb2;
	bool camb3;
	bool camb4;


	if(KeyLeft == true){
		spritecars.setPosition(spritecars.getPosition().x - 19, spritecars.getPosition().y);
		KeyLeft = false;
		camb1 = true;
		car.loadFromFile("assets/Cars/SuperBR.png");
		spritecars.setTexture(car, true);
		spritecars.setScale(1,2);
	}
	if(KeyRight == true){
		spritecars.setPosition(spritecars.getPosition().x + 19, spritecars.getPosition().y);
		KeyRight = false;
		car.loadFromFile("assets/Cars/SuperBL.png");
		spritecars.setTexture(car, true);
		spritecars.setScale(1,2);
		camb2 = true;
	}
	if(KeyUP == true){
		spritecars.setPosition(spritecars.getPosition().x, spritecars.getPosition().y - 19);
		KeyUP = false;
		camb3 = true;
		spritecars.setScale(2,1);
		car.loadFromFile("assets/Cars/SuperB.png");
		spritecars.setTexture(car, true);
	}
	if(KeyDown== true){
		camb4 = true;
		spritecars.setScale(2,1);
		spritecars.setPosition(spritecars.getPosition().x , spritecars.getPosition().y + 19);
		KeyDown = false;
		car.loadFromFile("assets/Cars/SuperBD.png");
		spritecars.setTexture(car, true);
	}


	if(camb1 == true and camb3 == true){
		spritecars.setRotation(330);
		camb1 = false;
		camb3 = false;
	}


	if(camb3 == true and camb2 == true){
		spritecars.setRotation(45);
		camb2 = false;
		camb3 = false;
	}

	if(camb1 == true and camb4 == true){
		spritecars.setRotation(225);
		camb1 = false;
		camb4 = false;
	}


	if(camb4 == true and camb2 == true){
		spritecars.setRotation(135);
		camb2 = false;
		camb4 = false;
	}
}

void Game::Final_game(){

	if(SoundCont == false){
		music.openFromFile("assets/Sounds/Game/FinalGame.wav");
		music.play();
		SoundCont = true;
	}
	spritecars.setColor(sf::Color::Transparent);
	fundo.loadFromFile("assets/FinalGame/Final.png");
	Fundo.setTexture(fundo, true);


	texture3.loadFromFile("assets/FinalGame/save.png");
	startButton.loadFromFile("assets/FinalGame/Levels.png");
	settingButton.loadFromFile("assets/FinalGame/Home.png");

	startButtonS.setTexture(startButton,true);
	settingButtonS.setTexture(settingButton,true);
	texture3S.setTexture(texture3,true);

	texture3S.setColor(sf::Color::White);
	startButtonS.setColor(sf::Color::White);
	settingButtonS.setColor(sf::Color::White);


	texture3S.setPosition(80, 570);
	texture3S.setScale(0.7, 0.7);
	startButtonS.setScale(0.6, 0.6);
	startButtonS.setPosition(500, 570);
	settingButtonS.setScale(0.7, 0.7);
	settingButtonS.setPosition(930, 570);



	CampMouse1.setPosition(70, 570);
	CampMouse1.setSize(sf::Vector2f(300, 110));
	CampMouse2.setPosition(480, 570);
	CampMouse2.setSize(sf::Vector2f(300, 110));
	CampMouse3.setPosition(920, 570);
	CampMouse3.setSize(sf::Vector2f(300, 110));

	Events_Final_game();
}

void Game::Events_Final_game(){

	if(CampMouse1.getGlobalBounds().contains(mouse_coord)){
		texture3S.setColor(sf::Color::Magenta);
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
	}
	if(CampMouse2.getGlobalBounds().contains(mouse_coord)){
		texture3S.setColor(sf::Color::White);
		startButtonS.setColor(sf::Color::Magenta);
		settingButtonS.setColor(sf::Color::White);
	}
	if(CampMouse3.getGlobalBounds().contains(mouse_coord)){
		texture3S.setColor(sf::Color::White);
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::Magenta);
	}

	if(Mouse_Left == true){

		if(CampMouse3.getGlobalBounds().contains(mouse_coord)){
			counterKeyboard = 0;
			keyMenu= true;
			KeyFinaleGame = false;
			Init_Game = false;
			keyGame=false;
			SoundCont = false;
			soundActive = false;
		}
		if(CampMouse2.getGlobalBounds().contains(mouse_coord)){
			counterKeyboard = 0;
			keyLevels= true;
			KeyFinaleGame = false;
			Init_Game = false;
			keyGame=false;
			SoundCont = false;
			soundActive = false;
		}
		if(CampMouse1.getGlobalBounds().contains(mouse_coord)){
			counterKeyboard = 0;
			SaveGame();
			texture3S.setColor(sf::Color::Cyan);
		}

		Mouse_Left = false;
	}
	if(KeyRight == true){
		counterKeyboard++;
		if(counterKeyboard > 3){
			counterKeyboard = 3;
		}
		KeyRight = false;
	}
	if(KeyLeft == true){
		counterKeyboard--;
		if(counterKeyboard < 1){
			counterKeyboard = 3;
		}
		KeyLeft = false;
	}
	if (counterKeyboard == 1) {
		texture3S.setColor(sf::Color::Magenta);
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
	}
	if (counterKeyboard == 2) {
		texture3S.setColor(sf::Color::White);
		startButtonS.setColor(sf::Color::Magenta);
		settingButtonS.setColor(sf::Color::White);

	}
	if (counterKeyboard == 3) {
		texture3S.setColor(sf::Color::White);
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::Magenta);
	}
	if(SelecionadoEnter == true){
		if(counterKeyboard == 1){
			counterKeyboard = 0;
			SaveGame();
			texture3S.setColor(sf::Color::Cyan);
		}
		if(counterKeyboard == 2){
			counterKeyboard = 0;
			keyLevels= true;
			KeyFinaleGame = false;
			Init_Game = false;
			keyGame=false;
			SoundCont = false;
			soundActive = false;
		}
		if(counterKeyboard == 3){
			counterKeyboard = 0;
			keyMenu= true;
			KeyFinaleGame = false;
			Init_Game = false;
			keyGame=false;
			SoundCont = false;
			soundActive = false;
		}
		SelecionadoEnter = false;
	}

}


void Game::SaveGame(){

		ifstream fileSaved("Saved/Save.txt");
		if (!fileSaved.is_open()) {
			printf("ERROR");
			fflush(stdout);
		}

		string linha;
		string Blocked("Blocked");
		string Unlocked("unlocked");
		string situation;
		string campoLido;
		string level;
		vector<string> Levels;
		vector<string> status;

		while (getline(fileSaved, linha)) {
			stringstream Stream(linha);

			getline(Stream, campoLido, ',');
			level = campoLido;
			getline(Stream, campoLido, ',');
			situation = campoLido;
			Levels.push_back(level);
			status.push_back(situation);
		}
		fileSaved.close();

		/*FILE *fileapaga;
		fileapaga = fopen("Saved/Save.txt","w");
		fclose(fileapaga);
		 */

		ofstream outSaved("Saved/Save.txt");
		bool chaveY = false;
		int tam = Levels.size();
		for(int c = 0; c < tam; c++){
			chaveY = false;

			if(c  <= Nivelatual){
				outSaved << Levels[c] << "," << Unlocked << endl;
				chaveY = true;
			}
			if(c != 10 and chaveY == false){
				outSaved << Levels[c] << "," << status[c] << endl;
			}
		}

		outSaved.close();



}
