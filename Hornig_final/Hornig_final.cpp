// name: Brent Hornig
// date 4/28/2017
//assignment: “ROCK Paper Scissors”
// description: Creates pay stubs

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>

using namespace std;
ofstream ofs("hornig_Final.txt", ios::out);
string msg = "eofmessage ";
string cno = "cis 230.600 ";
string name = "Brent Hornig ";
string dat = "4/28/17 ";
string lab = "Final ";
string ast = "*";
string summ = "Rock,Paper,Scissors";
char lines = '_';
string poles = "|";
string title = " ----ROCK,PAPER,SCISSORS----";
const int one = 1;
const int two = 2;
string entps = "Enter Number of Players (1 or 2)" ;
int numplay;
string entpl1 = "Enter Player 1 Name";
string entpl2 = "Enter Player 2 Name";
string p1name;
string p2name;
string erounds = "Enter Number of rounds";
int rounds;
string pagain = "Play another game Y/N";
string again;
string invalid = "Invalid number Enter 1 or 2";
string yes = "y";
string YES = "Y";

const int zero = 0;
const int three = 3;
 unsigned  seed;
 int counter;
 string roundnum = "----Round";
 string dash4 = "----";
 int p1num;
 int p2num;
 string p1val;
 string p2val;
 int p1loss;
 int p2loss;
 double p2win;
 double p1win;
 int ten = 10;
 int eight= 8;
 string rock = "rock";
 string paper = "paper";
 string scissors = "scissors";
 string winss="wins this round**** (press enter to continue)";
 string dash = "-";
 int gamenum = 1;
 string gametitle = "----Game";
 string stars = "****";
 string temp;
 int six = 6;
 char space =  ' ';
 int center = 36;
 int p1winp;
