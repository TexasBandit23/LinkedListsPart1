#include <iostream>
#include <cstring>

using namespace std;

bool checkWin(char player, char board[4][4]);

int main()
{
  char board[4][4];
  bool stillPlaying = true;
  int playerMove = 1;
  int inputColumn;
  char inputRow;
  char X = 'X';
  char O = 'O';
  int moves = 0;
  
  board[0][0] = ' ';
  board[1][0] = 'a';
  board[2][0] = 'b';
  board[3][0] = 'c';
  board[0][1] = '1';
  board[0][2] = '2';
  board[0][3] = '3';
  
  for (int i = 1; i < 4; i++){
    for (int j = 1; j < 4; j++){
      board[i][j] = '-';
    }
  }

  for (int i = 0; i < 4; i++){
    for (int j = 0; j < 4; j++){
      cout << board[i][j];
    }
    cout << "" << endl;
  }

  while (stillPlaying == true){
    cout << "Enter the row you would like to play in (a, b, or c)." << endl;
    cin >> inputRow;
    cout << "Enter the column you would like to play in (1, 2, or 3)." << endl;
    cin >> inputColumn;

    for (int i = 1; i < 4; i++){
      if(inputRow == 'a' && inputColumn == i && playerMove == 1 && board[1][i] == '-'){
	board[1][i] = 'X';
	moves++;
	if(checkWin(X, board) == true){
	  cout << "X Wins!" << endl;
	  stillPlaying = false;
	}
	playerMove = 2;
      }

      else if(inputRow == 'b' && inputColumn == i && playerMove == 1 && board[2][i] == '-'){
        board[2][i] = 'X';
	moves++;
        if(checkWin(X, board) == true){
          cout << "X Wins!" << endl;
          stillPlaying = false;
        }
	playerMove = 2;
      }

      else if(inputRow == 'c' && inputColumn == i && playerMove == 1 && board[3][i] == '-'){
        board[3][i] = 'X';
	moves++;
        if(checkWin(X, board) == true){
          cout << "X Wins!" << endl;
          stillPlaying = false;
        }
	playerMove = 2;
      }

      else if(inputRow == 'a' && inputColumn == i && playerMove == 2 && board[1][i] == '-'){
        board[1][i] = 'O';
	moves++;
        if(checkWin(O, board) == true){
          cout << "O Wins!" << endl;
          stillPlaying = false;
        }
        playerMove = 1;
      }

      else if(inputRow == 'b' && inputColumn == i && playerMove == 2 && board[2][i] == '-'){
        board[2][i] = 'O';
	moves++;
        if(checkWin(O, board) == true){
          cout << "O Wins!" << endl;
          stillPlaying = false;
        }
        playerMove = 1;
      }

      else if(inputRow == 'c' && inputColumn == i && playerMove == 2 && board[3][i] == '-'){
        board[3][i] = 'O';
	moves++;
        if(checkWin(O, board) == true){
          cout << "O Wins!" << endl;
          stillPlaying = false;
        }
        playerMove = 1;
      }
      else {

      }

    }

    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 4; j++){
	cout << board[i][j];
      }
      cout << "" << endl;
    }

    if(moves >= 9){
      cout << "It is a Tie!" << endl;
      stillPlaying = false;
    }
  }
}

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
  else{
    return false;
  }
}
