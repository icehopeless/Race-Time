#pragma once

#include<stdio.h>
#include<iostream>
#include<sstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include<vector>
#include <fstream>
#include <random>
using namespace std;
class Carros{
public:
	sf::Texture car;
	bool KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool KeyA;
	bool KeyD;
	bool KeyS;
	int CarP1;
	int CarP2;
	bool KeyW;
	int Player;
	int carSelect;
	sf::Sprite zero;
	float vel = 2;
	int Track_referent;
public:
	void Moviment_cars();
	void Moviment_car1();
	void Moviment_car2();
	void draw(sf::RenderWindow *w);
	void SetCar();
	void SetCar1();
	void SetCar2();
	void EventsCar();
	void velocidadeP1();
	void velocidadeP2();
	void Reception(int x);

	void Init_Carros(int Player, int carSelect){
			KeyDown = false;
			KeyUP = false;
			KeyLeft = false;
			KeyRight = false;
			KeyA = false;
			KeyD = false;
			KeyS = false;
			KeyW = false;
			this->Player =Player;
			this->carSelect = carSelect;
			if(this->Player == 1){
				CarP1 = this->carSelect;
			}
			if(this->Player == 2){
				CarP2 = this->carSelect;
				cout << CarP2;
				fflush(stdout);
			}
	 }

};
class Loja{
private:

	int CarSelectP1;
	int CarSelectP2;
	int CounterFrame;
	int CarP1;
	int CarP2;
	int offLoja;
	bool escolhafinalizada1 = false;
	bool escolhafinalizada2 = false;
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
	int time = 0;
	int cont_speed = 0;
	bool test_Cont = false;
	bool Check_Lap;
	float aniY = 0;
	bool CHeck_any = false;
	int Voltas;
	bool Check_Lap2;
	int Voltas2;
	int CounterFrame = 0;
	int cont_sprites = 0;
	int Update_Texture =0;
	sf::Texture money[6];
	vector<sf::Sprite> moedas;
	sf::Sprite moeda;
	sf::Font font;
	sf::Text Contagem;
	sf::Texture fundo;
	sf::Texture carTexture;
	sf::Texture nitroTexture;
	sf::Sprite nitroSprite;
	sf::Sprite nitroSprite2;
	sf::Sprite nitroSprite3;
	sf::Sprite nitroSprite4;
	sf::RectangleShape colison1;
	sf::RectangleShape colison2;
	sf::RectangleShape colison3;
	sf::RectangleShape colison4;
	sf::RectangleShape colison5;
	sf::RectangleShape colison6;
	sf::RectangleShape colison7;
	sf::RectangleShape colison8;
	sf::RectangleShape colison8_1;
	sf::RectangleShape colison8_2;
	sf::RectangleShape colison8_3;
	sf::RectangleShape colison8_4;
	sf::RectangleShape colison9;
	sf::RectangleShape colison10;
	sf::RectangleShape colison11;
	sf::RectangleShape colison12;
	sf::RectangleShape check;
	sf::RectangleShape Line;
	sf::RectangleShape nitroshape;
	sf::RectangleShape meio;
	sf::FloatRect meiobounds;
	sf::FloatRect ColisonBounds;
	sf::FloatRect ColisonBounds2;
	sf::FloatRect ColisonBounds3;
	sf::FloatRect ColisonBounds4;
	sf::FloatRect ColisonBounds5;
	sf::FloatRect ColisonBounds6;
	sf::FloatRect ColisonBounds7;
	sf::FloatRect ColisonBounds8;
	sf::FloatRect ColisonBounds8_1;
	sf::FloatRect ColisonBounds8_2;
	sf::FloatRect ColisonBounds8_3;
	sf::FloatRect ColisonBounds8_4;
	sf::FloatRect ColisonBounds9;
	sf::FloatRect ColisonBounds10;
	sf::FloatRect ColisonBounds11;
	sf::FloatRect CheckPoint;
	sf::FloatRect LineVicttory;
	sf::RectangleShape cars2;
	sf::RectangleShape cars1;
	sf::FloatRect carBounds;
	sf::FloatRect carBounds1;
	sf::FloatRect carBounds2;
	sf::FloatRect nitroBounds;
	sf::FloatRect nitroBounds2;
	sf::FloatRect nitroBounds3;
	sf::FloatRect nitroBounds4;

	int SOundGo;
	bool Contagem_Realizada = false;
	bool draw_cars;
	bool draw_cars2;
	bool SoundCont = false;
	bool Init_Game;
	bool KeyFinaleGame;
	int CarP1;
	int CarP2;
	int Result;
	sf::SoundBuffer Contador;
	sf::Sound Go;
	int l,x = 3;
	int Volume;
	int Nivelatual;

public:
	void moveNitro();
	void operationsNitro(Carros * car);
	void Colisions(Carros * car1);
	void ColisionsInCars(Carros * car1,Carros * car2);
	void InicializarGame();
	void DrawGame(sf::RenderWindow *w);
	void EventsGame();
	void SaveGame();
	void PistaRefrent();
	void run_game();
	int returnGameFinal();
	void CarsSelceteds(int CarP1,int CarP2);
	void Setpista(int pista);
	void FinalPista(int * pista);
	void stopedMusic(sf::Music * music);
	void DesenharFundoPista(sf::Sprite * Fundo);
	void loopEventGame(Carros * loopcar);
	void Start_Cars(Carros * carro,Carros * carro2);
	void Checks1(Carros * car1);
	void Checks2(Carros * car2);
	void Return_Plac_result(int *p);
	void nitroo(Carros *vel, sf::RenderWindow *w);



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
	Loja  loja;
	Carros carro;
	Carros carro2;
	Levels level;
	Game newgame;
	FinalGame final;
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
	bool KeyFinaleGame;
	bool  KeyDown;
	bool KeyUP;
	bool KeyLeft;
	bool KeyRight;
	bool VolumeUp;
	bool VolumeDown;
	bool SelecionadoEnter;
	bool Mouse_Left;
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
	string resolutionNumber;
	sf::RectangleShape CampMouse5;
	sf::RectangleShape CampMouse6;
	int counterResu;
	int Nivelatual;
	sf::RectangleShape CampMouse7;
	sf::RectangleShape CampMouse8;
	sf::Texture ArrowR;
	sf::Sprite  ArrowRS;
	sf::Texture ArrowL;
	sf::Sprite  ArrowLS;
	int CarP1;
	int CarP2;
	int SOundGo;
	sf::Sound Go;

private:
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














