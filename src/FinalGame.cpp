#include "header.hpp"

void FinalGame::Final_game(){
	if(Init_Final == false){
		 SelecionadoEnter = false;
		 Mouse_Left = false;
		KeyDown = false;
		KeyUP = false;
		KeyLeft = false;
		KeyRight = false;
		Init_Final = true;
		keyLevels = false;
		keyMenu = false;
	}
	fundo.loadFromFile("assets/FinalGame/Final.png");


	texture3.loadFromFile("assets/FinalGame/save.png");
	startButton.loadFromFile("assets/FinalGame/Levels.png");
	settingButton.loadFromFile("assets/FinalGame/Home.png");

	startButtonS.setTexture(startButton,true);
	settingButtonS.setTexture(settingButton,true);
	texture3S.setTexture(texture3,true);

	win.loadFromFile("assets/FinalGame/1.png");
	Lose.loadFromFile("assets/FinalGame/2.png");

	Text1.loadFromFile("assets/FinalGame/Player.png");
	Player_1.setTexture(Text1);

	Text2.loadFromFile("assets/FinalGame/Player.png");
	Player_2.setTexture(Text1);

	Player_1.setScale(0.3,0.3);
	Player_1.setPosition(400, 160);
	Player_2.setScale(0.3,0.3);
	Player_2.setPosition(400, 200);
	NumeberOne.setScale(0.3,0.3);
	NumeberOne.setPosition(370, 165);
	NumeberTwo.setScale(0.3,0.3);
	NumeberTwo.setPosition(370, 205);

	texture3S.setPosition(80, 570);
	texture3S.setScale(0.7, 0.7);
	startButtonS.setScale(0.6, 0.6);
	startButtonS.setPosition(500, 570);
	settingButtonS.setScale(0.7, 0.7);
	settingButtonS.setPosition(930, 570);

	if(Win == 1){
		NumeberOne.setTexture(win,true);
		NumeberTwo.setTexture(Lose,true);
	} else 	if(Win == 2){
		NumeberTwo.setTexture(win,true);
		NumeberOne.setTexture(Lose,true);
	}



	CampMouse1.setPosition(70, 570);
	CampMouse1.setSize(sf::Vector2f(300, 110));
	CampMouse2.setPosition(480, 570);
	CampMouse2.setSize(sf::Vector2f(300, 110));
	CampMouse3.setPosition(920, 570);
	CampMouse3.setSize(sf::Vector2f(300, 110));

}

void FinalGame::Recept(int Nivel){
	this->Nivelatual = Nivel;
}
void FinalGame::DrawFinal(sf::Sprite * Fundo){
	Fundo->setTexture(fundo, true);
}
void FinalGame::ReceptWin(int Win){
	this->Win = Win;
}
void FinalGame::DesenharFinal(sf::RenderWindow * w){
	w->draw(texture3S);
	w->draw(startButtonS);
	w->draw(settingButtonS);
	w->draw(Player_1);
	w->draw(Player_2);
	w->draw(NumeberOne);
	w->draw(NumeberTwo);
}
void FinalGame::Music(sf::Music *music){

	if(SoundCont == false){
		music->openFromFile("assets/Sounds/Game/FinalGame.wav");
		if(KeySound == false){
			music->play();
			KeySound  =true;
		}
		SoundCont = true;
	}
}
void FinalGame::LoopFinal(){
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
	if (sf::Mouse::isButtonPressed(sf::Mouse::Left)
			&& Mouse_Left == false) {
		Mouse_Left = true;
	}
}
void FinalGame::Events_Final_game(sf::Vector2f mouse_coord){

	if(CampMouse1.getGlobalBounds().contains(mouse_coord)){
		counterKeyboard = 1;
		texture3S.setColor(sf::Color::Magenta);
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
	}
	if(CampMouse2.getGlobalBounds().contains(mouse_coord)){
		counterKeyboard = 2;
		texture3S.setColor(sf::Color::White);
		startButtonS.setColor(sf::Color::Magenta);
		settingButtonS.setColor(sf::Color::White);
	}
	if(CampMouse3.getGlobalBounds().contains(mouse_coord)){
		counterKeyboard = 3;
		texture3S.setColor(sf::Color::White);
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::Magenta);
	}

	if(Mouse_Left == true){

		if(CampMouse3.getGlobalBounds().contains(mouse_coord)){
			counterKeyboard = 0;
			keyMenu= true;
			SoundCont = false;
		}
		if(CampMouse2.getGlobalBounds().contains(mouse_coord)){
			counterKeyboard = 0;
			keyLevels= true;

			SoundCont = false;

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
			counterKeyboard = 1;
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
			SoundCont = false;
		}
		if(counterKeyboard == 3){
			counterKeyboard = 0;
			keyMenu= true;
			SoundCont = false;
		}
		SelecionadoEnter = false;
	}

}

void FinalGame::ReturnFinal(int * key){
	if(keyLevels == true){
		*key =1;
		KeySound = false;
		SoundCont = false;
		Init_Final = false;
		keyLevels = false;
		keyMenu = false;
	}
	if(keyMenu == true){
		KeySound = false;
		SoundCont = false;
		*key =2;
		Init_Final = false;
		keyLevels = false;
		keyMenu = false;
	}
}

void FinalGame::SaveGame(){

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

