/*
Build a simple console-based Tic-Tac-Toe game that
allows two players to play against each other.
*/
#include<iostream>
using namespace std;

int choice;
char turn ='X';

void grid(char number[3][3])
{
    
    for(int i=0;i<3;i++){
        cout<<"- - - - - - - - - - - -"<<endl;
        for(int j=0;j<3;j++){
            cout<<"|      "<<number[i][j];
            
        }
        cout<<"|";
        cout<<endl;
      
    }
    cout<<"- - - - - - - - - - - -"<<endl;
}

 void player_turn(char number[3][3])
 {
    if(turn=='X')
cout<<"Player1[x] enter your choice"<<endl;
    if(turn=='O')
cout<<"Player2[O] enter your choice"<<endl;
cin>>choice;

    switch(choice){
    case 1: number[0][0]=turn;
    break;
    case 2: number[0][1]=turn;
    break;
    case 3: number[0][2]=turn;
    break;
    case 4: number[1][0]=turn;
    break;
    case 5: number[1][1]=turn;
    break;
    case 6: number[1][2]=turn;
    break;
    case 7: number[2][0]=turn;
    break;
    case 8: number[2][1]=turn;
    break;
    case 9: number[2][2]=turn;
    break;
    default:
    cout<<"invalid number"<<endl;

}
if(turn=='X'){
    turn='O';
}
else
turn='X';
}

int win(char number[3][3]){
    for(int i=0;i<3;i++){
        if((number[i][0]==number[i][1]&& number[i][1]==number[i][2])||
        (number[0][i]==number[1][i]&&number[1][i]==number[2][i])){
        return 1;
        }

        if((number[0][0]==number[1][1]&& number[1][1]==number[2][2])||
        (number[0][2]==number[1][1]&& number[1][1]== number[2][0]))
        {
            return 0;
        }
    }

}

int tie(char number[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if((number[i][j]!='X')||(number[i][j]!='O')){
                return 0;
            }

        }
        return 1;
    }
}

int main(){

char number[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};

for(;;){

grid(number);
player_turn(number);
grid(number);

if(win( number))
{
if(turn=='X'){
    cout<<"Player[O]wins"<<endl;
}
else{
    cout<<"Player[X]wins"<<endl;
}
break;
}

if(tie(number)){
    cout<<"The match is tie"<<endl;
    break;
}

}

}
