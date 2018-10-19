// hw6.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
//---------------------------------------------------
// Purpose:     Implementation of the Connect4 class
// Author:      John Gauch
//---------------------------------------------------

#include "connect4.h"
#include <cstdlib>

//---------------------------------------------------
// Constructor function
//---------------------------------------------------
Connect4::Connect4()
{
	ClearBoard();
}

//---------------------------------------------------
// Destructor function
//---------------------------------------------------
Connect4::~Connect4()
{
	// Intentionally empty
}

//---------------------------------------------------
// Clear the Connect4 board
//---------------------------------------------------
void Connect4::ClearBoard()
{
	// Initialize Connect4 board
	for (int c = 0; c < COLS; c++)
		for (int r = 0; r < ROWS; r++)
			board[r][c] = ' ';

	// Initialize column counters
	for (int c = 0; c < COLS; c++)
		count[c] = 0;
}

//---------------------------------------------------
// Add player's piece to specified column in board
//---------------------------------------------------
bool Connect4::MakeMove(int col, char player)
{
	// Error checking
	if ((col < 0) || (col >= COLS) || (count[col] >= ROWS))
		return false;

	// Make move
	int row = count[col];
	board[row][col] = player;
	count[col]++;
	return true;
}

//---------------------------------------------------
// Check to see if player has won the game
//---------------------------------------------------
bool Connect4::CheckWin(char player)
{
	// Loop over all starting positions
	for (int c = 0; c < COLS; c++)
		for (int r = 0; r < ROWS; r++)
			if (board[r][c] == player)
			{
				// Check row
				int count = 0;
				for (int d = 0; d < WIN; d++)
					if ((r + d < ROWS) &&
						(board[r + d][c] == player)) count++;
				if (count == WIN) return true;

				// Check column
				count = 0;
				for (int d = 0; d < WIN; d++)
					if ((c + d < COLS) &&
						(board[r][c + d] == player)) count++;
				if (count == WIN) return true;

				// Check first diagonal
				count = 0;
				for (int d = 0; d < WIN; d++)
					if ((r + d < ROWS) && (c + d < COLS) &&
						(board[r + d][c + d] == player)) count++;
				if (count == WIN) return true;

				// Check second diagonal
				count = 0;
				for (int d = 0; d < WIN; d++)
					if ((r - d >= 0) && (c + d < COLS) &&
						(board[r - d][c + d] == player)) count++;
				if (count == WIN) return true;
			}
	return false;
}

//---------------------------------------------------
// Print the Connect4 board
//---------------------------------------------------
void Connect4::PrintBoard()
{
	// Print the Connect4 board
	for (int r = ROWS - 1; r >= 0; r--)
	{
		// Draw dashed line
		cout << "+";
		for (int c = 0; c < COLS; c++)
			cout << "---+";
		cout << "\n";

		// Draw board contents
		cout << "| ";
		for (int c = 0; c < COLS; c++)
			cout << board[r][c] << " | ";
		cout << "\n";
	}

	// Draw dashed line
	cout << "+";
	for (int c = 0; c < COLS; c++)
		cout << "---+";
	cout << "\n";

	// Draw column numbers
	cout << "  ";
	for (int c = 0; c < COLS; c++)
		cout << c << "   ";
	cout << "\n\n";
}

//---------------------------------------------------
// Main program to play Connect4 game
//---------------------------------------------------
int main()
{
	// TO BE ADDED
	Connect4 game;
	int col;
	int randcol;
	char player = 'X';
	char computer = 'O';

	for (int i = 0; i < 42; i++) {
		game.PrintBoard();
		cout << "Make a move." << endl;
		cout << "Type in a column number: ";
		cin >> col;
		randcol = 0 + rand() % (6 - 0 + 1);

		game.MakeMove(col, player);

		while (!game.MakeMove(col, player)) 
		{
			cout << "Try Again!\n";
			cout << "Make a move." << endl;
			cout << "Type in a column number: ";
			cin >> col;
			randcol = 0 + rand() % (6 - 0 + 1);
		}

		game.MakeMove(randcol, computer);
		
		if (game.CheckWin(player)) {
			cout << "Congrats, you won!!\n";
			return 0;
		}
		else if (game.CheckWin(computer)) {
			cout << "You lost.\n";
			return 0;
		}
	}

	//game.CheckWin();
}



