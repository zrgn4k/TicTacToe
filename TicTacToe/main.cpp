//
//  main.cpp
//  TicTacToe
//

#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello"<<endl;
    cout<<"Welcome to Tic Tac Toe"<<endl;
    char firstline[3]{'-','-','-'};
    char secondline[3]{'-','-','-'};
    char thirdline[3]{'-','-','-'};
    int move;
    
    for(int i=1;i<=10;i++)
    {
    cout<<"\nField Positions"<<endl;
    cout<<"|-1-|-2-|-3-|"<<endl;
    cout<<"|-4-|-5-|-6-|"<<endl;
    cout<<"|-7-|-8-|-9-|\n\n"<<endl;
        
    //array field
    cout<<"|-"<<firstline[0]<<"-|-"<<firstline[1]<<"-|-"<<firstline[2]<<"-|"<<endl;
    cout<<"|-"<<secondline[0]<<"-|-"<<secondline[1]<<"-|-"<<secondline[2]<<"-|"<<endl;
    cout<<"|-"<<thirdline[0]<<"-|-"<<thirdline[1]<<"-|-"<<thirdline[2]<<"-|"<<endl;
        
        //winning combinations for X
        if (firstline[0]=='X' && firstline[1]=='X' && firstline[2]=='X')
        {
            cout<<"\n\nX - won!"<<endl;return 0;
            
            return 0;
        }
        else if (secondline[0]=='X' && secondline[1]=='X' && secondline[2]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        else if (thirdline[0]=='X' && thirdline[1]=='X' && thirdline[2]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        else if (firstline[0]=='X' && secondline[0]=='X' && thirdline[0]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        else if (firstline[1]=='X' && secondline[1]=='X' && thirdline[1]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        else if (firstline[2]=='X' && secondline[2]=='X' && thirdline[2]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        else if (firstline[0]=='X' && secondline[1]=='X' && thirdline[2]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        else if (firstline[2]=='X' && secondline[1]=='X' && thirdline[0]=='X')
        {
            cout<<"\n\nX - won!"<<endl;
            
            return 0;
        }
        
        //winning combinations for O
        else if (firstline[0]=='O' && firstline[1]=='O' && firstline[2]=='O')
        {
            cout<<"\n\nO - won!"<<endl;return 0;
            
            return 0;
        }
        else if (secondline[0]=='O' && secondline[1]=='O' && secondline[2]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (thirdline[0]=='O' && thirdline[1]=='O' && thirdline[2]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (firstline[0]=='O' && secondline[0]=='O' && thirdline[0]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (firstline[1]=='O' && secondline[1]=='O' && thirdline[1]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (firstline[2]=='O' && secondline[2]=='O' && thirdline[2]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (firstline[0]=='O' && secondline[1]=='O' && thirdline[2]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (firstline[2]=='O' && secondline[1]=='O' && thirdline[0]=='O')
        {
            cout<<"\n\nO - won!"<<endl;
            
            return 0;
        }
        else if (i==10)
        {
            cout<<"\n\nTie!"<<endl;
            
            return 0;
        }
        
        cout<<"Type your move (number from 1 to 9):"<<endl;
        cin>>move;
        
        for(int x=0;x<=100;x++)
        {
            for(int i=0;i<=3;i++)
            {
                if ((move==i+1 && firstline[i]=='X') || (move==i+1 && firstline[i]=='O'))
                {
                    cout<<"This position is busy! Change it!"<<endl;
                    cin>>move;
                }
                else if ((move==i+4 && secondline[i]=='X') || (move==i+4 && secondline[i]=='O'))
                {
                    cout<<"This position is busy! Change it!"<<endl;
                    cin>>move;
                }
                else if ((move==i+7 && thirdline[i]=='X') || (move==i+7 && thirdline[i]=='O'))
                {
                    cout<<"This position is busy! Change it!"<<endl;
                    cin>>move;
                }
                else if (move>9 ||move<1)
                {
                    cout<<"\n\n\n\nYou can`t type numbers that bigger than 9 or rather than 0! Type from 1 to 9:"<<endl;
                    cin>>move;
                }
            }
         
        }
        
        
        if(i%2==0)
        {
            if (move==1)
            {
            firstline[0]='O';
            }
            else if (move==2)
            {
            firstline[1]='O';
            }
            else if (move==3)
            {
            firstline[2]='O';
            }
            else if (move==4)
            {
            secondline[0]='O';
            }
            else if (move==5)
            {
            secondline[1]='O';
            }
            else if (move==6)
            {
            secondline[2]='O';
            }
            else if (move==7)
            {
            thirdline[0]='O';
            }
            else if (move==8)
            {
            thirdline[1]='O';
            }
            else if (move==9)
            {
            thirdline[2]='O';
            }
        }
        else
        {
            if (move==1)
            {
            firstline[0]='X';
            }
            else if (move==2)
            {
            firstline[1]='X';
            }
            else if (move==3)
            {
            firstline[2]='X';
            }
            else if (move==4)
            {
            secondline[0]='X';
            }
            else if (move==5)
            {
            secondline[1]='X';
            }
            else if (move==6)
            {
            secondline[2]='X';
            }
            else if (move==7)
            {
            thirdline[0]='X';
            }
            else if (move==8)
            {
            thirdline[1]='X';
            }
            else if (move==9)
            {
            thirdline[2]='X';
            }
        }
    }
    
   
    
    
    return 0;
}
