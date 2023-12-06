#include <iostream>
#include <cstring>

using namespace std;

bool checkWin(char player);

int main()
{
  char board[4][4];
  bool stillPlaying = true;
  int playerMove = 1;
  int inputColumn;
  char inputRow;
  
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

  if(inputRow == 'a' && inputColumn == 1){
    board[1][1] = 'X';
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

    if(inputRow == 'a' && inputColumn == 1 && playerMove == 1 && board[1][1] == '-'){
      board[1][1] = 'X';
      if(checkWin('X') == true){
	stillPlaying == false;
      }
      
      playerMove = 2;
    }
    else if(inputRow == 'a' && inputColumn == 2 && playerMove == 1 && board[1][2] == '-'){
      board[1][2] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'a' && inputColumn == 3 && playerMove == 1 && board[1][3] == '-'){
      board[1][3] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'b' && inputColumn == 1 && playerMove == 1 && board[2][1] == '-'){
      board[2][1] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'b' && inputColumn == 2 && playerMove == 1  && board[2][2] == '-'){
      board[2][2] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'b' && inputColumn == 3 && playerMove == 1 && board[2][3] == '-'){
      board[2][3] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'c' && inputColumn == 1 && playerMove == 1 && board[3][1] == '-'){
      board[3][1] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'c' && inputColumn == 2 && playerMove == 1 && board[3][2] == '-'){
      board[3][2] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'c' && inputColumn == 3 && playerMove == 1 && board[3][3] == '-'){
      board[3][3] = 'X';
      if(checkWin('X') == true){
        stillPlaying == false;
      }

      playerMove = 2;
    }
    else if(inputRow == 'a' && inputColumn == 1 && playerMove == 2 && board[1][1] == '-'){
      board[1][1] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }

      playerMove = 1;
    }
    else if(inputRow == 'a' && inputColumn == 2 && playerMove == 2 && board[1][2] == '-'){
      board[1][2] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'a' && inputColumn == 3 && playerMove == 2 && board[1][3] == '-'){
      board[1][3] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'b' && inputColumn == 1 && playerMove == 2 && board[2][1] == '-'){
      board[2][1] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'b' && inputColumn == 2 && playerMove == 2 && board[2][2] == '-'){
      board[2][2] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'b' && inputColumn == 3 && playerMove == 2 && board[2][3] == '-'){
      board[2][3] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'c' && inputColumn == 1 && playerMove == 2 && board[3][1] == '-'){
      board[3][1] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'c' && inputColumn == 2 && playerMove == 2 && board[3][2] == '-'){
      board[3][2] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else if(inputRow == 'c' && inputColumn == 3 && playerMove == 2 && board[3][3] == '-'){
      board[3][3] = 'O';
      if(checkWin('O') == true){
        stillPlaying == false;
      }
      
      playerMove = 1;
    }
    else{

    }

    for (int i = 0; i < 4; i++){
      for (int j = 0; j < 4; j++){
	cout << board[i][j];
      }
      cout << "" << endl;
    }
  }
}

bool checkWin(char player){
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
