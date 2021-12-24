#include <iostream>
#include <string>
#include "chessboard.h"


using namespace std;

//---COSTRUTTORE Scacchiera---------------------
Scacchiera::Scacchiera()
{
	for(int j=0;j<8;j++)
	{
		scacchiera[1][j] = 'P';
		scacchiera[6][j] = 'p';		
	}
	
	for(int i=2;i<6;i++)
	{
		for(int j=0;j<8;j++)
		{
			scacchiera[i][j] = ' ';
		}
	}
	
	scacchiera[0][0] = 'T';
	scacchiera[0][1] = 'C';
	scacchiera[0][2] = 'A';
	scacchiera[0][3] = 'D';
	scacchiera[0][4] = 'R';
	scacchiera[0][5] = 'A';
	scacchiera[0][6] = 'C';
	scacchiera[0][7] = 'T';
		
	scacchiera[7][0] = 't';
	scacchiera[7][1] = 'c';
	scacchiera[7][2] = 'a';
	scacchiera[7][3] = 'd';
	scacchiera[7][4] = 'r';
	scacchiera[7][5] = 'a';
	scacchiera[7][6] = 'c';
	scacchiera[7][7] = 't';
}

void Scacchiera::print()
{
	for(int i=0;i<8;i++)
	{
		cout <<8-i <<"  ";
		for(int j=0;j<8;j++)
		{
			cout <<scacchiera[i][j]<<" ";
		}
		cout <<"\n";
	}
	cout <<"\n   A B C D E F G H\n";
	
}

bool Scacchiera::input()
{
	string in_;
	string fin_;

	cin >> in_;
	cin >> fin_;

	
	
	

	in.x = in_[0];
	in.y = in_[1];
	
	fin.x = fin_[0];
	fin.y = fin_[1];
	
	if ((in.y>=65)||(in.y<=72))//se è una lettera minuscola
	{
		in.y += 32;//rendi lettera maiuscola
	}	
	if ((fin.y>=65)||(fin.y<=72))
	{
		fin.y += 32;
	}	
	in.x -=49;
	in.y -=129;
	fin.x -=49;
	fin.y -=129;
	
	if ((in.x<0)||(in.x>7)||(fin.x<0)||(fin.x>7))//se non è stato inserito in numero da 1 a 8
	{
		cout<<"\nCOORDINATE NON VALIDE\n";
		return 0;
	}
	if ((in.y<0)||(in.y>7)||(fin.y<0)||(fin.y>7))//se non è stato inserito una lettera da A a H
	{
		cout<<"\nCOORDINATE NON VALIDE\n";
		return 0;
	}
		return 1;
}
