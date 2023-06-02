#pragma once

#include<stdio.h>
#include<iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include<vector>
#define car2price 10
#define car3price 20
#define car4price 30
#define car5price 40
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

	sf::Texture VolumeT;
	sf::Sprite VolumeS;
	sf::CircleShape Volume;
	sf::Vector2i pos_mouse;
	sf::Vector2f mouse_coord;

	sf::RectangleShape StartMouse;
	sf::RectangleShape SettingMouse;

	sf::RectangleShape CampMouse3;
	sf::RectangleShape CampMouse4;

	bool  KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool VolumeUp;
	bool VolumeDown;
	bool SelecionadoEnter;
	bool Mouse_Left;

	int Sound,k;
	int ModoGame;
	bool keySettings;
	bool keyMenu;
	bool keyShop;
	bool keyGame;
	int counterKeyboard;
	int counterVertical;

	int EscolhaCarro;

	bool destruirGame;
	bool destruirLoja;

// ||||||||||||||||||||||||||||||||||||||||||||LOJA|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	sf::RectangleShape arrowMouseR;
	sf::RectangleShape arrowMouseL;
	sf::RectangleShape SelectCar;
	sf::RectangleShape buyCar;

	sf::Texture arrowL;
	sf::Sprite arrowLS;
	int contSction = 1;
	int CarSelectP1;
	int CarSelectP2;
	bool escolhafinalizada = false;
	sf::Texture arrowR;
	sf::Sprite arrowRS;

	int money = 0;
	sf::Texture moneyicon;
	sf::Sprite moneyiconS;


	sf::Texture vitrine;
	sf::Sprite vitrineS;

	////////Carros bloqueados//////////
	
	bool carblocked = true;
	bool car1blocked = false;
	bool car2blocked = true;
	bool car3blocked = true;
	bool car4blocked = true;
	bool car5blocked = true;


	sf::Texture blocked;
	sf::Sprite blockedS;

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
public :
	void run_game();
};


class Loja:public Menu{
public:
	void Section1();
	void Section2();
	void SelectOnePlayer();
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

class Carros{
public:
	string nome;
	int vel;
	sf::Texture Textura;
	sf::Sprite SpriteCar;

};
