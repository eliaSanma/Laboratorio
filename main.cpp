#include <iostream>
#include <vector>
#include "chessboard.h"

int main(void)
{
	Scacchiera prova;
    prova.print();
    while(!prova.input())
    {
   	 	std::cout<<"Coordinate non valide\n";
    }
}