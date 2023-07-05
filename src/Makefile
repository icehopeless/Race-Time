all: compile link run

compile:
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c MenuRace.cpp
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c GameRace.cpp
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c Loja.cpp
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c Levels.cpp
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c FinalGame.cpp
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c Player.cpp
	g++ -IC:\Pack-MinGW-and-SFML\SFML-2.5.1\include -c main.cpp

link:
	g++ main.o -o main -LC:\Pack-MinGW-and-SFML\SFML-2.5.1\lib -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
	
	
run:
	./main.exe