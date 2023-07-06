# Race Time

![background](./readme_assets/background.jpg)

Recriação do jogo Race do Atari

## Indice 
- <a href="https://github.com/icehopeless/Piratas-do-CPP/blob/main/README.md#contextualização-do-projeto-">Contextualização do Projeto</a>
- <a href="https://github.com/icehopeless/Piratas-do-CPP/blob/main/README.md#principal-tecnologia-destacada-">Principal Tecnologia Destacada</a>
- <a href="https://github.com/icehopeless/Piratas-do-CPP/blob/main/README.md#demonstração">Demonstração</a>
- <a href="https://github.com/icehopeless/Piratas-do-CPP/blob/main/README.md#como-rodar-">Como Rodar?</a>
- <a href="https://github.com/icehopeless/Piratas-do-CPP/blob/main/README.md#autores">Autores</a>

## Contextualização do Projeto 
O projeto "Race Time" consiste numa recriação do jogo Race do Atari, onde é desenvolvido por meio da linguagem C++ e a da biblioteca gráfica Simple and Fast Multimedia Library (SFML). O jogo aceita dois jogadores, onde o player 1 se movimenta no WASD, e seleciona usando o SPACE, o Player2 se movimenta nas setas e selecionar no ENTER ou RETURN.




## Principal Tecnologia Destacada 
-  [SFML lib](https://www.sfml-dev.org/index.php) 

A presente biblioteca "Simple and Fast Multimedia Library (SFML)" foi responsável por introduiz a parte gráfica no desenvolvimento do jogo, possibilitando assim, a interação visual do usuário.

## Desmonstração 
![menu](./readme_assets/1.jpg)
O menu principal do jogo contem duas opções, de configurações e de play, para ir diretamente pro jogo com as definições padrões.


![config](./readme_assets/config.jpg)
A tela de configurações permite ao usuário o controle e ajuste do som do jogo, ajuste da resolução 

![levels](./readme_assets/mode.jpg)
Os leveis são responsáveis para definir a forma como o usuário irá jogar. Há 3 pistas disponivieis para jogar, porém, o jogo há possibilidade de suportar outras 10 pistas. Além disso, a cara level completo, é desbloqueado mais uma pista.

![game](./readme_assets/game.jpg)
o Game em si é representado pela pista referente ao level, onde ganha o primeiro jogador a completar as 3 voltas antes do tempo estimado, sendo 60minutos.

![final](./readme_assets/finalscreen.jpg)
A tela final permite ao usúario voltar a tela inicial, salvar as moedas, carros e pistas desbloqueadas, e também permite ir a tela dos leveis/pistas


## Como Rodar? 
Diante do exposto, foi ultilizado a biblioteca Gráfica para a construção do jogo, e para rodar, é preciso utilizar a versão correta em função do seu compilador minGW instalado, caso não tenha instalado, obtenha o <a href="https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/7.3.0/">MinGW</a>.

1. Ao instalar o mingw, abra seu terminal e use o comando: "g++ -v" para verficar se o compilador está instalado.

2. adicione nas variaveis do sistema o PATH do compilador mingw, o caminho por padrão é: \mingw64\bin

3. O jogo foi desenvolvido no <a href="https://www.eclipse.org/">Eclipse IDE</a>, logo, a pasta raiz do jogo é um workspace de formato referido no Eclipse. Recomendamos utilizá-lo para compilar e rodar o código. Caso utilize outra IDE, certifique-se que a Biblioteca SFML esteja incluida da maneira correta, caso contrário, o código não será compilado.

4. Abra a pasta gerada após o download do projeto na sua IDE, acesse a pasta "Piratas_do_CPP" onde se encontra os arquivos .cpp e .hpp e compile o "main.cpp".

Segue abaixo como exemplo para compilar em outra IDE, tendo que compilar manualmente cada parte do código:

 - Inclua os arquivos .cpp no "main.cpp"
 - Linke a pasta do compilador e da SFML no arquivo "Makefile" disponibilizado no condigo fonte 
 - Após ter linkado todos os diretórios no seu devido local, utilize o codigo abaixo no terminal com o diretório na pasta "/src"
 
```c++
mingw32-make
```

5. Ao compilar, será gerado um executável com o nome "Race-Time.exe" na pasta Debug. Execute o para rodar o jogo ou outro executável criado pelo terminal


## Autores
Desenvolvido visando a didática, responsável pela instituição CEFET-MG Campus Contagem - 06/07/2023

### Alunos Presentes: 

Gabriel Agostinho da Silva
gabrielagostinhodasilva@hotmail.com


Isaque de Sousa Almeida
senhaisaque@gmail.com


Isabelle Tavares Mol Araujo
isabelle.tavares.mol13@gmail.com
