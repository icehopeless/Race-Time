#include "header.hpp"
Menu::Menu() {
	font = new sf::Font();
	Contagem = new sf::Text();

	Start();
}

Menu::~Menu() {
	delete Contagem;
	delete font;
}
void Menu::Start() {
	window.create(sf::VideoMode(1280, 720), "Mystic Time",sf::Style::Titlebar | sf::Style::Close);
	window.setPosition(sf::Vector2i(0, 0));
	sf::Image Icon = sf::Image { };
	Icon.loadFromFile("assets/Icon/Icon.jpg");
	window.setIcon(Icon.getSize().x, Icon.getSize().y, Icon.getPixelsPtr());
	counterResu = 3;
	Volume.setPosition(450, 390);
	VolumeS.setPosition(450, 390);
	fundo.loadFromFile("assets/L.png");
	Fundo.setTexture(fundo);
	Sound = 4;
	music.setVolume(Sound);
	VolumeUp = false;
	VolumeDown = false;
	startButton.loadFromFile("assets/Loading.png");
	startButtonS.setTexture(startButton);
	startButtonS.setScale(0.9, 0.9);
	startButtonS.setPosition(450, 550);

	CampMouse1.setPosition(480, 400);
	CampMouse1.setSize(sf::Vector2f(300, 110));


	settingButtonS.setScale(0.5, 0.5);
	settingButtonS.setPosition(490, 550);
	CampMouse2.setPosition(490, 550);
	CampMouse2.setSize(sf::Vector2f(300, 110));

	KeyDown = false;
	KeyUP = false;
	KeyLeft = false;
	KeyRight = false;
	KeyLoading = false;
	SelecionadoEnter = false;
	Mouse_Left = false;
	keyMenu = true;
	keySettings = false;
	keyShop = false;
	keyGame = false;
	keyLevels = false;
	KeyFinaleGame = false;
	k = 1;
	counterKeyboard = 0;
	counterVertical = 0;
	 SOundGo = 1000;
	soundActive = false;
	contadodetempo = 0;

}
void Menu::loading(){


	if( y < 255){
		y++;
	}
	if(y == 254){
		y = 12;
	}
	sf::sleep(sf::milliseconds(10.0f));
	startButtonS.setColor(sf::Color { 100, 100, 100, y });
	if(contadodetempo == 700){
		sf::sleep(sf::milliseconds(0.0f));
		KeyLoading = false;
		keyMenu = true;
	}

}
void Menu::ZeraCounters() {
	counterKeyboard = 0;
	counterVertical = 0;

}

void Menu::StartMenu() {
	if(soundActive == false){
		 KeyDown = false;
		 KeyUP = false;
		 KeyLeft = false;
		 KeyRight = false;
		 SelecionadoEnter = false;
		 Mouse_Left = false;
			settingButtonS.setColor(sf::Color::White);
			startButtonS.setColor(sf::Color::White);
		music.openFromFile("assets/Sounds/Menu/Home.wav");
		music.play();
		soundActive = true;
	}

	fundo.loadFromFile("assets/1.png");
	Fundo.setTexture(fundo);
	startButton.loadFromFile("assets/Start.png");
	startButtonS.setTexture(startButton,true);
	startButtonS.setScale(0.6, 0.6);
	startButtonS.setPosition(510, 400);
	CampMouse1.setPosition(480, 400);
	CampMouse1.setSize(sf::Vector2f(300, 110));
	//*********************************************************
	arrowRS.setColor(sf::Color::Transparent);
	arrowLS.setColor(sf::Color::Transparent);
	VolumeS.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	texture5S.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	ArrowLS.setColor(sf::Color::Transparent);
	ArrowRS.setColor(sf::Color::Transparent);
	texture5S.setColor(sf::Color::Transparent);
	Reso.setFillColor(sf::Color::Transparent);
	//***********************************************************
	settingButton.loadFromFile("assets/Setting.png");
	settingButtonS.setTexture(settingButton,true);
	settingButtonS.setScale(0.5, 0.5);
	settingButtonS.setPosition(490, 550);
	CampMouse2.setPosition(490, 550);
	CampMouse2.setSize(sf::Vector2f(300, 110));

	if (counterKeyboard == 0) {
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
	}
}

