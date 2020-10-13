#include <iostream>
#include <conio.h>
#include "gotoxy.h"
#include "colores.h"

/* LIBRERIA COLORES 
Colores :
BLACK			0 Negro
BLUE			1 Azul
GREEN			2 Verde
CYAN			3 Cían
RED				4 Rojo
MAGENTA			5 Magenta
BROWN			6 Marrón
LIGHTGRAY		7 Gris Claro
DARKGRAY		8 Gris Oscuro
LIGHTBLUE		9 Azul Claro
LIGHTGREEN		10 Verde Claro
LIGHTCYAN		11 Cían Claro
LIGHTRED		12 Rojo Claro
LIGHTMAGENTA	13 Magenta Claro
YELLOW			14 Amarillo
WHITE			15 Blanco
*/



int main(){

using namespace std;

system("color C2");

color(1,8);
gotoxy(28,5);cout<<("X");
gotoxy(28,6);cout<<("X");
gotoxy(28,7);cout<<("X");
gotoxy(28,8);cout<<("X");
gotoxy(28,9);cout<<("X");
gotoxy(28,10);cout<<("X");
gotoxy(30,10);cout<<("X");
gotoxy(29,10);cout<<("X");


gotoxy(35,5);cout<<("M");
gotoxy(35,6);cout<<("M");
gotoxy(35,7);cout<<("M");
gotoxy(35,8);cout<<("M");
gotoxy(35,9);cout<<("M");
gotoxy(35,10);cout<<("M");
gotoxy(36,5);cout<<("M");
gotoxy(37,6);cout<<("M");
gotoxy(38,7);cout<<("M");
gotoxy(39,8);cout<<("M");
gotoxy(40,8);cout<<("M");
gotoxy(41,7);cout<<("M");
gotoxy(42,6);cout<<("M");
gotoxy(43,5);cout<<("M");
gotoxy(44,5);cout<<("M");
gotoxy(44,6);cout<<("M");
gotoxy(44,7);cout<<("M");
gotoxy(44,8);cout<<("M");
gotoxy(44,9);cout<<("M");
gotoxy(44,10);cout<<("M");

gotoxy(47,5);cout<<("G");
gotoxy(48,5);cout<<("G");
gotoxy(49,5);cout<<("G");
gotoxy(50,5);cout<<("G");
gotoxy(51,5);cout<<("G");
gotoxy(47,6);cout<<("G");
gotoxy(47,7);cout<<("G");
gotoxy(47,8);cout<<("G");
gotoxy(47,9);cout<<("G");
gotoxy(47,10);cout<<("G");
gotoxy(48,7);cout<<("G");
gotoxy(49,7);cout<<("G");
gotoxy(50,7);cout<<("G");
gotoxy(51,7);cout<<("G");
gotoxy(51,8);cout<<("G");
gotoxy(51,9);cout<<("G");
gotoxy(48,10);cout<<("G");
gotoxy(49,10);cout<<("G");
gotoxy(50,10);cout<<("G");
gotoxy(51,10);cout<<("G");

color(1,7);
gotoxy(23,14);cout<<("UNIVERSIDAD NACIONAL DEL ALTIPLANO");
gotoxy(28,16);cout<<("INGENIERIA DE SISTEMAS");
gotoxy(29,18);cout<<("MI PRIMER JUEGO");
gotoxy(33,20);cout<<("13/10/2020");


getch();


}
