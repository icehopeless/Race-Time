#pragma once

#include<stdio.h>
#include<iostream>
#include<sstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include<vector>
using namespace std;
class Menu {
protected:
	sf::RenderWindow window;

	sf::Texture fundo;
	sf::Sprite Fundo;
	sf::Music music;
	sf::Texture startButton;
	sf::Sprite startButtonS;

	sf::Texture settingButton;
	sf::Sprite settingButtonS;


	sf::Texture texture3;
	sf::Sprite texture3S;

	sf::Texture texture4;
	sf::Sprite texture4S;

	sf::Texture texture5;
	sf::Sprite texture5S;

	sf::Texture VolumeT;
	sf::Sprite VolumeS;

	sf::CircleShape Volume;
	sf::Vector2i pos_mouse;
	sf::Vector2f mouse_coord;

	sf::RectangleShape StartMouse;
	sf::RectangleShape SettingMouse;

	sf::RectangleShape CampMouse3;
	sf::RectangleShape CampMouse4;

	sf::Font *font;
	sf::Text Reso;

	bool  KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool VolumeUp;
	bool VolumeDown;
	bool SelecionadoEnter;
	bool Space;
	bool Mouse_Left;
	bool KeyA;
	bool KeyD;

	int Sound,k;
	bool keySettings;
	bool keyMenu;
	bool keyShop;
	bool keyGame;
	int counterKeyboard;
	int counterVertical;

	int EscolhaCarro;

	bool destruirGame;
	bool destruirLoja;
	string resolutionNumber;
	sf::RectangleShape SetaEsquerada;
	sf::RectangleShape SetaDireita;

	int counterResu;

// ||||||||||||||||||||||||||||||||||||||||||||LOJA|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int CarSelectP1;
	int CarSelectP2;
	
	//p1
	sf::RectangleShape arrowMouseR;
	sf::RectangleShape arrowMouseL;
	sf::RectangleShape SelectCar;
	sf::Texture ArrowR;
	sf::Sprite  ArrowRS;
	sf::Texture ArrowL;
	sf::Sprite  ArrowLS;
	sf::Texture vitrine;
	sf::Texture vitrine2;
	sf::Sprite vitrineS;
	int CarP1;

	//p2
	sf::RectangleShape arrowMouseR2;
	sf::RectangleShape arrowMouseL2;
	sf::RectangleShape SelectCar2;
	sf::Sprite ArrowRS2;
	sf::Sprite ArrowLS2;
	sf::Sprite vitrineS2;
	int CarP2;

	int contSction = 1;
	bool escolhafinalizada1 = false;
	bool escolhafinalizada2 = false;

	


// ||||||||||||||||||||||||||||||||||||||||||||||||||Game||||||||||||||||||||||||||||||||||||||||||||||||||||
	sf::RectangleShape colison1;
	sf::RectangleShape carrohit;
	sf::Texture car[2];
	sf::Sprite spritecars;
	int texturaRecorrente,c;
	sf::FloatRect ColisonBounds ;
		sf::FloatRect carBounds ;

protected:

	void loopEvents();
	void Start();
	void drawMenu();
	void eventsMenu();
	void Setconfiguration();
	void Eventsconfiguration();
	void EventsconfigurationHorizontal();
	void EventsconfigurationVertical();
	void ZeraCounters();
	void EventosMouseConfig();
	void StartMenu();
	void ChamarGame();
	void ChamarLoja();
public:
	Menu();
	~Menu();
	void run_menu();
};


class Game:public Menu{
private:
	void InicializarGame();
	void DrawGame();
	void game();
	void EventsGame();

public :
	void MovimentCar();
	void run_game();
};


class Loja:public Menu{
public:
	void Section1();
	void Section2();
	void SelectTwoPlayer();
	void InicializarLoja();
	void loja();
	void EventsLoja();
public :
	void run_loja();
};



/*
 * COISAS DO JOGO
 */

class Carros:public Menu{
public:

	string nome;
	int vel;
	sf::Texture Textura;
	sf::Sprite SpriteCar;
public:


};
