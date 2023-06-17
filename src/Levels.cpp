#include "header.hpp"

void Levels::inicializar_Levels() {
	fundo.loadFromFile("assets/4.png");
	Fundo.setTexture(fundo, true);
	Counter_Selectd_Levels = 0;
	counterVertical = 1;
	counterKeyboard = 1;
	arrowRS.setColor(sf::Color::Transparent);
	arrowLS.setColor(sf::Color::Transparent);
	vitrineS.setColor(sf::Color::Transparent);
	VolumeS.setColor(sf::Color::Transparent);
	texture4S.setColor(sf::Color::Transparent);
	texture5S.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	ArrowLS.setColor(sf::Color::Transparent);
	ArrowRS.setColor(sf::Color::Transparent);
	texture5S.setColor(sf::Color::Transparent);
	Reso.setFillColor(sf::Color::Transparent);
	textureLockeds.loadFromFile("assets/Loja/blocked.png");
	ArrowRS2.setColor(sf::Color::Transparent);
	ArrowLS2.setColor(sf::Color::Transparent);
	vitrineS2.setColor(sf::Color::Transparent);
	vitrineS.setColor(sf::Color::Transparent);
	startButtonS.setColor(sf::Color::Transparent);
	settingButtonS.setColor(sf::Color::Transparent);
	texture3S.setColor(sf::Color::Transparent);
	iniciar_numeros();
	reading_Save();
}

void Levels::reading_Save() {
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
 int tam = Levels.size();
for(int c = 0; c < tam; c++){
		if( Levels[c] == "Level1" && status[c] == Blocked){
			Bloqued = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(245, 165);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level1" && status[c] == Unlocked){
			Bloqued = false;

		}

		if( Levels[c] == "Level2" && status[c] == Blocked){
			Bloqued2 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(415, 165);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level2" && status[c] == Unlocked){
			Bloqued2 = false;
			Nivelatual = 1;
		}

		if( Levels[c] == "Level3" && status[c] == Blocked){
			Bloqued3 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(585, 165);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level3" && status[c] == Unlocked){
			Bloqued3 = false;
			Nivelatual = 2;
		}

		if( Levels[c] == "Level4" && status[c] == Blocked){
			Bloqued4 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(755, 165);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level4" && status[c] == Unlocked){
			Bloqued4 = false;
			Nivelatual = 3;
		}

		if( Levels[c] == "Level5" && status[c] == Blocked){
			Bloqued5 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(925, 165);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level5" && status[c] == Unlocked){
			Bloqued5 = false;
			Nivelatual = 4;
		}

		if( Levels[c] == "Level6" && status[c] == Blocked){
			Bloqued6 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(245, 365);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level6" && status[c] == Unlocked){
			Bloqued6 = false;
			Nivelatual = 5;
		}

		if( Levels[c] == "Level7" && status[c] == Blocked){
			Bloqued7 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(415, 365);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level7" && status[c] == Unlocked){
			Bloqued7 = false;
			Nivelatual = 6;
		}

		if( Levels[c] == "Level8" && status[c] == Blocked){
			Bloqued8 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(585, 365);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level8" && status[c] == Unlocked){
			Bloqued8 = false;
			Nivelatual = 7;
		}

		if( Levels[c] == "Level9" && status[c] == Blocked){
			Bloqued9 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(755, 365);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level9" && status[c] == Unlocked){
			Bloqued9 = false;
			Nivelatual = 8;
		}

		if( Levels[c] == "Level10" && status[c] == Blocked){
			Bloqued10 = true;
			sf::Sprite L;
			L.setTexture(textureLockeds);
			L.setScale(0.3, 0.3);
			L.setPosition(925, 365);
			SpritesLockeds.push_back(L);
		} else if (Levels[c] == "Level10" && status[c] == Unlocked){
			Bloqued10 = false;
			Nivelatual = 9;
		}
	}

}

