#include "header.hpp"

void Loja::InicializarLoja() {
	ReadSaving();
	offLoja = 0;
	CarP1 = 1;
	CarP2 = 1;
	CounterFrame = 0;

	font.loadFromFile("assets/Font/VintageTimes-Light.ttf");
	MoneysAcount_1.setFont(font);
	MoneysAcount_2.setFont(font);
	MoneysAcount_1.setFillColor(sf::Color::Magenta);
	MoneysAcount_2.setFillColor(sf::Color::Magenta);
	//Textures and Sprites p1
	ArrowR.loadFromFile("assets/Loja/SetR.png");
	ArrowL.loadFromFile("assets/Loja/SetL.png");
	ArrowRS.setTexture(ArrowR, true);
	ArrowLS.setTexture(ArrowL, true);
	ArrowRS.setColor(sf::Color::White);
	ArrowLS.setColor(sf::Color::White);
	ArrowRS.setScale(0.3, 0.3);
	ArrowRS.setPosition(370, 360);
	ArrowLS.setScale(0.3, 0.3);
	ArrowLS.setPosition(0, 360);
	vitrineS.setColor(sf::Color::White);
	ArrowRS2.setTexture(ArrowR);
	ArrowLS2.setTexture(ArrowL);
	ArrowRS2.setScale(0.3, 0.3);
	ArrowRS2.setPosition(1070, 360);
	ArrowLS2.setScale(0.3, 0.3);
	ArrowLS2.setPosition(700, 360);
	vitrineS2.setColor(sf::Color::White);
	ArrowRS2.setColor(sf::Color::White);
	ArrowLS2.setColor(sf::Color::White);
	CarSelectP1 = 1;
	CarSelectP2 = 1;
	SelecionadoEnter = false;
	KeyLeft = false;
	KeyRight = false;
	SelecionadoEnter = false;
	Space = false;
	KeyA = false;
	KeyD = false;
	money[0].loadFromFile("assets/Loja/1.png");
	coins.setTexture(money[0], true);
	blocked.loadFromFile("assets/Loja/blocked.png");
	Blocked.setTexture(blocked, true);
	Blocked.setScale(0.5,0.5);
	Blocked.setPosition(150, 250);
	Blocked_2.setTexture(blocked, true);
	Blocked_2.setScale(0.5,0.5);
	Blocked_2.setPosition(860, 250);
	Price_car = 0;
	Price_car_2 = 0;
}
void Loja::ReadSaving(){
	int tam;
	tam = Status.size();

	for(int i =0;i < tam ;i++){
		carros.pop_back();
		Status.pop_back();
	}
	int tam2 = Status2.size();

	for(int i =0;i < tam2 ;i++){
		carros2.pop_back();
		Status2.pop_back();
	}



	ifstream file("Saved/SaveCars.txt");
	if(!file.is_open()){
		cout << "ERROR";
	}
	string linha;
	string player,campo;
	stringstream ss;

	getline(file,linha);
	getline(file,linha);
	Acount_1 = atoi(linha.c_str());
	bool verificarP2 = false;

	while(getline(file,linha)){
		stringstream ss(linha);
		string campo;
		string status;
		int car;
		getline(ss,campo,',');
		if(campo == "P2"){

			getline(ss,campo,',');
			Acount_2 = atoi(campo.c_str());
			verificarP2 = true;

		} else if(verificarP2 == false) {

			car = atoi(campo.c_str());
			getline(ss,campo,',');
			status = campo;
			Status.push_back(status);
			carros.push_back(car);

		} else {

			car = atoi(campo.c_str());
			getline(ss,campo,',');
			status = campo;
			Status2.push_back(status);
			carros2.push_back(car);

		}

	}

	file.close();

	if(Status[0] == "unlocked" and carros[0] == 1){
		Blocked1 = false;
	}else{
		Blocked1 = true;
	}
	if(Status[1] == "unlocked" and carros[1] == 2){
		Blocked2 = false;
	}else{
		Blocked2 = true;
	}
	if(Status[2] == "unlocked" and carros[2] == 3){
		Blocked3 = false;
	}else{
		Blocked3 = true;
	}
	if(Status[3] == "unlocked" and carros[3] == 4){
		Blocked4 = false;
	}else{
		Blocked4 = true;
	}
	if(Status[4] == "unlocked" and carros[4] == 5){
		Blocked5 = false;
	}else{
		Blocked5 = true;
	}


	if(Status2[0] == "unlocked" and carros2[0] == 1){
		Blocked1_2 = false;
	}else{
		Blocked1_2 = true;
	}
	if(Status2[1] == "unlocked" and carros2[1] == 2){
		Blocked2_2 = false;
	}else{
		Blocked2_2 = true;
	}
	if(Status2[2] == "unlocked" and carros2[2] == 3){
		Blocked3_2 = false;
	}else{
		Blocked3_2 = true;
	}
	if(Status2[3] == "unlocked" and carros2[3] == 4){
		Blocked4_2 = false;
	}else{
		Blocked4_2 = true;
	}
	if(Status2[4] == "unlocked" and carros2[4] == 5){
		Blocked5_2 = false;
	}else{
		Blocked5_2 = true;
	}
}


