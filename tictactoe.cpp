/*
  Author: Tejas Pandit
  Last Edited: 10/10/23
  This program creates a game of two player tic-tac-toe (no AI)
  The game keeps track of wins, losses, ties, and allows the users to play again
 */

#include <iostream>
#include <cstring>

using namespace std;

//need this line to allow us to use the checkWin function later
bool checkWin(char player, char board[4][4]);

int main()
{
  //variables
  char board[4][4]; //the board will be a 4x4 (actual board and labels)
  bool stillPlaying = true;
  int playerMove = 1;
  int inputColumn;
  char inputRow;
  char X = 'X';
  char O = 'O';
  int moves = 0;
  int numWinsX = 0;
  int numWinsO = 0;
  int numTies = 0;
  char input;

  //framework of the board, a, b, and c represent rows, 1, 2, and 3 represent columns
  board[0][0] = ' ';
  board[1][0] = 'a';
  board[2][0] = 'b';
  board[3][0] = 'c';
  board[0][1] = '1';
  board[0][2] = '2';
  board[0][3] = '3';

  //initialize the board to be clear 
  for (int i = 1; i < 4; i++){
    for (int j = 1; j < 4; j++){
      board[i][j] = '-';
    }
  }

  //print out empty board and statements telling number of wins/ties
  cout << "X Wins: " << numWinsX << endl;
  cout << "O Wins: " << numWinsO << endl;
  cout << "Ties: " << numTies << endl;
  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      cout << board[i][j];
    }
    cout << "" << endl;
  }

  //while loops that runs until the users no longer want to kepp playing
  while (stillPlaying == true){

    //ask for the row and column the user wants to play in and save in variables
    cout << "Enter the row you would like to play in (a, b, or c)." << endl;
    cin >> inputRow;
    cout << "Enter the column you would like to play in (1, 2, or 3)." << endl;
    cin >> inputColumn;

    //goes through all possible moves (18 possibles moves as 9 possible for X and 9 possible for O)
    for (int i = 1; i < 4; i++){
      //checks if the move attempted was made by X in an empty space on the first row
      if(inputRow == 'a' && inputColumn == i && playerMove == 1 && board[1][i] == '-'){
	//move was legal so change space selected to piece
	board[1][i] = 'X';
	moves++; //a move has been made
	//check if the move won the game
	if(checkWin(X, board) == true){
	  cout << "X Wins!" << endl;
	  numWinsX++; //if the game was won, increase number of wins
	  stillPlaying = false;
	}
	playerMove = 2; //change player move
      }

      //checks if the move attempted was made by X in an empty space on the second row
      else if(inputRow == 'b' && inputColumn == i && playerMove == 1 && board[2][i] == '-'){
	//follows same format as the first if statement
	board[2][i] = 'X';
	moves++;
        if(checkWin(X, board) == true){
          cout << "X Wins!" << endl;
	  numWinsX++;
          stillPlaying = false;
        }
	playerMove = 2;
      }

      //checks if the move attempted was made by X in an empty space on the third row
      else if(inputRow == 'c' && inputColumn == i && playerMove == 1 && board[3][i] == '-'){
	//follows same format as the first if statement
	board[3][i] = 'X';
	moves++;
        if(checkWin(X, board) == true){
          cout << "X Wins!" << endl;
	  numWinsX++;
          stillPlaying = false;
        }
	playerMove = 2;
      }

      //checks if the move attempted was made by O in an empty space on the first row
      else if(inputRow == 'a' && inputColumn == i && playerMove == 2 && board[1][i] == '-'){
	//follows same format as the first if statement
	board[1][i] = 'O';
	moves++;
        if(checkWin(O, board) == true){
          cout << "O Wins!" << endl;
	  numWinsO++;
          stillPlaying = false;
        }
        playerMove = 1;
      }

      //checks if the move attempted was made by O in an empty space on the second row
      else if(inputRow == 'b' && inputColumn == i && playerMove == 2 && board[2][i] == '-'){
	//follows same format as the first if statement
	board[2][i] = 'O';
	moves++;
        if(checkWin(O, board) == true){
          cout << "O Wins!" << endl;
	  numWinsO++;
          stillPlaying = false;
        }
        playerMove = 1;
      }

      //checks if the move attempted was made by O in an empty space on the second row
      else if(inputRow == 'c' && inputColumn == i && playerMove == 2 && board[3][i] == '-'){
	//follows same format as the first if statement
	board[3][i] = 'O';
	moves++;
        if(checkWin(O, board) == true){
          cout << "O Wins!" << endl;
	  numWinsO++;
          stillPlaying = false;
        }
        playerMove = 1;
      }
      else {

      }

    }

    //if the number of moves is 9 and nobody has won, it is a tie
    if(moves >= 9){
      cout << "It is a Tie!" << endl;
      numTies++;
      stillPlaying = false;
    }


    //print out the number of wins/ties and the board after each move
    cout << "X Wins: " << numWinsX << endl;
    cout << "O Wins: " << numWinsO << endl;
    cout << "Ties: " << numTies << endl;
    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 4; j++){
	cout << board[i][j];
      }
      cout << "" << endl;
    }

    //if a game ended, ask if the users want to play again
    if(stillPlaying == false){
      cout << "Play Again? (y or n)" << endl;
      cin >> input;
      //end game
      if(input == 'n'){
	stillPlaying = false;
      }
      /*
	reset board, print out number of wins/ties, print out blank board, continue game, set the move to X,
	and reset the number of moves
      */
      else if (input == 'y'){
	 for (int i = 1; i < 4; i++){
	   for (int j = 1; j < 4; j++){
	     board[i][j] = '-';
	   }
	 }

	  cout << "X Wins: " << numWinsX << endl;
	  cout << "O Wins: " << numWinsO << endl;
	  cout << "Ties: " << numTies << endl;
	  for (int i = 0; i < 4; i++){
	    for (int j = 0; j < 4; j++){
	      cout << board[i][j];
	    }
	    cout << "" << endl;
	  }
	  stillPlaying = true;
	  playerMove = 1;
	  moves = 0;
      }
      else {
	stillPlaying = false;
      }
    }
  }
}

//checkWin function that checks all winning scenarios
bool checkWin(char player, char board[4][4]){
  if (board[1][1] == player && board[1][2] == player && board[1][3] == player){
    return true;
  }
  else if (board[2][1] == player && board[2][2] == player && board[2][3] == player){
    return true;
  }
  else if (board[3][1] == player && board[3][2] == player && board[3][3] == player){
    return true;
  }
  else if (board[1][1] == player && board[2][1] == player && board[3][1] == player){
    return true;
  }
  else if (board[1][2] == player && board[2][2] == player && board[3][2] == player){
    return true;
  }
  else if (board[1][3] == player && board[2][3] == player && board[3][3] == player){
    return true;
  }
  else if (board[1][1] == player && board[2][2] == player && board[3][3] == player){
    return true;
  }
  else if (board[1][3] == player && board[2][2] == player && board[3][1] == player){
    return true;
  }
  //none are true, so the game has not been won
  else{
    return false;
  }
}
