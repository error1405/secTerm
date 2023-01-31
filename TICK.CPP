#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int choice;
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn='X';
int draw= 0;
int row,column;

void display()
{
    system("cls");
      cout<<"\t\t ____Tick cross game____"<<endl<<endl;
      cout<<"\t\t\t player 1[X]"<<endl<<endl<<"\t\t\t player 2[O]"<<endl<<endl;
      cout<<"\t\t\t  "<<board[0][0]<<" |  "<<board[0][1]<<" | "<<board[0][2]<<"  "<<endl;
      cout<<"\t\t\t ___|____|___ "<<endl;
      cout<<"\t\t\t  "<<board[1][0]<<" |  "<<board[1][1]<<" | "<<board[1][2]<<"  "<<endl;
      cout<<"\t\t\t ___|____|___ "<<endl;
      cout<<"\t\t\t  "<<board[2][0]<<" |  "<<board[2][1]<<" | "<<board[2][2]<<"  "<<endl;
      cout<<"\t\t\t    |    |    "<<endl<<endl;
}
void players_turn()
{
  if(turn=='X')
    cout<<"player 1[X] TURN:";
     if(turn=='O')
     cout<<"player 2[O] TURN:";
      cin>>choice;

      switch(choice)
     {
       case 1: row=0;column=0;
       break;

       case 2: row=0;column=1;
       break;

       case 3: row=0;column=2;
       break;

       case 4: row=1;column=0;
       break;

       case 5: row=1;column=1;
       break;

       case 6: row=1;column=2;
       break;

       case 7: row=2;column=0;
       break;

       case 8: row=2;column=1;
       break;

       case 9: row=2;column=2;
       break;

       default :
       cout<<"invalid";
       break;
     }
     if(turn=='X' && board[row][column]!='X' && board[row][column]!='O' )
     {

	board[row][column]='X';
	turn='O';
     }
     else if(turn=='O' && board[row][column]!='X' && board[row][column]!='O')
     {
	board[row][column]='O';
	turn='X';
     }
     else
     {
	cout<<"already choise number";
	players_turn();
     }
     display();
}
int gameover()
{
   for(int i=0;i<3;i++)
   if(board[i][0]==board[i][1] && board[i][0]==board[i][2] || board[0][i]==board[1][i] && board[0][i]==board[2][i])
   return 0;

   if(board[0][0]==board[1][1] && board[0][0]==board[2][2] || board[0][2]==board[1][1] && board[0][0]==board[2][0])
   return 0;

   for(i=0;i<3;i++)
     for(int j=0;j<3;j++)
       if(board[i][j]!='X' && board[i][j]!='O')
       return 1;

       draw=1;
       return 0;


}
int main()
{
  clrscr();
  while(gameover())
  {
      display();
      players_turn();
      gameover();
  }
  if(turn=='X'&& draw==0)
  {
     cout<<"player 2 win"<<endl<<"Gameover";
  }
  else if(turn=='O' && draw==0)
     cout<<"player 1 win"<<endl<<"Gameover";
  else
  {
     cout<<"game draw ! !";
  }

  getch();
}
