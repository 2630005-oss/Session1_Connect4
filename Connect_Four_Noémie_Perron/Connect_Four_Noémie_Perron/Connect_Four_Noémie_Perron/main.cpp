#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;
void PrintGrid(const int RowLine, const int ColumnLine, char grid[6][7]);
bool ChosenCase(int& row, int column, char grid[6][7], char symbol);
void VictoryCheck(int RowCheck, int ColumnCheck, char symbol1, char symbol2);
void Game();

void main()
{
	Game();
}

void Game()
{
	bool Player1IsPlaying = true;
	bool Player2IsPlaying = false;

	const int iSize = 6;
	const int jSize = 7;
	int ChosenColumn = 0;

	char ConnectFourGrid[iSize][jSize] = { {' ', ' ', ' ', ' ', ' ', ' ', ' '},
										   {' ', ' ', ' ', ' ', ' ', ' ', ' '},
										   {' ', ' ', ' ', ' ', ' ', ' ', ' '},
										   {' ', ' ', ' ', ' ', ' ', ' ', ' '},
										   {' ', ' ', ' ', ' ', ' ', ' ', ' '},
										   {' ', ' ', ' ', ' ', ' ', ' ', ' '} };

	int ColumnRow[7] = { 5, 5, 5, 5, 5, 5, 5 };
	PrintGrid(iSize, jSize, ConnectFourGrid);
	char Player1Symbol = { 'X' };
	char Player2Symbol = { 'O' };

	while (Player1IsPlaying)
	{
		int ChosenColumn = 0;
		cout << "Choose a column. (0, 1, 2, 3, 4, 5, 6). :";
		cin >> ChosenColumn;

		ChosenCase(ColumnRow[ChosenColumn], ChosenColumn, ConnectFourGrid, Player1Symbol);
		PrintGrid(iSize, jSize, ConnectFourGrid);
		VictoryCheck(ColumnRow[ChosenColumn], ChosenColumn, Player1Symbol, Player2Symbol);





	}
}

void PrintGrid(const int RowLine, const int ColumnLine, char grid[6][7])
{
	system("cls");
	
	

	for (int i = 0; i < RowLine; i++)
	{
		
		cout << endl << "-----------------------------" << endl;
		cout << "| ";
		for (int j = 0; j < ColumnLine; j++)
		{
			
			cout << grid[i][j] << " | ";
			
		}
		
		
	}
	cout << endl << "-----------------------------" << endl;
}
bool ChosenCase(int& row, int column, char grid[6][7], char symbol)
{
	
	
	
	
	// if (column == 0 || column == 1 || 2 || 3 || 4 || 5 || 6)
	
		
		
		
		
		
			grid[row][column] = symbol;
			row--;
			
		
	
	return 0;
}
void VictoryCheck(int RowCheck, int ColumnCheck, char symbol1, char symbol2)
{
	for (int i = RowCheck + 1; i < 2; i++)
	{
		
		if (i == 2)
		{
			
		}
		
		
	}
	cout << "Player 1 has won! :D";
}

/*for (int i = 5; i >= RowCheck; i--)
{
	(i, ColumnCheck) == ' ';

	for (int j = 6; j >= ColumnCheck; j--)
	{
		(j, RowCheck) == ' ';
	}
}*/