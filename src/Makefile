all: compile link run

compile:
	g++ -IC:\SFML-2.5.1\include -c MenuRace.cpp
	g++ -IC:\SFML-2.5.1\include -c GameRace.cpp
	g++ -IC:\SFML-2.5.1\include -c Loja.cpp
	g++ -IC:\SFML-2.5.1\include -c Levels.cpp
	g++ -IC:\SFML-2.5.1\include -c FinalGame.cpp
	g++ -IC:\SFML-2.5.1\include -c main.cpp

link:
	g++ main.o -o main -LC:\SFML-2.5.1\lib -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
	
	
run:
	./main.exe