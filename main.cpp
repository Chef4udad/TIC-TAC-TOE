#include <iostream>
#include <stdlib.h>
using namespace std;
  char player1='X';
  int n;
  char matrix[3][3]= { '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    void draw(){
    for(auto & i : matrix) {
        for (char j : i) {
            cout << j << " ";
        }
        cout<<endl;
    }
        return;
}
 void input() {
    int value;
    cout << "THIS IS A YOUR TURN ";
    cin >> value;
    if (value == 1 && matrix[0][0]!='O')
        matrix[0][0] = player1;
    else if (value == 2 && matrix[0][1]!='O')
        matrix[0][1] = player1;
    else if (value == 3 && matrix[0][2]!='O')
        matrix[0][2] = player1;
    else if (value == 4 && matrix[1][0]!='O')
        matrix[1][0] = player1;
    else if (value == 5 && matrix[1][1]!='O')
        matrix[1][1] = player1;
    else if (value == 6 && matrix[1][2]!='O')
        matrix[1][2] = player1;
    else if (value == 7 && matrix[2][0]!='O')
        matrix[2][0] = player1;
    else if (value == 8 && matrix[2][1]!='O')
        matrix[2][1] = player1;
    else if (value == 9 && matrix[2][2]!='O')
        matrix[2][2] = player1;
}
     void change_player(){
        if(player1=='X')
            player1='O';
         else
            player1='X';
    }
    char win(){
        if(matrix[0][0]=='X' && matrix[0][1]=='X' && matrix[0][2]=='X')
            return 'X';
        if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
            return 'X';
        if(matrix[2][0]=='X' && matrix[2][1]=='X' && matrix[2][2]=='X')
            return 'X';
        if(matrix[0][0]=='X' && matrix[1][0]=='X' && matrix[2][0]=='X')
            return 'X';
        if(matrix[0][1]=='X' && matrix[1][1]=='X' && matrix[2][1]=='X')
            return 'X';
        if(matrix[0][2]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
            return 'X';
        if(matrix[1][0]=='X' && matrix[1][1]=='X' && matrix[1][2]=='X')
            return 'X';
        if(matrix[0][0]=='X' && matrix[1][1]=='X' && matrix[2][2]=='X')
            return 'X';
        if(matrix[0][2]=='X' && matrix[1][1]=='X' && matrix[2][0]=='X')
            return 'X';

        //second player turn rules

        if(matrix[0][0]=='O' && matrix[0][1]=='O' && matrix[0][2]=='O')
            return 'O';
        if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
            return 'O';
        if(matrix[2][0]=='O' && matrix[2][1]=='O' && matrix[2][2]=='O')
            return 'O';
        if(matrix[0][0]=='O' && matrix[1][0]=='O' && matrix[2][0]=='O')
            return 'O';
        if(matrix[0][1]=='O' && matrix[1][1]=='O' && matrix[2][1]=='O')
            return 'O';
        if(matrix[0][2]=='O' && matrix[1][2]=='O' && matrix[2][2]=='O')
            return 'O';
        if(matrix[1][0]=='O' && matrix[1][1]=='O' && matrix[1][2]=='O')
            return 'O';
        if(matrix[0][0]=='O' && matrix[1][1]=='O' && matrix[2][2]=='O')
            return 'O';
        if(matrix[0][2]=='O' && matrix[1][1]=='O' && matrix[2][0]=='O')
            return 'O';

    }






int main(){
    cout<<"THIS IS A TIC-TAC-TOE GAME"<<endl;
    draw();
    n++;
    while(true) {
        input();
        draw();
        change_player();
        if (win() == 'X' || win() == 'O') {
            cout << " YOU WINS THE GAME ";
            break;
        }
    }
    return 0;
}
