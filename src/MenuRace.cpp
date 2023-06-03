#include "header.hpp"
Menu::Menu() {
	font = new sf::Font();
	Start();
}
Menu::~Menu() {
	delete font;
}
void Menu::Start() {
	texturaRecorrente =0;
	c = 0;
	window.create(sf::VideoMode(1280, 720), "Race Time",sf::Style::Titlebar | sf::Style::Close);
	window.setPosition(sf::Vector2i(0, 0));
	sf::Image Icon = sf::Image { };
	Icon.loadFromFile("../assets/Icon/Icon.jpg");
	window.setIcon(Icon.getSize().x, Icon.getSize().y, Icon.getPixelsPtr());
	counterResu = 3;
	Volume.setPosition(450, 390);
	VolumeS.setPosition(450,390);
	spritecars.setPosition(400,400);
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

	fundo.loadFromFile("../assets/1.png");
	Fundo.setTexture(fundo);
	startButton.loadFromFile("../assets/Start.png");
	startButtonS.setTexture(startButton);
	startButtonS.setScale(0.6, 0.6);
	startButtonS.setPosition(510, 400);
	StartMouse.setPosition(480, 400);
	StartMouse.setSize(sf::Vector2f(300, 110));
	//*********************************************************
	ArrowRS.setColor(sf::Color::Transparent);
	ArrowLS.setColor(sf::Color::Transparent);
	vitrineS.setColor(sf::Color::Transparent);
	VolumeS.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	texture5S.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	ArrowLS.setColor(sf::Color::Transparent);
	ArrowRS.setColor(sf::Color::Transparent);
	texture5S.setColor(sf::Color::Transparent);
	Reso.setFillColor(sf::Color::Transparent);
	//***********************************************************
	settingButton.loadFromFile("../assets/Setting.png");
	settingButtonS.setTexture(settingButton);
	settingButtonS.setScale(0.5, 0.5);
	settingButtonS.setPosition(490, 550);
	SettingMouse.setPosition(490, 550);
	SettingMouse.setSize(sf::Vector2f(300, 110));

	if(counterKeyboard == 0){
	startButtonS.setColor(sf::Color::White);
	settingButtonS.setColor(sf::Color::White);
	}
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
		if (StartMouse.getGlobalBounds().contains(mouse_coord)) {
			keyShop = true;
			keyMenu = false;
		}
		if (SettingMouse.getGlobalBounds().contains(mouse_coord)) {
			keyMenu = false;
			keySettings = true;
		}
		Mouse_Left = false;
	}

}

void Menu::Setconfiguration() {
	SetaEsquerada.setSize(sf::Vector2f(110, 120));
	SetaDireita.setSize(sf::Vector2f(110, 120));
	fundo.loadFromFile("../assets/2.png");
	texture3.loadFromFile("../assets/Settings/Home.png");
	texture3S.setTexture(texture3);
	texture3S.setScale(0.6, 0.6);
	texture3S.setPosition(110, 580);

	texture4.loadFromFile("../assets/Settings/quit.png");
	texture4S.setTexture(texture4);
	texture5.loadFromFile("../assets/Settings/resolution.png");
	texture5S.setTexture(texture5);

	texture5S.setScale(0.3, 0.3);
	texture4S.setScale(0.6, 0.6);
	texture4S.setPosition(922, 580);
	texture4S.setColor(sf::Color::White);
	texture3S.setColor(sf::Color::White);
	texture5S.setColor(sf::Color::White);

	VolumeT.loadFromFile("../assets/Settings/ButtonVol.png");
	VolumeS.setTexture(VolumeT);
	VolumeS.setColor(sf::Color::White);
	VolumeS.setScale(0.08, 0.08);
	Volume.setRadius(32);

	ArrowR.loadFromFile("../assets/Settings/arrowR.png");
	ArrowL.loadFromFile("../assets/Settings/arrowL.png");
	ArrowLS.setTexture(ArrowL);
	ArrowRS.setTexture(ArrowR);

	ArrowLS.setScale(0.3,0.3);
	ArrowRS.setScale(0.3,0.3);
	ArrowLS.setColor(sf::Color::White);
	ArrowRS.setColor(sf::Color::White);
	ArrowLS.setPosition(560, 287);
	ArrowRS.setPosition(760, 287);

	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);

	CampMouse3.setPosition(90, 570);
	CampMouse4.setPosition(872, 570);

	SetaDireita.setSize(sf::Vector2f(30, 30));
	SetaEsquerada.setSize(sf::Vector2f(30, 30));
	CampMouse3.setSize(sf::Vector2f(300, 110));
	CampMouse4.setSize(sf::Vector2f(300, 110));
	texture5S.setPosition(300, 275);
	font->loadFromFile("../assets/Font/VintageTimes.ttf");

	SetaDireita.setPosition(567, 287);
	SetaEsquerada.setPosition(767, 287);

	Reso.setFont(*font);
	Reso.setCharacterSize(30);
	Reso.setFillColor(sf::Color::Cyan);
	Reso.setPosition(620, 287);



}