void Menu::eventsMenu() {
	StartMenu();

	if (CampMouse1.getGlobalBounds().contains(mouse_coord)) {
		startButtonS.setColor(sf::Color::Magenta);
		settingButtonS.setColor(sf::Color::White);
		counterKeyboard = 1;
	} else if (!CampMouse1.getGlobalBounds().contains(mouse_coord)
			&& counterKeyboard == 0) {
		startButtonS.setColor(sf::Color::White);

	}

	if (CampMouse2.getGlobalBounds().contains(mouse_coord)) {
		settingButtonS.setColor(sf::Color::Magenta);
		startButtonS.setColor(sf::Color::White);
		counterKeyboard = 2;
	} else if (!CampMouse2.getGlobalBounds().contains(mouse_coord)
			&& counterKeyboard == 0) {
		settingButtonS.setColor(sf::Color::White);

	}

	if (KeyDown == true) {
		if (counterKeyboard < 2) {
			counterKeyboard++;
			if (counterKeyboard == 1) {
				startButtonS.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
			}
			if (counterKeyboard == 2) {
				settingButtonS.setColor(sf::Color::Magenta);
				startButtonS.setColor(sf::Color::White);
			}

		}

		KeyDown = false;
	}

	if (KeyUP == true) {
		if (counterKeyboard > 1) {
			counterKeyboard--;
			if (counterKeyboard == 1) {
				startButtonS.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
			}
			if (counterKeyboard == 2) {
				settingButtonS.setColor(sf::Color::Magenta);
				startButtonS.setColor(sf::Color::White);
			}

		}

		KeyUP = false;
	}

	if (SelecionadoEnter == true) {
		if (counterKeyboard == 1) {
			keyShop = true;
			keyMenu = false;
		}
		if (counterKeyboard == 2) {
			keyMenu = false;
			keySettings = true;

			ZeraCounters();
		}
		SelecionadoEnter = false;
	}

	if (Mouse_Left == true) {
		if (CampMouse1.getGlobalBounds().contains(mouse_coord)) {
			keyShop = true;
			keyMenu = false;
		}
		if (CampMouse2.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = false;
			keySettings = true;
			ZeraCounters();
		}
		Mouse_Left = false;
	}

}

