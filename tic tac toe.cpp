#include<iostream>
#include<windows.h>
using namespace std;

class tictac{
private:

char square[9]={'1','2','3','4','5','6','7','8','9'};
int turn=0;
char player[2]={'X','O'};



public:

void welcomescreen()
{
    int a;
    cout<<"\n"<<"\n"<<"                                      Welcome to Tic Toe Game   "<<endl;
    cout<<"************************************************************************************************************************"<<endl;
    system("pause");
    system("cls");
    cout<<"You want to play as ? "<<"\n"<<"\n"<<"Type 1 for player 1 / Type 2 for player 2 "<<endl;
    cin>>a;
    cout<<endl;
    if (a==1)                                        //player choose option
     {
      cout<<"You are player 1"<<endl;
     }
     else{
        if(a==2)
         cout<<"You are player 2"<<endl;

        else
            cout<<"wrong input \n You are player 1 (by default) "<<endl;
     }
   cout<<"\n"<<"Let's start the game"<<endl;                       //game starting window
   system("pause");
}

void table()
{
  cout<<"   "<<square[0]<<" | "<<square[1]<<" | "<<square[2]<<endl;
  cout<<"  ---|---|---"<<endl;
  cout<<"   "<<square[3]<<" | "<<square[4]<<" | "<<square[5]<<endl;
  cout<<"  ---|---|---"<<endl;
  cout<<"   "<<square[6]<<" | "<<square[7]<<" | "<<square[8]<<endl;

}


void toggleplayer()
{
    if (turn%2==0)
        cout<<"player 1 turn "<<endl;
    else
        cout<<"player 2 turn "<<endl;
}




int cheakwin()
{
    if (square[0]==square[1] && square[1]==square[2])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[3]==square[4] && square[4]==square[5])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[6]==square[7] && square[7]==square[8])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[0]==square[3] && square[3]==square[6])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[1]==square[4] && square[4]==square[7])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[2]==square[5] && square[5]==square[8])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[0]==square[4] && square[4]==square[8])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

    if (square[2]==square[4] && square[4]==square[6])
        {   system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
            cout<<"\a\n********* Player "<<(turn%2)+1<<" wins *********"<<"\n"<<"total turn taken- "<<turn+1<<endl;
            return 0;
        }

     if   (square[0]!='1'&&square[1]!='2'&&square[2]!='3'&&square[3]!='4'&&square[4]!='5'&&square[5]!='6'&&square[6]!='7'&&square[7]!='8'&&square[8]!='9')
     {
         system("cls");
            cout<<"--------------------------Game over--------------------"<<endl<<endl;
            cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
            table();
         cout<<"\a\n -_-_-_-_-_-_-_    Game drawn  -_-_-_-_-_-_-_-_-"<<endl<<"total turn taken- "<<turn+1<<endl;
         return 2;
     }

}

void refresh()
{
    for(int i=0;i<9;i++)
    {
        square[i]=49+i;
    }
}


int enddecision()
{
char deci;
cout<<"\n"<<"\n"<<"\n"<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<"\n"<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<"Thnx for playing "<<endl<<"wanna play again ? "<<endl;
cout<<"Y/N"<<endl;
cin>>deci;
    if (deci=='y'||deci=='Y')
   {
    turn=0;
    return 0;
   }
else{
 if(deci=='n'||deci=='N')
    {
    cout<<"Game is ending ";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    return 1;
    }
 else{cout<<"wrong input"<<endl;
    cout<<"Game is ending ";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    _sleep(0400);
    cout<<".";
    return 1;
    }
 }
}

void game()
{
    for(int num,a=1;a!=0 && a!=2;turn++)         //main screen starts from here
     {
         system("cls");
         cout<<"Player 1 (X) - Player 2 (O) "<<endl<<endl;
         table();
         toggleplayer();
         cout<<"type box number - ";
         cin>>num;

           if(num>0 && num<=9)
            {
                if(square[num-1]!='X' && square[num-1]!='O')
                    square[num-1]=player[turn%2];
                else{
                    cout<<"\n"<<"box already taken --- Try again"<<endl;
                     _sleep(1000);
                     turn--;
                    }
            }
            else
            {
                cout<<"\n"<<"wrong input -- try again"<<endl;
                _sleep(1000);
                turn--;
            }
       a=cheakwin();
     }
}

};






int main()
{
  tictac toe;

  toe.welcomescreen();
  for (int i=0;i!=1;)
   {
     toe.game();
     i=toe.enddecision();
     toe.refresh();
   }
}