int p2winp;
 double hundred = 100;
 string gamec = "Game";
 int top = 80;
 string namet = "Name";
 string wint = "Wins";
 string lossest = "Losses";
 string roundst = "Rounds";
 string pert = "% of wins";
 string per = "%";
 int nine = 9;
 int five = 5;
 int forten = 14; 
 int fivten = 15;
 int ninten = 19;
 int twelve = 12;
 int seven = 7;
 string cheat = "Vi_nce";
 string vince = "Vince";
 string numround = "----round";
 string tab = "\t";
 string endgame = "Game Winner ";
 //*****************************************************
 //* Prints out a box to file. box neatly displays     *
 //* players names how many wins and losses for each   *
 //* how many rounds were played and the win percantage*
 //* uses set w and ofs to print out put               *
 //*****************************************************
 
 void print()
 {

	 ofs << setfill(space) << left << setw(center) << space << left << setw(six) << gamec << gamenum << endl;
	 for (counter = 0;counter < top;counter++)
	 {
		 ofs << lines;
	 }
	 ofs << endl;
	 ofs << poles << right << setw(nine) << namet << right << setw(six) << poles
		 << right << setw(nine) << wint << right << setw(six) << poles << right
		 << setw(ten) << lossest << right << setw(five) << poles
		 << right << setw(ten) << roundst << right << setw(five) << poles
		 << right << setw(forten) << pert << right << setw(five) << poles << endl;

	 ofs << setfill(lines) << left << setw(fivten) << poles << left << setw(fivten) << poles << left << setw(fivten) << poles
		 << left << setw(fivten) << poles << left << setw(ninten) << poles << poles << endl;

	 ofs << setfill(space) << left << setw(three) << poles << left << setw(twelve) << p1name
		 << left << setw(eight) << poles << left << setw(seven) << p1win
		 << left << setw(eight) << poles << left << setw(seven) << p1loss
		 << left << setw(eight) << poles << left << setw(seven) << rounds
		 << left << setw(eight) << poles << left << per << right
		 << setw(three) << p1winp << right << setw(eight) << poles << endl;

	 ofs << setfill(lines) << left << setw(fivten) << poles << left << setw(fivten) << poles << left << setw(fivten) << poles
		 << left << setw(fivten) << poles << left << setw(ninten) << poles << poles << endl;

	 ofs << setfill(space) << left << setw(three) << poles << left << setw(twelve) << p2name
		 << left << setw(eight) << poles << left << setw(seven) << p2win
		 << left << setw(eight) << poles << left << setw(seven) << p2loss
		 << left << setw(eight) << poles << left << setw(seven) << rounds
		 << left << setw(eight) << poles << left << per << right
		 << setw(three) << p2winp << right << setw(eight) << poles << endl;

	 ofs << setfill(lines) << left << setw(fivten) << poles << left << setw(fivten) << poles << left << setw(fivten) << poles
		 << left << setw(fivten) << poles << left << setw(ninten) << poles << poles << endl;
	 ofs << endl;

 }
 //***************************************************
 //* if Vi_nce is entered that player will always win*
 //* will print out Vince instead of Vi_nce does not *
 //* which player is vince                           *
 //***************************************************
 
 void  cheatfunc()
 {
	 p1win = 0;
	 p2win = 0;
	 p1loss = 0;
	 p2loss = 0;
	 seed = time(zero);
	 srand(seed);
	 if (p1name == cheat)
	 {
		 p1name = vince;
		 for (counter = 1;counter <= rounds;counter++)
		 {
			 temp = cin.get();
			 cout << tab << tab << left << setw(10) << roundnum << counter << dash4 << endl;
			 p1num = rand() % three + 1;
			 switch (p1num)
			 {
			 case one:
				 p1val = rock;
				 p2val = scissors;
				 cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
				 cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
				 cout << tab << tab << stars << left << setw(ten) << p1name << winss << endl;
				 break;
			 case two:
				 p1val = paper;
				 p2val = rock;
				 cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
				 cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
				 cout << tab << tab << stars << left << setw(ten) << p1name << winss << endl;
				 break;
			 case three:
				 p1val = scissors;
				 p2val = paper;
				 cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
				 cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
				 cout << tab << tab << stars << left << setw(ten) << p1name << winss << endl;

				 break;
					}
			 }
		 p2loss = rounds;
		 p1win = rounds;
		 cout << tab << tab << endgame << p1name << endl;

	 }
	 else
	 {
		 p2name = vince;
		 for (counter = 1;counter <= rounds;counter++)
		 {
			 temp = cin.get();
			 cout << tab << tab << left << setw(10) << roundnum << counter << dash4 << endl;
			 p1num = rand() % three + 1;
			 switch (p1num)
			 {
			 case one:
				 p2val = rock;
				 p1val = scissors;
				 cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
				 cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
				 cout << tab << tab << stars << left << setw(ten) << p2name << winss << endl;
				 break;
			 case two:
				 p2val = paper;
				 p1val = rock;
				 cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
				 cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
				 cout << tab << tab << stars << left << setw(ten) << p2name << winss << endl;
				 break;
			 case three:
				 p2val = scissors;
				 p1val = paper;
				 cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
				 cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
				 cout << tab << tab << stars << left << setw(ten) << p2name << winss << endl;

				 break;
			 }
		 }
		 p1loss = rounds;
		 p2win = rounds;
		 cout << tab << tab << endgame << p2name << endl;

	 }
	 temp = cin.get();
	 p1winp = (p1win / rounds)*hundred;
	 p2winp = (p2win / rounds)*hundred;
	 print();
}
 //************************************************
 //* generates random number for each player then *
 //* uses a switch to detrmin if it is rock paper *
 //* or scissors. then uses another switch and ifs*
 //* to determine winner                          *
 //************************************************