void Menu::Setconfiguration() {

	fundo.loadFromFile("assets/2.png");
	texture3.loadFromFile("assets/Settings/Home.png");
	texture3S.setTexture(texture3,true);
	texture3S.setScale(0.6, 0.6);
	texture3S.setPosition(110, 580);

	texture4.loadFromFile("assets/Settings/quit.png");
	texture4S.setTexture(texture4);
	texture5.loadFromFile("assets/Settings/resolution.png");
	texture5S.setTexture(texture5,true);

	texture5S.setScale(0.3, 0.3);
	texture4S.setScale(0.6, 0.6);
	texture4S.setPosition(922, 580);
	texture5S.setPosition(565, 175);
	texture4S.setColor(sf::Color::White);
	texture3S.setColor(sf::Color::White);
	texture5S.setColor(sf::Color::White);

	VolumeT.loadFromFile("assets/Settings/ButtonVol.png");
	VolumeS.setTexture(VolumeT);
	VolumeS.setColor(sf::Color::White);
	VolumeS.setScale(0.08, 0.08);
	Volume.setRadius(32);

	ArrowR.loadFromFile("assets/Settings/arrowR.png");
	ArrowL.loadFromFile("assets/Settings/arrowL.png");
	ArrowLS.setTexture(ArrowL,true);
	ArrowRS.setTexture(ArrowR,true);

	ArrowLS.setScale(0.3, 0.3);
	ArrowRS.setScale(0.3, 0.3);

	ArrowLS.setColor(sf::Color::White);
	ArrowRS.setColor(sf::Color::White);

	ArrowLS.setPosition(550, 267);
	ArrowRS.setPosition(760, 267);

	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);

	CampMouse3.setPosition(60, 570);
	CampMouse4.setPosition(872, 570);

	CampMouse6.setSize(sf::Vector2f(30, 30));
	CampMouse5.setSize(sf::Vector2f(30, 30));
	CampMouse3.setSize(sf::Vector2f(350, 110));
	CampMouse4.setSize(sf::Vector2f(300, 110));
	font->loadFromFile("assets/Font/VintageTimes.ttf");

	CampMouse6.setPosition(767, 267);
	CampMouse5.setPosition(567, 267);

	Reso.setFont(*font);
	Reso.setCharacterSize(30);
	Reso.setFillColor(sf::Color::Cyan);
	Reso.setPosition(615, 267);
	SoundAumente.loadFromFile("assets/Settings/Sound_Menu.png");
	SoundSpriteR.setTexture(SoundAumente, true);
	SoundSpriteR.setScale(0.05, 0.05);
	SoundSpriteR.setPosition(900, 390);
	SoundAbaixa.loadFromFile("assets/Settings/SOUND_Baixo.png");
	SoundSpriteL.setTexture(SoundAbaixa, true);
	SoundSpriteL.setScale(0.22, 0.22);
	SoundSpriteL.setPosition(250, 370);
	SoundSpriteR.setColor(sf::Color::Cyan);
	SoundSpriteL.setColor(sf::Color::Cyan);
	CampMouse7.setSize(sf::Vector2f(70, 60));
	CampMouse8.setSize(sf::Vector2f(70, 60));
	CampMouse7.setPosition(250, 390);
	CampMouse8.setPosition(900, 390);

}
void Menu::drawConfig() {

	window.draw(SoundSpriteR);

	window.draw(SoundSpriteL);

	CampMouse7.setPosition(250, 390);
	CampMouse8.setPosition(900, 390);

	window.draw(texture3S);
	window.draw(texture4S);
	window.draw(texture5S);
	window.draw(Reso);
	window.draw(ArrowRS);
	window.draw(ArrowLS);


}
void Menu::AleterarCor() {
	if (counterVertical == 1 && counterKeyboard == 1) {
		texture3S.setColor(sf::Color::Magenta);
		texture4S.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
	}
	if (counterVertical == 1 && counterKeyboard == 2) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::Magenta);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
	}
	if (counterVertical == 2 && counterKeyboard == 1) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Cyan);
		SoundSpriteL.setColor(sf::Color::Magenta);
	}
	if (counterVertical == 2 && counterKeyboard == 2) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Magenta);
		SoundSpriteL.setColor(sf::Color::Cyan);
	}
	if (counterVertical == 3 && counterKeyboard == 1) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::Magenta);
		ArrowRS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Cyan);
		SoundSpriteL.setColor(sf::Color::Cyan);
	}
	if (counterVertical == 3 && counterKeyboard == 2) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::Magenta);
		SoundSpriteR.setColor(sf::Color::Cyan);
		SoundSpriteL.setColor(sf::Color::Cyan);
	}
}
void Menu::EventosMouseConfig() {

	if (CampMouse3.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::Magenta);
		texture4S.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Cyan);
		SoundSpriteL.setColor(sf::Color::Cyan);

	}

	if (CampMouse4.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::Magenta);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Cyan);
		SoundSpriteL.setColor(sf::Color::Cyan);

	}
	if (CampMouse6.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::Magenta);
		SoundSpriteR.setColor(sf::Color::White);
		SoundSpriteL.setColor(sf::Color::Cyan);

	}

	if (CampMouse5.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::Magenta);
		ArrowRS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::White);
		SoundSpriteL.setColor(sf::Color::Cyan);

	}

	if (CampMouse8.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Magenta);
		SoundSpriteL.setColor(sf::Color::Cyan);

	}

	if (CampMouse7.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		ArrowRS.setColor(sf::Color::White);
		ArrowLS.setColor(sf::Color::White);
		SoundSpriteR.setColor(sf::Color::Cyan);
		SoundSpriteL.setColor(sf::Color::Magenta);

	}
	if (Mouse_Left == true) {

		if (CampMouse3.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = true;
			keySettings = false;
			ZeraCounters();

		}
		if (CampMouse4.getGlobalBounds().contains(mouse_coord)) {
			window.close();
		}

		if (CampMouse6.getGlobalBounds().contains(mouse_coord)) {
			counterResu++;
		}

		if (CampMouse5.getGlobalBounds().contains(mouse_coord)) {
			counterResu--;
		}
		if (CampMouse7.getGlobalBounds().contains(mouse_coord)) {
			k--;
			Volume.setPosition(Volume.getPosition().x - 7,
					Volume.getPosition().y);

			VolumeS.setPosition(Volume.getPosition().x - 7,
					Volume.getPosition().y);
			music.setVolume((Sound * 0) + k);
			Go.setVolume((SOundGo * 0) + k);
		}
		if (CampMouse8.getGlobalBounds().contains(mouse_coord)) {
			k++;
			Volume.setPosition(Volume.getPosition().x + 7,
					Volume.getPosition().y);

			VolumeS.setPosition(Volume.getPosition().x + 7,
					Volume.getPosition().y);
			music.setVolume(Sound + k);
			Go.setVolume(SOundGo + k);

		}
		Mouse_Left = false;
	}

}

