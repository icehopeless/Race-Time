#pragma once

#include<stdio.h>
#include<iostream>
#include<sstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include<vector>
#include <fstream>
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


	sf::Texture textureLockeds;
	vector<sf::Sprite> SpritesLockeds;

	sf::Texture arrowL;
	sf::Texture arrowR;
	sf::Sprite  arrowLS;
	sf::Sprite  arrowRS;

	sf::CircleShape Volume;
	sf::Vector2i pos_mouse;
	sf::Vector2f mouse_coord;

	sf::RectangleShape CampMouse1;
	sf::RectangleShape CampMouse2;

	sf::RectangleShape CampMouse3;
	sf::RectangleShape CampMouse4;


	sf::Sprite SoundSpriteR;
	sf::Texture SoundAumente;
	sf::Texture SoundAbaixa;
	sf::Sprite SoundSpriteL;

	sf::Font *font;
	sf::Text Reso;
	sf::Text *Contagem;
	sf::Text Lv1;
	sf::Text Lv2;
	sf::Text Lv3;
	sf::Text Lv4;
	sf::Text Lv5;
	sf::Text Lv6;
	sf::Text Lv7;
	sf::Text Lv8;
	sf::Text Lv9;
	sf::Text Lv10;

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
	bool soundActive;
	int Sound,k;
	int y = 240;
	bool keySettings;
	bool keyMenu;
	bool keyShop;
	bool keyGame;
	bool KeyLoading;
	bool keyLevels;
	bool KeyFinaleGame;
	int counterKeyboard;
	int counterVertical;
	int contadodetempo;
	int EscolhaCarro;

	bool destruirGame;
	bool destruirLoja;
	string resolutionNumber;
	sf::RectangleShape CampMouse5;
	sf::RectangleShape CampMouse6;

	int counterResu;
	int Nivelatual;
	sf::RectangleShape CampMouse7;
	sf::RectangleShape CampMouse8;



// ||||||||||||||||||||||||||||||||||||||||||||LOJA|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
	
	int CarSelectP1;
	int CarSelectP2;

	//p1
	sf::RectangleShape CampMouse9;
	sf::RectangleShape CampMouse10;
	sf::Texture ArrowR;
	sf::Sprite  ArrowRS;
	sf::Texture ArrowL;
	sf::Sprite  ArrowLS;
	sf::Texture vitrine;
	sf::Texture vitrine2;
	sf::Sprite vitrineS;

	int CarP1;

	//p2

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
	sf::Texture car;
	sf::Sprite spritecars;
	int AtualizacaoTextura,l = 0;
	sf::FloatRect ColisonBounds;
	sf::FloatRect carBounds;
	int x =3;
	int SOundGo;
	bool Contagem_Realizada = false;
	bool Init_Game = false;
	bool Init_Level = false;
	sf::SoundBuffer Contador;
	sf::Sound Go;
	bool SoundCont = false;

// ???????????????????????????	Levels ????????????????????????????????????????????????????????
	int Counter_Selectd_Levels;
	bool Bloqued;
	bool Bloqued2;
	bool Bloqued3;
	bool Bloqued4;
	bool Bloqued5;
	bool Bloqued6;
	bool Bloqued7;
	bool Bloqued8;
	bool Bloqued9;
	bool Bloqued10;

protected:



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
	void ChamarLevels();
	void loading();
public:
	Menu();
	~Menu();
	void run_menu();
};


class Game:public Menu{


private:
	 bool Saved;
	void InicializarGame();
	void DrawGame();
	void game();
	void EventsGame();
	void SaveGame();
	void Final_game();
	void Events_Final_game();
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

class Levels: public Menu{
public:
	bool startLv = false;
	void LimparTela();
	void inicializar_Levels();
	void run_Levels();
	void events_Levels();
	void Keyboard_Levels();
	void Mouse_Levels();
	void started_Game();
	void iniciar_numeros();
	void reading_Save();
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
