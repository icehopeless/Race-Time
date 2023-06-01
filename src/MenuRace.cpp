#include "header.hpp"
Menu::Menu() {
	Start();
}
Menu::~Menu() {

}
void Menu::Start() {

	ModoGame = 0;
	window.create(sf::VideoMode(1280, 720), "Race Time",sf::Style::Titlebar | sf::Style::Close);
	window.setPosition(sf::Vector2i(0, 0));
	sf::Image Icon = sf::Image { };
	Icon.loadFromFile("../assets/Icon/Icon.jpg");
	window.setIcon(Icon.getSize().x, Icon.getSize().y, Icon.getPixelsPtr());

	Volume.setPosition(140, 60);
	VolumeS.setPosition(140, 60);

	fundo.loadFromFile("../assets/1.png");
	Fundo.setTexture(fundo);
	music.openFromFile("../assets/Home.wav");
	Sound = 4;
	music.setVolume(Sound);
	VolumeUp = false;
	VolumeDown = false;
	startButton.loadFromFile("../assets/Start.png");
	startButtonS.setTexture(startButton);
	startButtonS.setScale(0.6, 0.6);
	startButtonS.setPosition(510, 400);
	StartMouse.setPosition(480, 400);
	StartMouse.setSize(sf::Vector2f(300, 110));
	ModoGame = 1;
	CarSelectP1 = 1;
	CarSelectP2 = rand() % 5;
	settingButton.loadFromFile("../assets/Setting.png");
	settingButtonS.setTexture(settingButton);
	settingButtonS.setScale(0.5, 0.5);
	settingButtonS.setPosition(490, 550);
	SettingMouse.setPosition(490, 550);
	SettingMouse.setSize(sf::Vector2f(300, 110));

	KeyDown = false;
	KeyUP = false;
	KeyLeft = false;
	KeyRight = false;

	SelecionadoEnter = false;
	Mouse_Left = false;
	keyMenu = true;
	keySettings = false;
	keyShop = false;
	keyGame = false;
	k = 1;
	counterKeyboard = 0;
}
void Menu::ZeraCounters() {
	counterKeyboard = 0;
	counterVertical = 0;

}

void Menu::StartMenu() {
	VolumeS.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	fundo.loadFromFile("../assets/1.png");
	Fundo.setTexture(fundo);
	startButton.loadFromFile("../assets/Start.png");
	startButtonS.setTexture(startButton);
	startButtonS.setScale(0.6, 0.6);
	startButtonS.setPosition(510, 400);
	StartMouse.setPosition(480, 400);
	StartMouse.setSize(sf::Vector2f(300, 110));
	//*********************************************************
	arrowRS.setColor(sf::Color::Transparent);
	arrowLS.setColor(sf::Color::Transparent);
	vitrineS.setColor(sf::Color::Transparent);



	//***********************************************************
	settingButton.loadFromFile("../assets/Setting.png");
	settingButtonS.setTexture(settingButton);
	settingButtonS.setScale(0.5, 0.5);
	settingButtonS.setPosition(490, 550);
	SettingMouse.setPosition(490, 550);
	SettingMouse.setSize(sf::Vector2f(300, 110));

}

void Menu::eventsMenu() {
	StartMenu();
	if (StartMouse.getGlobalBounds().contains(mouse_coord)) {
		startButtonS.setColor(sf::Color::Magenta);
		settingButtonS.setColor(sf::Color::White);
		counterKeyboard = 1;
	} else if (!StartMouse.getGlobalBounds().contains(mouse_coord)
			&& counterKeyboard == 0) {
		startButtonS.setColor(sf::Color::White);

	}

	if (SettingMouse.getGlobalBounds().contains(mouse_coord)) {
		settingButtonS.setColor(sf::Color::Magenta);
		startButtonS.setColor(sf::Color::White);
		counterKeyboard = 2;
	} else if (!SettingMouse.getGlobalBounds().contains(mouse_coord)
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

		}
		if (counterKeyboard == 2) {
			keyMenu = false;
			keySettings = true;

			ZeraCounters();
		}
		SelecionadoEnter = false;
	}

	if (Mouse_Left == true) {
		if (StartMouse.getGlobalBounds().contains(mouse_coord)) {

		}
		if (SettingMouse.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = false;
			keySettings = true;

			ZeraCounters();
		}
		Mouse_Left = false;
	}

}