void Loja::DesenharFundoLoja(sf::Sprite *Fundo) {
	fundo.loadFromFile("assets/Loja/Loja.png");
	Fundo->setTexture(fundo, true);
}
void Loja::EventesKeyBoard() {

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) && KeyA == false) {
		KeyA = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)
			&& SelecionadoEnter == false) {
		Space = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D) && KeyD == false) {
		KeyD = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && KeyLeft == false) {
		KeyLeft = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && KeyRight == false) {
		KeyRight = true;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)
			&& SelecionadoEnter == false) {
		SelecionadoEnter = true;
	}

}

void Loja::Section1() {

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
		if(CarSelectP1 == 1 ){
				if(Blocked1 == false){
				CarP1 = 1;
			}
		}
		if(CarSelectP1 == 2 ){
			if(Blocked2 == false){
				CarP1 = 2;
			}
		}
		if(CarSelectP1 == 3 ){
				if(Blocked3 == false){
				CarP1 = 3;
			}
		}
		if(CarSelectP1 == 4 ){
				if(Blocked4 == false){
				CarP1 = 4;
			}
		}
		if(CarSelectP1 == 5 ){
				if(Blocked5 == false){
				CarP1 = 5;
			}
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
		if (CarSelectP1 > 5) {
			CarSelectP1 = 1;
		}
		if(CarSelectP1 == 1 ){
				if(Blocked1 == false){
				CarP1 = 1;
			}
		}
		if(CarSelectP1 == 2 ){
			if(Blocked2 == false){
				CarP1 = 2;
			}
		}
		if(CarSelectP1 == 3 ){
				if(Blocked3 == false){
				CarP1 = 3;
			}
		}
		if(CarSelectP1 == 4 ){
				if(Blocked4 == false){
				CarP1 = 4;
			}
		}
		if(CarSelectP1 == 5 ){
				if(Blocked5 == false){
				CarP1 = 5;
			}
		}
		KeyA = false;
	}

	if (Space == true) {
		if(CarSelectP1 == 2 and Blocked2 == true){
			if(Acount_1 >= Price_car){
				Acount_1 = Acount_1 - Price_car;
				Status[1] = "unlocked";
				Blocked2 = false;
				CarP1 = 2;
			}
		}
		if(CarSelectP1 == 3 and Blocked3 == true){
			if(Acount_1 >= Price_car){
				Acount_1 = Acount_1 - Price_car;
				Status[2] = "unlocked";
				Blocked3 = false;
				CarP1 = 3;
			}
		}

		if(CarSelectP1 == 4 and Blocked4 == true){
			if(Acount_1 >= Price_car){
				Acount_1 = Acount_1 - Price_car;
				Status[3] = "unlocked";
				Blocked4 = false;
				CarP1 = 4;
			}
		}
		if(CarSelectP1 == 5 and Blocked5 == true){
			if(Acount_1 >= Price_car){
				Acount_1 = Acount_1 - Price_car;
				Status[4] = "unlocked";
				Blocked5 = false;
				CarP1 = 5;
			}
		}
		escolhafinalizada1 = true;
		Space = false;
	}

	if (CarSelectP1 == 1) {
		vitrine.loadFromFile("assets/Cars/V1.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(0.54, 0.54);
		vitrineS.setPosition(156, 286);
	}
	if (CarSelectP1 == 2) {
		vitrine.loadFromFile("assets/Cars/V2.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(1, 1);
		vitrineS.setPosition(156, 316);
	}
	if (CarSelectP1 == 3) {
		vitrine.loadFromFile("assets/Cars/V3.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(0.74, 0.74);
		vitrineS.setPosition(136, 176);
	}
	if (CarSelectP1 == 4) {
		vitrine.loadFromFile("assets/Cars/V4.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setScale(0.94, 0.94);
		vitrineS.setPosition(166, 326);
	}
	if (CarSelectP1 == 5) {
		vitrineS.setScale(0.54, 0.54);
		vitrine.loadFromFile("assets/Cars/V5.png");
		vitrineS.setTexture(vitrine, true);
		vitrineS.setPosition(106, 306);
	}

}

void Loja::Section2() {
	//coloring p2
	if (KeyRight == true) {
		CarSelectP2++;
		ArrowRS2.setColor(sf::Color::Blue);
		ArrowLS2.setColor(sf::Color::White);
		if (CarSelectP2 > 5) {
			CarSelectP2 = 1;
		}

		if(CarSelectP2 == 1 ){
				if(Blocked1 == false){
				CarP2 = 1;
			}
		}
		if(CarSelectP2 == 2 ){
			if(Blocked2 == false){
				CarP2 = 2;
			}
		}
		if(CarSelectP2 == 3 ){
				if(Blocked3 == false){
				CarP2 = 3;
			}
		}
		if(CarSelectP2 == 4 ){
				if(Blocked4 == false){
				CarP2 = 4;
			}
		}
		if(CarSelectP2 == 5 ){
				if(Blocked5 == false){
				CarP2 = 5;
			}
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
		if(CarSelectP2 == 1 ){
				if(Blocked1_2 == false){
				CarP2 = 1;
			}
		}
		if(CarSelectP2 == 2 ){
			if(Blocked2_2 == false){
				CarP2 = 2;
			}
		}
		if(CarSelectP2 == 3 ){
				if(Blocked3_2 == false){
				CarP2 = 3;
			}
		}
		if(CarSelectP2 == 4 ){
				if(Blocked4_2 == false){
				CarP2 = 4;
			}
		}
		if(CarSelectP2 == 5 ){
				if(Blocked5_2 == false){
				CarP2 = 5;
			}
		}
		KeyLeft = false;
	}

	//click p2

	if (SelecionadoEnter == true) {
		if(CarSelectP2 == 2 and Blocked2_2 == true){
			if(Acount_2 >= Price_car_2){
				Acount_2 = Acount_2 - Price_car_2;
				Status2[1] = "unlocked";
				Blocked2_2 = false;
				CarP2 = 2;

			}
		}
		if(CarSelectP2 == 3 and Blocked3_2 == true){
			if(Acount_2 >= Price_car_2){
				Acount_2 = Acount_2 - Price_car_2;
				Status2[2] = "unlocked";
				CarP2 = 3;
				Blocked3_2 = false;
			}
		}
		if(CarSelectP2 == 4 and Blocked4_2 == true){
			if(Acount_2 >= Price_car_2){
				Acount_2 = Acount_2 - Price_car_2;
				Status2[3] = "unlocked";
				CarP2 = 4;
				Blocked4_2 = false;
			}
		}
		if(CarSelectP2 == 5 and Blocked5_2 == true){
			if(Acount_2 >= Price_car_2){
				Acount_2 = Acount_2 - Price_car_2;
				Status2[4] = "unlocked";
				CarP2 = 5;
				Blocked5_2 = false;
			}
		}
		escolhafinalizada2 = true;
		SelecionadoEnter = false;

	}

	if (CarSelectP2 == 1) {
		vitrine2.loadFromFile("assets/Cars/V1.png");
		vitrineS2.setTexture(vitrine2, true);
		vitrineS2.setScale(0.54, 0.54);
		vitrineS2.setPosition(850, 286);
	}
	if (CarSelectP2 == 2) {
		vitrine2.loadFromFile("assets/Cars/V2.png");
		vitrineS2.setTexture(vitrine2, true);
		vitrineS2.setScale(1, 1);
		vitrineS2.setPosition(850, 316);
	}
	if (CarSelectP2 == 3) {
		vitrine2.loadFromFile("assets/Cars/V3.png");
		vitrineS2.setTexture(vitrine2, true);
		vitrineS2.setScale(0.74, 0.74);
		vitrineS2.setPosition(840, 176);
	}
	if (CarSelectP2 == 4) {
		vitrine2.loadFromFile("assets/Cars/V4.png");
		vitrineS2.setTexture(vitrine2, true);
		vitrineS2.setScale(0.94, 0.94);
		vitrineS2.setPosition(850, 326);
	}
	if (CarSelectP2 == 5) {
		vitrine2.loadFromFile("assets/Cars/V5.png");
		vitrineS2.setTexture(vitrine2, true);
		vitrineS2.setScale(0.54, 0.54);
		vitrineS2.setPosition(810, 306);
	}

}
void Loja::CarsSelecteds(int *Car1, int *Car2) {
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
void Loja::OffLoja() {
	offLoja = 1;
	init_Loja = false;
}
int Loja::returnKeyLoja() {
	return offLoja;

}
void Loja::EventsLoja() {
	SelectTwoPlayer();

}
void Loja::drawLoja(sf::RenderWindow *w) {
	w->draw(vitrineS2);
	w->draw(ArrowRS);
	w->draw(ArrowLS2);
	w->draw(ArrowLS);
	w->draw(vitrineS);
	w->draw(ArrowRS2);
	w->draw(coins);
	w->draw(coins2);
	w->draw(MoneysAcount_1);
	w->draw(MoneysAcount_2);
	w->draw(Blocked);
	w->draw(Blocked_2);
}
void Loja::Visibile(){

	if(Blocked1 == false and CarSelectP1 == 1 and Status[0] == "unlocked"){
		Blocked.setColor(sf::Color::Transparent);
	}else if(Blocked2 == false and CarSelectP1 == 2 and Status[1] == "unlocked"){
		Blocked.setColor(sf::Color::Transparent);
	}else if(Blocked3 == false and CarSelectP1 == 3 and Status[2] == "unlocked"){
		Blocked.setColor(sf::Color::Transparent);
	}else if(Blocked4 == false and CarSelectP1 == 4 and Status[3] == "unlocked"){
		Blocked.setColor(sf::Color::Transparent);
	}else if(Blocked5 == false and CarSelectP1 == 5 and Status[4] == "unlocked"){
		Blocked.setColor(sf::Color::Transparent);
	}else{
		Blocked.setColor(sf::Color::White);
	}



	if(Blocked1_2 == false and CarSelectP2 == 1 and Status2[0] == "unlocked"){
		Blocked_2.setColor(sf::Color::Transparent);
	}else if(Blocked2_2 == false and CarSelectP2 == 2 and Status2[1] == "unlocked"){
		Blocked_2.setColor(sf::Color::Transparent);
	}else if(Blocked3_2 == false and CarSelectP2 == 3 and Status2[2] == "unlocked"){
		Blocked_2.setColor(sf::Color::Transparent);
	}else if(Blocked4_2 == false and CarSelectP2 == 4 and Status2[3] == "unlocked"){
		Blocked_2.setColor(sf::Color::Transparent);
	}else if(Blocked5_2 == false and CarSelectP2 == 5 and Status2[4] == "unlocked"){
		Blocked_2.setColor(sf::Color::Transparent);
	}else{
		Blocked_2.setColor(sf::Color::White);
	}
}
void Loja::Preco_Carros(){
	if(CarSelectP1 == 2){
		Price_car = 20;
	}
	if(CarSelectP1 == 3){
		Price_car = 30;
	}
	if(CarSelectP1 == 4){
		Price_car = 40;
	}
	if(CarSelectP1 == 5){
		Price_car = 50;
	}



	if(CarSelectP2 == 2){
		Price_car_2 = 20;
	}
	if(CarSelectP2 == 3){
		Price_car_2 = 30;
	}
	if(CarSelectP2 == 4){
		Price_car_2 = 40;
	}
	if(CarSelectP2 == 5){
		Price_car_2 = 50;
	}


}
void Loja::run_loja() {

	if (init_Loja == false) {
		InicializarLoja();
		init_Loja = true;
		Update_Texture = 0;

	}
	CounterFrame++;
	stringstream Amostra1;
	stringstream Amostra2;
	Amostra1 << Acount_1;
	Amostra2 << Acount_2;
	//coins.setTextureRect(sf::IntRect(127,1,20,15));

	MoneysAcount_1.setString(Amostra1.str());
	MoneysAcount_1.setCharacterSize(40);
	MoneysAcount_1.setPosition(100, 215);

	MoneysAcount_2.setString(Amostra2.str());
	MoneysAcount_2.setCharacterSize(40);
	MoneysAcount_2.setPosition(770, 215);

	coins.setPosition(60, 215);
	coins.setScale(0.4, 0.4);
	coins2.setPosition(730, 215);
	coins2.setScale(0.4, 0.4);

	money[0].loadFromFile("assets/Loja/1.png");
	money[1].loadFromFile("assets/Loja/2.png");
	money[2].loadFromFile("assets/Loja/3.png");
	money[3].loadFromFile("assets/Loja/4.png");
	money[4].loadFromFile("assets/Loja/5.png");
	money[5].loadFromFile("assets/Loja/6.png");

	if (CounterFrame == 4) {
		if (Update_Texture == 5) {
			Update_Texture = 0;
		} else {
			Update_Texture++;
		}
		CounterFrame = 0;
	}

	SaveCars();

	coins.setTexture(money[Update_Texture], true);
	coins2.setTexture(money[Update_Texture], true);

	EventsLoja();
	Visibile();
	Preco_Carros();
}

void Loja::SaveCars(){
	ofstream fileSaved("Saved/SaveCars.txt");
	fileSaved << "P1" << endl;
	fileSaved << Acount_1 << endl;
	if(!fileSaved.is_open()){
		cout << "ERROR";
	}
	int tam;
	tam = Status.size();

	for(int i =0;i < tam ;i++){
		fileSaved << carros[i] << "," << Status[i] << endl;
	}

	tam = Status2.size();
	fileSaved << "P2," << Acount_2<<endl;
	for(int i =0;i < tam ;i++){
		fileSaved << carros2[i] << "," << Status2[i] << endl;
	}

	fileSaved.close();
}



