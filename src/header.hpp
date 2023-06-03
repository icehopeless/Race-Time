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

	sf::Texture ArrowR;
	sf::Sprite  ArrowRS;

	sf::Texture ArrowL;
	sf::Sprite  ArrowLS;

	sf::CircleShape Volume;
	sf::Vector2i pos_mouse;
	sf::Vector2f mouse_coord;

	sf::RectangleShape StartMouse;
	sf::RectangleShape SettingMouse;

	sf::RectangleShape CampMouse3;
	sf::RectangleShape CampMouse4;

	sf::Texture SoundAumente;
	sf::Sprite SoundSpriteR;

	sf::Texture SoundAbaixa;
	sf::Sprite SoundSpriteL;
	sf::Font *font;
	sf::Text Reso;

	bool  KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool VolumeUp;
	bool VolumeDown;
	bool SelecionadoEnter;
	bool Mouse_Left;

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
	sf::RectangleShape SoundEsquerada;
	sf::RectangleShape SoundDireita;


// ||||||||||||||||||||||||||||||||||||||||||||LOJA|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	sf::RectangleShape arrowMouseR;
	sf::RectangleShape arrowMouseL;
	sf::RectangleShape SelectCar;
	sf::Texture arrowL;
	sf::Sprite arrowLS;
	int contSction = 1;
	int CarSelectP1;
	int CarSelectP2;
	bool escolhafinalizada = false;
	sf::Texture arrowR;
	sf::Sprite arrowRS;

	sf::Texture vitrine;
	sf::Sprite vitrineS;


// ||||||||||||||||||||||||||||||||||||||||||||||||||Game||||||||||||||||||||||||||||||||||||||||||||||||||||

 bool liberagamer;
protected:
	void AleterarCor();
	void loopEvents();
	void Start();
	void drawMenu();
	void eventsMenu();
	void Setconfiguration();
	void Eventsconfiguration();
	void EventsKeyboard();
	void ZeraCounters();
	void EventosMouseConfig();
	void drawConfig();
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
	sf::RectangleShape colison1;
		sf::RectangleShape carrohit;
		sf::Texture car[2];


		sf::FloatRect ColisonBounds ;
			sf::FloatRect carBounds ;
private:
	void InicializarGame();
	void DrawGame();
	void game();
	void EventsGame();

public :
	sf::Sprite spritecars;
	int texturaRecorrente,c;
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