void Menu::Setconfiguration() {

	fundo.loadFromFile("../assets/2.png");
	texture3.loadFromFile("../assets/Settings/Home.png");
	texture3S.setTexture(texture3);
	texture3S.setScale(0.6, 0.6);
	texture3S.setPosition(110, 580);

	texture4.loadFromFile("../assets/Settings/Cars.png");
	texture4S.setTexture(texture4);
	texture4S.setScale(0.6, 0.6);
	texture4S.setPosition(922, 580);

	startButton.loadFromFile("../assets/Settings/1Player.png");
	startButtonS.setTexture(startButton, true);

	settingButton.loadFromFile("../assets/Settings/2Players.png");
	settingButtonS.setTexture(settingButton, true);

	VolumeT.loadFromFile("../assets/Settings/ButtonVol.png");
	VolumeS.setTexture(VolumeT);
	VolumeS.setColor(sf::Color::White);
	VolumeS.setScale(0.08, 0.08);

	startButtonS.setPosition(250, 370);
	startButtonS.setScale(0.4, 0.4);

	Volume.setRadius(32);
	settingButtonS.setPosition(790, 370);
	settingButtonS.setScale(0.4, 0.4);

	StartMouse.setPosition(200, 340);
	SettingMouse.setPosition(740, 340);

	CampMouse3.setPosition(90, 570);
	CampMouse4.setPosition(872, 570);

	StartMouse.setSize(sf::Vector2f(300, 110));
	SettingMouse.setSize(sf::Vector2f(300, 110));
	CampMouse3.setSize(sf::Vector2f(300, 110));
	CampMouse4.setSize(sf::Vector2f(300, 110));
}
void Menu::EventsconfigurationHorizontal() {

	if (KeyRight == true) {

		if (counterKeyboard < 1) {
			counterKeyboard++;
			if (counterKeyboard == 0 && counterVertical == 2) {
				texture3S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::Magenta);
			}
			if (counterKeyboard == 1 && counterVertical == 2) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::Magenta);
				startButtonS.setColor(sf::Color::White);
			}
			if (counterKeyboard == 0 && counterVertical == 1) {
				texture3S.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
			}
			if (counterKeyboard == 1 && counterVertical == 1) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
			}
		}
		KeyRight = false;
	}

	if (KeyLeft == true) {
		if (counterKeyboard > 0) {
			counterKeyboard--;
			if (counterKeyboard == 0 && counterVertical == 2) {
				texture3S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::Magenta);
			}
			if (counterKeyboard == 1 && counterVertical == 2) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::Magenta);
				startButtonS.setColor(sf::Color::White);
			}

			if (counterKeyboard == 0 && counterVertical == 1) {
				texture3S.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
			}
			if (counterKeyboard == 1 && counterVertical == 1) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
			}
		}
		KeyLeft = false;
	}
}

void Menu::EventsconfigurationVertical() {
	if (KeyUP == true) {
		if (counterVertical < 2) {
			counterVertical++;
			if (counterVertical == 1) {
				texture3S.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
			}
			if (counterVertical == 2 && counterKeyboard == 0) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::Magenta);
			}
			if (counterVertical == 2 && counterKeyboard == 1) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::Magenta);
				startButtonS.setColor(sf::Color::White);
			}
		}
		KeyUP = false;
	}

	if (KeyDown == true) {
		if (counterVertical > 1) {
			counterVertical--;
			if (counterVertical == 1 && counterKeyboard == 0) {
				texture3S.setColor(sf::Color::Magenta);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
			}
			if (counterVertical == 1 && counterKeyboard == 1) {
				texture3S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::Magenta);
			}
			if (counterVertical == 2) {
				texture3S.setColor(sf::Color::White);
				texture4S.setColor(sf::Color::White);
				settingButtonS.setColor(sf::Color::White);
				startButtonS.setColor(sf::Color::Magenta);
			}
		}
		KeyDown = false;
	}

}

