#include<iostream>
#include<sstream>
#include<vector>
#include <fstream>
using namespace std;
int main(){
ifstream fileSaved("Save.txt");

	if(!fileSaved.is_open()){
		printf("ERROR");
		fflush(stdout);
	}
	string Lv1("Level1");
	string linha;
	string situation;
	string campoLido;
	string level;

	vector<string> Levels;
	vector<string> status;
	while(getline(fileSaved,linha)){
	stringstream Stream(linha);



	getline(Stream,campoLido,',');
	level = campoLido;
	getline(Stream,campoLido,',');
	situation = campoLido;
	Levels.push_back(level);
	
	status.push_back(situation);
	}

	ofstream saida("Outpo.txt");
	for(int i = 0; i < Levels.size(); i++){
		saida << Levels[i] << endl;
	}

	saida.close();
	fileSaved.close();
}