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
class Carros{
public:

	 sf::Sprite zero;

public:

	 void draw(sf::RenderWindow *w);

};
class Loja{
private:

	int CarSelectP1;
	int CarSelectP2;
	int CounterFrame;
	int CarP1;
	int CarP2;
	int offLoja;
	int contSction = 1;
	bool escolhafinalizada1 = false;
	bool escolhafinalizada2 = false;
	bool  KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool SelecionadoEnter;
	bool Space;
	bool KeyA;
	bool KeyD;
	int Update_Texture;
	int Price_car;
	int Price_car_2;
	int Acount_1;
	int Acount_2;
	vector<int>carros;
	vector<string>Status;
	vector<int>carros2;
	vector<string>Status2;
	sf::RectangleShape CampMouse9;
	sf::RectangleShape CampMouse10;
	sf::Texture ArrowR;
	sf::Sprite  ArrowRS;
	sf::Texture ArrowL;
	sf::Sprite  ArrowLS;
	sf::Texture vitrine;
	sf::Texture vitrine2;
	sf::Sprite vitrineS;
	sf::Sprite ArrowRS2;
	sf::Sprite ArrowLS2;
	sf::Sprite vitrineS2;
	sf::Texture fundo;
	sf::Sprite coins;
	sf::Sprite coins2;
	sf::Font font;
	sf::Text MoneysAcount_1;
	sf::Text MoneysAcount_2;
	sf::Texture money[6];
	sf::Sprite Blocked;

	sf::Sprite Blocked_2;
	sf::Texture blocked;
	bool init_Loja = false;

	bool Blocked1;
	bool Blocked2;
	bool Blocked3;
	bool Blocked4;
	bool Blocked5;

	bool Blocked1_2;
	bool Blocked2_2;
	bool Blocked3_2;
	bool Blocked4_2;
	bool Blocked5_2;

public:
	void drawLoja(sf::RenderWindow *w);
	void EventesKeyBoard();
	void Section1();
	void Section2();
	void SelectTwoPlayer();
	void InicializarLoja();
	void loja();
	void DesenharFundoLoja(sf::Sprite * Fundo);
	void EventsLoja();
	void run_loja();
	void OffLoja();
	int returnKeyLoja();
	void CarsSelecteds(int *Car1,int *Car2);
	void ReadSaving();
	void SaveCars();
	void Visibile();
	void Preco_Carros();

};

class Levels{
private:
	int Counter_Selectd_Levels;
	sf::Texture fundo;
	int counterKeyboard;
	int counterVertical;
	sf::RectangleShape CampMouse1;
	sf::RectangleShape CampMouse2;
	sf::RectangleShape CampMouse3;
	sf::RectangleShape CampMouse4;
	sf::RectangleShape CampMouse5;
	sf::RectangleShape CampMouse6;
	sf::RectangleShape CampMouse7;
	sf::RectangleShape CampMouse8;
	sf::RectangleShape CampMouse9;
	sf::RectangleShape CampMouse10;
	sf::Font font;
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
	sf::Texture textureLockeds;
	vector<sf::Sprite> SpritesLockeds;
	bool keyGame;
	bool keyLevels;
	int counterResu;
	int Nivelatual;
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
	bool startLv = false;
	bool KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool SelecionadoEnter;
	bool Mouse_Left;
public:
	void Music(sf::Music * music);
	int returnKeyLevels();
	void LimparTela();
	void inicializar_Levels();
	void run_Levels();
	void events_Levels();
	void Keyboard_Levels();
	void Mouse_Levels();
	void started_Game();
	void iniciar_numeros();
	void reading_Save();
	void loop_events_Levels();
	void TrackSelected(int*pista);
	void EventesLevels(sf::Vector2f mouse_coord);
	void DesenharFundoLevels(sf::Sprite * Fundo);
	void drawLeveles(sf::RenderWindow *w);
};