void Menu::EventsKeyboard() {
	AleterarCor();
	if (KeyUP == true) {
		counterVertical++;
		if (counterVertical > 3) {
			counterVertical = 3;
		}
		if (counterVertical == 1 && counterKeyboard == 0) {
			counterKeyboard = 1;
		}
		KeyUP = false;
	}

	if (KeyDown == true) {
		counterVertical--;
		if (counterVertical < 1) {
			counterVertical = 1;
		}
		if (counterVertical == 1 && counterKeyboard == 3) {
			counterKeyboard = 2;
		}

		KeyDown = false;
	}

	if (KeyRight == true) {
		counterKeyboard++;
		if (counterKeyboard == 1 && counterVertical == 0) {
			counterVertical = 1;
		}
		if (counterKeyboard > 2) {
			counterKeyboard = 2;
		}

		KeyRight = false;
	}

	if (KeyLeft == true) {
		counterKeyboard--;
		if (counterKeyboard < 1) {
			counterKeyboard = 1;
		}
		KeyLeft = false;
	}
	if (SelecionadoEnter == true) {

		if (counterKeyboard == 1 && counterVertical == 1) {
			keyMenu = true;
			keySettings = false;
			ZeraCounters();

		}
		if (counterKeyboard == 2 && counterVertical == 1) {
			window.close();
		}

		if (counterKeyboard == 2 && counterVertical == 3) {
			counterResu++;
		}

		if (counterKeyboard == 1 && counterVertical == 3) {
			counterResu--;
		}

		if (SelecionadoEnter == true && counterVertical == 2
				&& counterKeyboard == 2) {
			k++;
			Volume.setPosition(Volume.getPosition().x + 7,
					Volume.getPosition().y);

			VolumeS.setPosition(Volume.getPosition().x + 7,
					Volume.getPosition().y);
			music.setVolume(Sound + k);
			Go.setVolume(SOundGo + k);
		}
		if (SelecionadoEnter == true && counterVertical == 2
				&& counterKeyboard == 1) {
			k--;
			Volume.setPosition(Volume.getPosition().x - 7,
					Volume.getPosition().y);

			VolumeS.setPosition(Volume.getPosition().x - 7,
					Volume.getPosition().y);
			music.setVolume((Sound * 0) + k);
			Go.setVolume((SOundGo * 0) + k);
		}

		SelecionadoEnter = false;
	}

}

void Menu::Eventsconfiguration() {
	Setconfiguration();
	EventsKeyboard();
	EventosMouseConfig();

	if (counterResu < 1) {
		counterResu = 1;
	}

	if (counterResu == 1) {
		Reso.setString("800X600");
		window.setSize(sf::Vector2u(800, 600));
	}

	if (counterResu == 2) {
		Reso.setString("1024X768");
		window.setSize(sf::Vector2u(1024, 768));
	}

	if (counterResu == 3) {
		Reso.setString("1280X720");
		window.setSize(sf::Vector2u(1280, 720));
	}

	if (counterResu == 4) {
		Reso.setString("1360X780");
		window.setSize(sf::Vector2u(1360, 780));
	}
	if (counterResu == 5) {
		Reso.setString("1600X900");
		window.setSize(sf::Vector2u(1600, 900));
	}
	if (counterResu == 6) {
		Reso.setString("1920X1080");
		window.setSize(sf::Vector2u(1980, 1080));
	}
	if (counterResu > 6) {
		counterResu = 6;
	}

	if (Volume.getPosition().x > 800) {
		Volume.setPosition(800, Volume.getPosition().y);
		VolumeS.setPosition(800, Volume.getPosition().y);
	}

	if (Volume.getPosition().x < 350) {
		Volume.setPosition(350, Volume.getPosition().y);
		VolumeS.setPosition(350, Volume.getPosition().y);
	}


}