void game()
{
	p1win = 0;
	p2win = 0;
	p1loss = 0;
	p2loss = 0;

	seed = time(zero);
	srand(seed);

	for (counter = 1;counter <= rounds;counter++)
	{
		temp = cin.get();
		cout << tab << tab <<left <<setw(10)<< roundnum << counter << dash4 << endl;
		
		p1num = rand() % three + 1;
		p2num = rand() % three + 1;
		while (p1num == p2num)
		{
			
			p1num = rand() % three + 1;
			p2num = rand() % three + 1;

		}
		switch (p1num)
		{
		case one:
			p1val = rock;
			cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val <<endl;
			break;
		case two:
			p1val = paper;
			cout << tab << tab << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
			break;
		case three:
			p1val = scissors;
			cout << "\t" << "\t" << left << setw(ten) << p1name << left << setw(two) << dash << p1val << endl;
			break;

		}
		switch (p2num)
		{
		case one:
			p2val = rock;
			cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
			break;
		case two:
			p2val = paper;
			cout << tab << tab << left << setw(ten) << p2name << left << setw(two) << dash << p2val << endl;
			break;
		case three:
			p2val = scissors;
			cout << tab << tab << left << setw(ten) << p2name << left << setw(two) <<dash << p2val << endl;
			break;

		}
		switch (p1num)
		{
		case one:
			if (p2num == two)
			{
				p2win++;
				p1loss++;
				cout << tab << tab << stars << left << setw(ten) << p2name << winss << endl;

				break;
			}
			p1win++;
			p2loss++;
			cout << tab << tab << stars << left << setw(ten) << p1name << winss << endl;

			break;
		case two:
			if (p2num == one)
			{
				p1win++;
				p2loss++;
				cout << tab << tab << stars << left << setw(ten) << p1name << winss << endl;

				break;
			}
			p2win++;
			p1loss++;
			cout << tab << tab << stars << left << setw(ten) << p2name << winss << endl;

			break;
		case three:
			if (p2num == two)
			{
				p1win++;
				p2loss++;
				cout << tab << tab << stars << left << setw(ten) << p1name << winss << endl;

				break;
			}
			p2win++;
			p1loss++;
			cout << tab << tab << stars << left << setw(ten) << p2name << winss << endl;

			break;
		
		}
		
		

	}
	if (p1win > p2win)
	{
		cout << tab << tab << endgame << p1name << endl;
	}
	else
		cout << tab << tab << endgame << p2name << endl;
	cout << endl;

	temp = cin.get();
	p1winp = (p1win/rounds)*hundred;
	p2winp = (p2win/rounds)*hundred;
	print();
}
//****************************************************
//* creates a menu for the program takes in how many *
//*players and rounds and player names. use switch to*
//*to determine who many names to take in. uses loop *
//*to createe multiple games.                        *
//****************************************************

void menu()
{
	cout << tab << tab << title << endl;

	do
	{
		cout << tab << tab << left << setw(10) << gametitle << gamenum << dash4 << endl;
		cout << endl << tab << tab << entps << endl << tab << tab;
		cin >> numplay;
		while (numplay != one&& numplay != two)
		{
			cout <<endl<< tab << tab << invalid << endl << tab << tab;
			cin >> numplay;
		}
		switch (numplay)
		{
		case one:
			cout <<endl<< tab << tab << entpl1 << endl << tab << tab;
			cin >> p1name;
			p2name  = "Computer";
			break;
		case two:
			cout<< endl << tab << tab << entpl1 << endl << tab << tab;
			cin >> p1name;
			cout<< endl << tab << tab << entpl2 << endl << tab << tab;
			cin >> p2name;
			break;



		}
		cout<< endl << tab << tab << erounds << endl << tab << tab;
		cin >> rounds;
		if (p1name == cheat || p2name == cheat)
		{
			cheatfunc();
		}
		else
		{
			game();
		}
		cout<<endl << tab << tab << pagain << endl << tab << tab;
		cin >> again;
		gamenum++;
	} while (again == yes|| again==YES);



	}




//************************
//*top of file variables *
//* name cno dat lab     *
//*Prints message at top *
//************************
void hdr()
{
	ofs << name << cno << dat << lab << endl;
	ofs << endl;
}

//***************************
//*bottom of file variables    *
//* sum                     *
//*Prints message at bottom *
//***************************
void ftr()
{


	ofs << summ << endl;
	ofs << endl;

}
//******************************************
//*reach end of fille message variables    *
//* msg name cno dat lab                    *
//*Prints message at bottom tells end of fill
//******************************************
void eof()
{


	ofs << msg << name << cno << dat << lab << endl;

	ofs << endl;
}
int main()
{
	hdr();
	menu();
	ftr();
	eof();
	ofs.close();


    return 0;
}