class Game{
private:
	bool test_Cont = false;
	bool Check_Lap;
	int Voltas;
	bool Check_Lap2;
	int Voltas2;
	sf::Font font;
	sf::Text Contagem;
	sf::Texture fundo;
	sf::Texture carTexture;
	sf::RectangleShape colison1;
	sf::RectangleShape colison2;
	sf::RectangleShape colison3;
	sf::RectangleShape colison4;
	sf::RectangleShape colison5;
	sf::RectangleShape colison6;
	sf::RectangleShape colison7;
	sf::RectangleShape colison8;
	sf::RectangleShape check;
	sf::RectangleShape Line;
	sf::Texture car;
	sf::Texture car2;
	sf::FloatRect ColisonBounds;
	sf::FloatRect ColisonBounds2;
	sf::FloatRect ColisonBounds3;
	sf::FloatRect ColisonBounds4;
	sf::FloatRect ColisonBounds5;
	sf::FloatRect ColisonBounds6;
	sf::FloatRect ColisonBounds7;
	sf::FloatRect ColisonBounds8;
	sf::FloatRect CheckPoint;
	sf::FloatRect LineVicttory;
	sf::RectangleShape cars2;
	sf::RectangleShape cars1;
	sf::FloatRect carBounds;
	sf::FloatRect carBounds1;
	sf::FloatRect carBounds2;
	int SOundGo;
	bool Contagem_Realizada = false;
	bool draw_cars;
	bool draw_cars2;
	bool SoundCont = false;
	bool Init_Game;
	bool KeyFinaleGame;
	bool KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool KeyA;
	bool KeyD;
	bool KeyS;
	bool KeyW;
	int CarP1;
	int CarP2;
	int Result;
	sf::SoundBuffer Contador;
	sf::Sound Go;
	int l,x = 3;
	int Volume;
	int Nivelatual;

public:
	void Colisions(Carros * car1);
	void ColisionsInCars(Carros * car1,Carros * car2);
	void InicializarGame();
	void DrawGame(sf::RenderWindow *w);
	void EventsGame();
	void SaveGame();
	void Final_game();
	void Events_Final_game();
	void PistaRefrent();
	void run_game();
	int returnGameFinal();
	void CarsSelceteds(int CarP1,int CarP2);
	void SetCar(Carros * carro);
	void SetCar2(Carros * carro);
	void Setpista(int pista);
	void FinalPista(int * pista);
	void stopedMusic(sf::Music * music);
	void DesenharFundoPista(sf::Sprite * Fundo);
	void loopEventGame();
	void Moviment_car(Carros * carro);
	void Moviment_car2(Carros * carro2);
	void Corretction_bug(Carros * carro,Carros * carro2);
	void Checks1(Carros * car1);
	void Checks2(Carros * car2);
	void Return_Plac_result(int *p);

/////////////////////////////////////////////////////////////////////////


};
class FinalGame{
private:
	sf::Texture fundo;
	sf::RectangleShape CampMouse1;
	sf::RectangleShape CampMouse2;
	sf::RectangleShape CampMouse3;
	int Nivelatual;
	bool KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool SelecionadoEnter;
	bool Mouse_Left;
	bool keyMenu;
	bool keyLevels;
	int Win;
	bool SoundCont = false;
	bool Init_Final = false;
	int counterKeyboard;
	int counterVertical;
	bool KeySound = false;
	sf::Texture startButton;
	sf::Sprite startButtonS;
	sf::Texture settingButton;
	sf::Sprite settingButtonS;
	sf::Texture texture3;
	sf::Sprite texture3S;
	sf::Texture Text1;
	sf::Texture Text2;
	sf::Sprite Player_1;
	sf::Sprite Player_2;
	sf::Sprite NumeberTwo;
	sf::Sprite NumeberOne;
	sf::Texture win;
	sf::Texture Lose;
public:
	void LoopFinal();
	void Recept(int Nivel);
	void ReceptWin(int Win);
	void DrawFinal(sf::Sprite * Fundo);
	void SaveGame();
	void Final_game();
	void Events_Final_game(sf::Vector2f mouse_coord);
	void Music(sf::Music * music);
	void ReturnFinal(int * key);
	void DesenharFinal(sf::RenderWindow * w);
};
class Menu {

private:
	bool key = true;
	Loja  loja;
	Carros carro;
	Carros carro2;
	Levels level;
	Game Newgame;
	FinalGame Final;
	sf::RenderWindow window;
	bool KeyFinaleGame;
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
	int Win;
	int y = 240;
	bool keySettings;
	bool keyMenu;
	bool keyShop;
	bool keyGame;
	bool KeyLoading;
	bool keyLevels;
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


// ||||||||||||||||||||||||||||||||||||||||||||||||||Game||||||||||||||||||||||||||||||||||||||||||||||||||||
	sf::RectangleShape colison1;
	sf::RectangleShape carrohit;
	sf::Texture car;
	sf::Sprite spritecars;
	sf::FloatRect ColisonBounds;
	sf::FloatRect carBounds;
	int SOundGo;
	bool Contagem_Realizada = false;
	sf::SoundBuffer Contador;
	sf::Sound Go;
	bool SoundCont = false;
	int l,x = 3;
	bool Init_Game;

protected:



// ||||||||||||||||||||||||||||||||||||||||||||||||||Game||||||||||||||||||||||||||||||||||||||||||||||||||||

private:



private:
	void InicializarGame();
	void DrawGame();
	void game();
	void EventsGame();
	void SaveGame();
	void Final_game();
	void Events_Final_game();
	void PistaRefrent();
	void MovimentCar();
	void run_game();

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
	void ChamarFinal();
	void loading();
	void draw();
public:
	Menu();
	~Menu();
	void run_menu();
};














