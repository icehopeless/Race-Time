#include "header.hpp"

void Menu::Final_game(){
	keyGame = false;
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

void Menu::Events_Final_game(){

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
			Init_Game = false;
			counterKeyboard = 0;
			keyLevels= true;
			startLv = false;
			KeyFinaleGame = false;
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
			KeyFinaleGame = false;
			Init_Game = false;
			keyGame=false;
			startLv = false;
			keyLevels= true;
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


void Menu::SaveGame(){

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