void Levels::iniciar_numeros() {

	font->loadFromFile("assets/Font/VintageTimes.ttf");
	Lv1.setFont(*font);
	Lv1.setCharacterSize(140);
	Lv1.setFillColor(sf::Color::Cyan);
	Lv1.setPosition(285, 155);
	Lv1.setString("1");

	Lv2.setFont(*font);
	Lv2.setCharacterSize(140);
	Lv2.setFillColor(sf::Color::Cyan);
	Lv2.setPosition(455, 155);
	Lv2.setString("2");

	Lv3.setFont(*font);
	Lv3.setCharacterSize(140);
	Lv3.setFillColor(sf::Color::Cyan);
	Lv3.setPosition(625, 155);
	Lv3.setString("3");

	Lv4.setFont(*font);
	Lv4.setCharacterSize(140);
	Lv4.setFillColor(sf::Color::Cyan);
	Lv4.setPosition(795, 155);
	Lv4.setString("4");

	Lv5.setFont(*font);
	Lv5.setCharacterSize(140);
	Lv5.setFillColor(sf::Color::Cyan);
	Lv5.setPosition(965, 155);
	Lv5.setString("5");

	Lv6.setFont(*font);
	Lv6.setCharacterSize(140);
	Lv6.setFillColor(sf::Color::Cyan);
	Lv6.setPosition(285, 355);
	Lv6.setString("6");

	Lv7.setFont(*font);
	Lv7.setCharacterSize(140);
	Lv7.setFillColor(sf::Color::Cyan);
	Lv7.setPosition(455, 355);
	Lv7.setString("7");

	Lv8.setFont(*font);
	Lv8.setCharacterSize(140);
	Lv8.setFillColor(sf::Color::Cyan);
	Lv8.setPosition(625, 355);
	Lv8.setString("8");

	Lv9.setFont(*font);
	Lv9.setCharacterSize(140);
	Lv9.setFillColor(sf::Color::Cyan);
	Lv9.setPosition(795, 355);
	Lv9.setString("9");

	Lv10.setFont(*font);
	Lv10.setCharacterSize(120);
	Lv10.setFillColor(sf::Color::Cyan);
	Lv10.setPosition(950, 360);
	Lv10.setString("10");

	CampMouse1.setPosition(253, 185);
	CampMouse1.setSize(sf::Vector2f(120, 120));

	CampMouse2.setPosition(429, 185);
	CampMouse2.setSize(sf::Vector2f(120, 120));

	CampMouse3.setPosition(600, 185);
	CampMouse3.setSize(sf::Vector2f(120, 120));

	CampMouse4.setPosition(770, 185);
	CampMouse4.setSize(sf::Vector2f(120, 120));

	CampMouse5.setPosition(943, 185);
	CampMouse5.setSize(sf::Vector2f(120, 120));

	CampMouse6.setPosition(253, 381);
	CampMouse6.setSize(sf::Vector2f(120, 120));

	CampMouse7.setPosition(429, 381);
	CampMouse7.setSize(sf::Vector2f(120, 120));

	CampMouse8.setPosition(598, 381);
	CampMouse8.setSize(sf::Vector2f(120, 120));

	CampMouse9.setPosition(770, 381);
	CampMouse9.setSize(sf::Vector2f(120, 120));

	CampMouse10.setPosition(942, 381);
	CampMouse10.setSize(sf::Vector2f(120, 120));
}