void Menu::loopEvents() {

	sf::Event event;

	pos_mouse = sf::Mouse::getPosition(window);
	mouse_coord = window.mapPixelToCoords(pos_mouse);
	newgame.loopEventGame(&carro);
	newgame.loopEventGame(&carro2);
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
		}

		level.loop_events_Levels();
		loja.EventesKeyBoard();
		final.LoopFinal();

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
}


void Menu::ChamarGame() {
	int KeyFinalGame;

	newgame.Setpista(Nivelatual);
	newgame.run_game();

	//Main Cars
	newgame.CarsSelceteds(CarP1,CarP2);
	newgame.Checks1(&carro);
	newgame.Checks2(&carro2);
	newgame.Start_Cars(&carro, &carro2);
	newgame.Colisions(&carro);
	newgame.Colisions(&carro2);
	newgame.ColisionsInCars(&carro, &carro2);
	newgame.stopedMusic(&music);
	newgame.FinalPista(&Nivelatual);
	newgame.nitroo(&carro, &window);
	newgame.nitroo(&carro2,&window);
	newgame.Return_Plac_result(&Win);
	KeyFinalGame = newgame.returnGameFinal();
	if(KeyFinalGame == 1){
		keyGame = false;
		KeyFinaleGame = true;
	}


}

void Menu::ChamarLoja() {
	int key;
	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);
	loja.run_loja();
	loja.DesenharFundoLoja(&Fundo);
	key = loja.returnKeyLoja();
	loja.CarsSelecteds(&CarP1, &CarP2);
	if(key == 1){
		keyShop = false;
		keyLevels = true;
	}
	SelecionadoEnter = false;
	KeyRight = false;
	KeyLeft = false;
}

void Menu::ChamarLevels() {
	level.Music(&music);
	level.run_Levels();
	int keyLeveGame = 0;
	keyLeveGame = level.returnKeyLevels();
	level.DesenharFundoLevels(&Fundo);
	level.EventesLevels(mouse_coord);
	level.TrackSelected(&Nivelatual);
	if(keyLeveGame == 1){
		keyLevels = false;
		keyGame = true;
	}

}

void Menu::ChamarFinal(){
	int Key = 0;
	final.Recept(Nivelatual);
	final.Events_Final_game(mouse_coord);
	final.Music(&music);
	final.Final_game();
	final.ReceptWin(Win);
	final.ReturnFinal(&Key);
	if(Key ==  1){
		KeyFinaleGame = false;
		keyLevels = true;
	}
	if(Key ==  2){
		KeyFinaleGame = false;
		keyMenu = true;
		soundActive = false;
	}
}
void Menu::draw(){
	carro.draw(&window);
	carro2.draw(&window);
}
void Menu::drawMenu() {
	window.clear();

	window.draw(Fundo);
	window.draw(startButtonS);
	window.draw(settingButtonS);

	if (keySettings == true) {
		drawConfig();
	}
	if(keyShop == true){
		loja.drawLoja(&window);
	}
	if(keyLevels == true){
		level.drawLeveles(&window);
	}



	window.draw(VolumeS);
	window.draw(arrowRS);
	window.draw(arrowLS);
	window.draw(texture3S);
	window.draw(ArrowRS);
	window.draw(ArrowLS);


	if(keyGame == true){
		draw();
	}
	if(keyGame == true){
		newgame.DrawGame(&window);
		newgame.DesenharFundoPista(&Fundo);
	}
	if(KeyFinaleGame == true){
		final.DrawFinal(&Fundo);
		final.DesenharFinal(&window);
	}
	window.draw(*Contagem);

	window.display();

}

void Menu::run_menu() {

	music.setLoop(true);

	while (window.isOpen()) { // main loop
		loopEvents();
		if(KeyLoading == true){
			loading();
		}else if (keyMenu == true) {
			eventsMenu();
		} else if (keySettings == true) {
			Eventsconfiguration();
		} else if (keyGame == true) {
			ChamarGame();
		} else if (keyShop == true) {
			ChamarLoja();
		} else if(keyLevels == true){
			ChamarLevels();
		}else if(KeyFinaleGame == true){
			ChamarFinal();
		}
		contadodetempo++;
		drawMenu();

	}
}