void Menu::EventosMouseConfig() {



	if (CampMouse3.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::Magenta);
		texture4S.setColor(sf::Color::White);
	}

	if (CampMouse4.getGlobalBounds().contains(mouse_coord)) {
		texture3S.setColor(sf::Color::White);
		texture4S.setColor(sf::Color::Magenta);
	}
	if (SetaDireita.getGlobalBounds().contains(mouse_coord)) {
			texture3S.setColor(sf::Color::White);
			texture4S.setColor(sf::Color::White);
			ArrowLS.setColor(sf::Color::Magenta);
			ArrowRS.setColor(sf::Color::White);
	}

	if (SetaEsquerada.getGlobalBounds().contains(mouse_coord)) {
			texture3S.setColor(sf::Color::White);
			texture4S.setColor(sf::Color::White);
			ArrowRS.setColor(sf::Color::Magenta);
			ArrowLS.setColor(sf::Color::White);
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

		if (SetaEsquerada.getGlobalBounds().contains(mouse_coord)) {
			counterResu++;
		}

		if (SetaDireita.getGlobalBounds().contains(mouse_coord)) {
			counterResu--;
		}

		Mouse_Left = false;
	}


}
void Menu::Eventsconfiguration() {

	Setconfiguration();

	EventosMouseConfig();

	if(counterResu < 1){
		counterResu= 1;
	}

	if(counterResu == 1){
		Reso.setString("800X600");
		window.setSize(sf::Vector2u(800,600));
	}

	if(counterResu == 2){
		Reso.setString("1024X768");
		window.setSize(sf::Vector2u(1024,768));
	}

	if(counterResu== 3){
		Reso.setString("1280X720");
		window.setSize(sf::Vector2u(1280,720));
	}

	if(counterResu== 4){
		Reso.setString("1360X780");
		window.setSize(sf::Vector2u(1360,780));
	}
	if(counterResu == 5){
			Reso.setString("1600X900");
			window.setSize(sf::Vector2u(1600,900));
	}
	if(counterResu== 6){
			Reso.setString("1920X1080");
			window.setSize(sf::Vector2u(1980,1080));
	}
	if(counterResu> 6){
		counterResu= 6;
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

	if(Volume.getPosition().x > 800){
		Volume.setPosition(800,Volume.getPosition().y);
		VolumeS.setPosition(800,Volume.getPosition().y);
	}

	if(Volume.getPosition().x < 350){
			Volume.setPosition(350,Volume.getPosition().y);
			VolumeS.setPosition(350,Volume.getPosition().y);
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
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return) && SelecionadoEnter == false) {
			SelecionadoEnter = true;
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && SelecionadoEnter == false) {
			Space = true;
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
/*
	Game * startGame = new Game();
	startGame->run_game();
	delete startGame;
	startGame = nullptr;
	*/

	Game * start;
	start->run_game();
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
	window.draw(texture5S);
	window.draw(VolumeS);
	window.draw(ArrowRS);
	window.draw(ArrowLS);
	window.draw(ArrowRS2);
	window.draw(ArrowLS2);
	window.draw(vitrineS);
	window.draw(vitrineS2);
	window.draw(spritecars);
	window.draw(Reso);

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
		c++;
		drawMenu();
	}
}