void Levels::Keyboard_Levels() {
	if(counterKeyboard == 1 && counterVertical == 1){
		Nivelatual = 0;
	}
	if (KeyUP == true) {
		if(counterKeyboard == 5 && Bloqued5 == false ){
			counterVertical--;
			Nivelatual = 4;
		}
		if(counterKeyboard == 4 && Bloqued4 == false ){
			counterVertical--;
			Nivelatual = 3;
		}
		if(counterKeyboard == 3 && Bloqued3 == false ){
			counterVertical--;
			Nivelatual = 2;
		}
		if(counterKeyboard == 2 && Bloqued2 == false ){
			counterVertical--;
			Nivelatual = 1;
		}
		if(counterKeyboard == 1 && Bloqued == false ){
			counterVertical--;
			Nivelatual = 0;
		}
		if (counterVertical == 0) {
			counterVertical = 1;
		}
		KeyUP = false;
	}

	if (KeyDown == true) {
		if(counterKeyboard == 1 && Bloqued6 == false ){
			counterVertical++;
			Nivelatual = 5;
		}
		if(counterKeyboard == 2 && Bloqued7 == false ){
			counterVertical++;
			Nivelatual = 6;
		}
		if(counterKeyboard == 3 && Bloqued8 == false ){
			counterVertical++;
			Nivelatual = 7;
		}
		if(counterKeyboard == 4 && Bloqued9 == false ){
			counterVertical++;
			Nivelatual = 8;
		}
		if(counterKeyboard == 5 && Bloqued10 == false ){
			counterVertical++;
			Nivelatual = 9;
		}




		if (counterVertical == 3) {
			counterVertical = 2;
		}
		KeyDown = false;
	}

	if (KeyRight == true) {

		if(counterKeyboard == 4 && Bloqued5 == false && counterVertical == 1){
			counterKeyboard++;
			Nivelatual = 4;

		}
		if(counterKeyboard == 3 && Bloqued4 == false && counterVertical == 1){
			counterKeyboard++;
			Nivelatual = 3;

		}
		if(counterKeyboard == 2 && Bloqued3 == false && counterVertical == 1){
			counterKeyboard++;
			Nivelatual = 2;
		}
		if(counterKeyboard == 1 && Bloqued2 == false && counterVertical == 1){
			counterKeyboard++;
			Nivelatual = 1;
		}
		if(counterKeyboard == 1 && counterVertical == 2){
			Nivelatual = 5;
		}
		//Linha 2a
		if(counterKeyboard == 4 && counterVertical == 2 && Bloqued10 == false ){
			counterKeyboard++;
			Nivelatual = 9;
		}
		if(counterKeyboard == 3 && counterVertical == 2 && Bloqued9 == false ){
			counterKeyboard++;
			Nivelatual = 8;
		}
		if(counterKeyboard == 2 && counterVertical == 2 && Bloqued8 == false ){
			counterKeyboard++;
			Nivelatual = 7;
		}
		if(counterKeyboard == 1 && counterVertical == 2 && Bloqued7 == false ){
			counterKeyboard++;
			Nivelatual = 6;
		}


		if (counterKeyboard == 6) {
			counterKeyboard = 5;
		}
		KeyRight = false;
	}

	if (KeyLeft == true) {
		if(counterKeyboard == 2 && Bloqued == false && counterVertical == 1 ){
			counterKeyboard--;
			Nivelatual = 0;
		}
		if(counterKeyboard == 3 && Bloqued2 == false && counterVertical == 1){
			counterKeyboard--;
			Nivelatual = 1;
		}
		if(counterKeyboard == 4 && Bloqued3 == false && counterVertical == 1){
			counterKeyboard--;
			Nivelatual = 2;
		}
		if(counterKeyboard == 5 && Bloqued4 == false && counterVertical == 1){
			counterKeyboard--;
			Nivelatual = 3;
		}

		if(counterKeyboard == 2 && Bloqued6 == false && counterVertical == 2 ){
			counterKeyboard--;
			Nivelatual = 5;
		}
		if(counterKeyboard == 3 && Bloqued7 == false && counterVertical == 2){
			counterKeyboard--;
			Nivelatual = 6;
		}
		if(counterKeyboard == 4 && Bloqued8 == false && counterVertical == 2){
			counterKeyboard--;
			Nivelatual = 7;
		}
		if(counterKeyboard == 5 && Bloqued9 == false && counterVertical == 2){
			counterKeyboard--;
			Nivelatual = 8;
		}

		if (counterKeyboard == 0) {
			counterKeyboard = 1;
		}
		if(counterKeyboard == 1 && counterVertical == 1){
			Nivelatual = 0;
		}
		if(counterKeyboard == 5 && counterVertical == 2){
			Nivelatual = 9;
		}
		KeyLeft = false;
	}

	if(SelecionadoEnter == true){
		LimparTela();
		keyGame= true;
		keyLevels = false;
		SelecionadoEnter = false;
	}
}

void Levels::Mouse_Levels() {
	if (CampMouse1.getGlobalBounds().contains(mouse_coord) && Bloqued == false ) {
		counterVertical = 1, counterKeyboard = 1;
	}

	if (CampMouse2.getGlobalBounds().contains(mouse_coord) && Bloqued2 == false) {
		counterVertical = 1, counterKeyboard = 2;
	}

	if (CampMouse3.getGlobalBounds().contains(mouse_coord) && Bloqued3 == false) {
		counterVertical = 1, counterKeyboard = 3;
	}

	if (CampMouse4.getGlobalBounds().contains(mouse_coord) && Bloqued4 == false) {
		counterVertical = 1, counterKeyboard = 4;
	}

	if (CampMouse5.getGlobalBounds().contains(mouse_coord) && Bloqued5 == false) {
		counterVertical = 1, counterKeyboard = 5;
	}

	if (CampMouse6.getGlobalBounds().contains(mouse_coord) && Bloqued6 == false) {
		counterVertical = 2, counterKeyboard = 1;
	}

	if (CampMouse7.getGlobalBounds().contains(mouse_coord) && Bloqued7 == false) {
		counterVertical = 2, counterKeyboard = 2;
	}

	if (CampMouse8.getGlobalBounds().contains(mouse_coord) && Bloqued8 == false) {
		counterVertical = 2, counterKeyboard = 3;
	}

	if (CampMouse9.getGlobalBounds().contains(mouse_coord) && Bloqued9 == false) {
		counterVertical = 2, counterKeyboard = 4;
	}

	if (CampMouse10.getGlobalBounds().contains(mouse_coord) && Bloqued10 == false) {
		counterVertical = 2, counterKeyboard = 5;
	}

	if(Mouse_Left == true){
		if(CampMouse1.getGlobalBounds().contains(mouse_coord) && Bloqued == false ){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 0;
		}
		if(CampMouse2.getGlobalBounds().contains(mouse_coord) && Bloqued2 == false ){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 1;
		}
		if(CampMouse3.getGlobalBounds().contains(mouse_coord) && Bloqued3 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 2;
		}
		if(CampMouse4.getGlobalBounds().contains(mouse_coord) && Bloqued4 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 3;
		}
		if(CampMouse5.getGlobalBounds().contains(mouse_coord) && Bloqued5== false ){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 4;
		}
		if(CampMouse6.getGlobalBounds().contains(mouse_coord) && Bloqued6 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 5;
		}
		if(CampMouse7.getGlobalBounds().contains(mouse_coord) && Bloqued7 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 6;
		}
		if(CampMouse8.getGlobalBounds().contains(mouse_coord) && Bloqued8 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 7;
		}
		if(CampMouse9.getGlobalBounds().contains(mouse_coord) && Bloqued9 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 8;
		}
		if(CampMouse10.getGlobalBounds().contains(mouse_coord) && Bloqued10 == false){
			LimparTela();
			keyGame= true;
			keyLevels = false;
			Nivelatual = 9;
		}
		Mouse_Left = false;
	}
}