void Menu::EventosMouseConfig() {
	if (StartMouse.getGlobalBounds().contains(mouse_coord)) {
		startButtonS.setColor(sf::Color::Magenta);
		settingButtonS.setColor(sf::Color::White);
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		counterKeyboard = 0;
		counterVertical = 2;
	}

	if (SettingMouse.getGlobalBounds().contains(mouse_coord)) {
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::Magenta);
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		counterKeyboard = 1;
		counterVertical = 2;
	}

	if (CampMouse3.getGlobalBounds().contains(mouse_coord)) {
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
		texture3S.setColor(sf::Color::Magenta);
		texture4S.setColor(sf::Color::White);
		counterKeyboard = 0;
		counterVertical = 1;
	}

	if (CampMouse4.getGlobalBounds().contains(mouse_coord)) {
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::Magenta);
		counterKeyboard = 1;
		counterVertical = 1;
	}

	if (Mouse_Left == true) {
		if (StartMouse.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = true;
			ModoGame = 1;
			keySettings = false;
			ZeraCounters();

		}
		if (SettingMouse.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = true;
			ModoGame = 2;
			keySettings = false;
			ZeraCounters();
		}
		if (CampMouse3.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = true;
			keySettings = false;
			ZeraCounters();

		}
		if (CampMouse4.getGlobalBounds().contains(mouse_coord)) {
			keyShop = true;
			CarSelectP1 = 1;
			CarSelectP2 = 2;
			keySettings = false;
			ZeraCounters();
		}

		Mouse_Left = false;
	}

	if (Mouse_Left == true) {
		if (Volume.getGlobalBounds().contains(mouse_coord)) {
			Volume.setPosition(100, 100);
		}
		Mouse_Left = false;
	}

}
void Menu::Eventsconfiguration() {

	Setconfiguration();
	if (counterVertical == 0) {
		startButtonS.setColor(sf::Color::White);
		settingButtonS.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::White);
		texture3S.setColor(sf::Color::White);
	}

	EventsconfigurationVertical();
	EventsconfigurationHorizontal();
	EventosMouseConfig();

	if (SelecionadoEnter == true) {
		if (counterVertical == 1 && counterKeyboard == 0) {
			keyMenu = true;
			keySettings = false;
			ZeraCounters();
		}
		if (counterVertical == 1 && counterKeyboard == 1) {
			keyShop = true;
			CarSelectP1 = 1;
			CarSelectP2 = 2;
			keySettings = false;
			ZeraCounters();
		}
		if (counterVertical == 2 && counterKeyboard == 0) {
			keyMenu = true;
			keySettings = false;
			ModoGame = 1;
			ZeraCounters();
		}
		if (counterVertical == 2 && counterKeyboard == 1) {
			keyMenu = true;
			keySettings = false;
			ModoGame = 2;
			ZeraCounters();
		}

		SelecionadoEnter = false;
	}

	if (VolumeUp == true) {
		k++;
		Volume.setPosition(Volume.getPosition().x + 7,Volume.getPosition().y);

		VolumeS.setPosition(Volume.getPosition().x + 7,Volume.getPosition().y);
		music.setVolume(Sound + k);
		VolumeUp = false;
	}
	if (VolumeDown == true) {
		k--;
		Volume.setPosition(Volume.getPosition().x - 7,Volume.getPosition().y);

		VolumeS.setPosition(Volume.getPosition().x - 7,Volume.getPosition().y);
		music.setVolume((Sound* 0) + k);
		VolumeDown = false;
	}

	if(Volume.getPosition().x > 540){
		Volume.setPosition(540,Volume.getPosition().y);
		VolumeS.setPosition(540,Volume.getPosition().y);
	}

	if(Volume.getPosition().x < 80){
			Volume.setPosition(80,Volume.getPosition().y);
			VolumeS.setPosition(80,Volume.getPosition().y);
		}
}
void Menu::loopEvents() {

	sf::Event event;

	pos_mouse = sf::Mouse::getPosition(window);
	mouse_coord = window.mapPixelToCoords(pos_mouse);

	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
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
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return) && SelecionadoEnter == false) {
			SelecionadoEnter = true;
		}
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && Mouse_Left == false) {
			Mouse_Left = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::LShift) && VolumeUp == false && keySettings == true) {
			VolumeUp = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl) && VolumeDown == false && keySettings == true) {
			VolumeDown = true;
		}

	}
}
void Menu::ChamarGame(){

	Game * startGame = new Game();
	startGame->run_game();
	delete startGame;
	startGame = nullptr;
}

void Menu::ChamarLoja(){

	Loja * startLoja ;
	startLoja->run_loja();


}
void Menu::drawMenu() {
	window.clear();
	window.draw(Fundo);
	window.draw(startButtonS);
	window.draw(settingButtonS);
	window.draw(texture3S);
	window.draw(texture4S);
	window.draw(VolumeS);
	window.draw(arrowRS);
	window.draw(arrowLS);
	window.draw(vitrineS);
	window.display();


}

void Menu::run_menu() {
	music.play();
	music.setLoop(true);

	while (window.isOpen()) { // main loop
		loopEvents();
		if (keyMenu == true) {
			eventsMenu();
		} else if (keySettings == true) {
			Eventsconfiguration();
		}else if (keyGame == true) {
			ChamarGame();
		}else if (keyShop == true) {
			ChamarLoja();
		}

		drawMenu();
	}
}