void Levels::events_Levels() {

	if (counterVertical == 1 && counterKeyboard == 1 && Bloqued == false) {
		Counter_Selectd_Levels = 1;
		Lv1.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 1 && counterKeyboard == 2 && Bloqued2 == false) {
		Counter_Selectd_Levels = 2;
		Lv2.setFillColor(sf::Color::Magenta);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 1 && counterKeyboard == 3 && Bloqued3 == false) {
		Counter_Selectd_Levels = 3;
		Lv3.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 1 && counterKeyboard == 4 && Bloqued4 == false) {
		Counter_Selectd_Levels = 4;
		Lv4.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 1 && counterKeyboard == 5 && Bloqued5 == false) {
		Counter_Selectd_Levels = 5;
		Lv5.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
// ||||||||||||||||||||||||||||||||||||2 coluna ||||||||||||||||||||||||||||||||||||
	if (counterVertical == 2 && counterKeyboard == 1 && Bloqued6 == false) {
		Counter_Selectd_Levels = 6;
		Lv6.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 2 && counterKeyboard == 2 && Bloqued7 == false) {
		Counter_Selectd_Levels = 7;
		Lv7.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 2 && counterKeyboard == 3 && Bloqued8 == false) {
		Counter_Selectd_Levels = 8;
		Lv8.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 2 && counterKeyboard == 4 && Bloqued9 == false) {
		Counter_Selectd_Levels = 9;
		Lv9.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
		Lv10.setFillColor(sf::Color::Cyan);
	}
	if (counterVertical == 2 && counterKeyboard == 5 && Bloqued10 == false) {
		Counter_Selectd_Levels = 10;
		Lv10.setFillColor(sf::Color::Magenta);
		Lv2.setFillColor(sf::Color::Cyan);
		Lv3.setFillColor(sf::Color::Cyan);
		Lv4.setFillColor(sf::Color::Cyan);
		Lv5.setFillColor(sf::Color::Cyan);
		Lv6.setFillColor(sf::Color::Cyan);
		Lv7.setFillColor(sf::Color::Cyan);
		Lv8.setFillColor(sf::Color::Cyan);
		Lv9.setFillColor(sf::Color::Cyan);
		Lv1.setFillColor(sf::Color::Cyan);
	}

}
void Levels::LimparTela(){
	Lv10.setFillColor(sf::Color::Transparent);
	Lv2.setFillColor(sf::Color::Transparent);
	Lv3.setFillColor(sf::Color::Transparent);
	Lv4.setFillColor(sf::Color::Transparent);
	Lv5.setFillColor(sf::Color::Transparent);
	Lv6.setFillColor(sf::Color::Transparent);
	Lv7.setFillColor(sf::Color::Transparent);
	Lv8.setFillColor(sf::Color::Transparent);
	Lv9.setFillColor(sf::Color::Transparent);
	Lv1.setFillColor(sf::Color::Transparent);
	int tam = SpritesLockeds.size();
	for(int j = 0; j < tam; j++){
		SpritesLockeds[j].setColor(sf::Color::Transparent);
	}
}
void Levels::run_Levels() {
	if (startLv == false) {
		inicializar_Levels();
		startLv = true;
	}
	events_Levels();
	Keyboard_Levels();
	Mouse_Levels();
}
void Levels::started_Game() {
	Init_Game = false;
	SoundCont = false;
	Contagem_Realizada = false;
}
