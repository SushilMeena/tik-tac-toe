#include<iostream>
#include<windows.h>
using namespace std;

void print(char[][3]);
int checkwin(char[][3]);

int main()
{
 int i, j, x, y; char mat[3][3];
 for(i=0; i<3; i++)
    for(j=0; j<3; j++)
      mat[i][j]='-';

      cout<<"Welcome to the tic tok game :)\n\n\n"<<endl;
      print(mat);

for(i=0; ; i++)
{
    if(i%2==0)
    {
 cout<<"Player X enter your cords:-\n";
 cin>>x>>y;
 if(x<1||x>3||y<1||y>3)
    {cout<<"Wrong choice of coordinates plz reenter\n\n";
     i--; continue;}
     if(mat[x-1][y-1]!='-')
        {cout<<"coordinates already taken plz reenter\n\n";
         i--; continue;}
 mat[x-1][y-1]='X';
    }
    else
    {
 cout<<"Player O enter your cords:-\n";
 cin>>x>>y;
  if(x<1||x>3||y<1||y>3)
    {cout<<"Wrong choice of coordinates plz reenter\n\n";
     i--; continue;}
     if(mat[x-1][y-1]!='-')
        {cout<<"coordinates already taken plz reenter\n\n";
         i--; continue;}
 mat[x-1][y-1]='O';
    }
    system("cls");
    print(mat);

    if(checkwin(mat)==1)
    {
      cout<<"Player X wins\n\n\n\n";
      break;
    }
    if(checkwin(mat)==2)
    {
      cout<<"Player O wins\n\n\n\n";
      break;
    }
}
return 0;
}


int checkwin(char s[][3])
{
    int i;
    for(i=0; i<3; i++)
    {
       if(s[i][0]==s[i][1]&&s[i][1]==s[i][2]&&s[i][0]!='-')
       {
           if(s[i][0]=='X')
             return 1;
           else
            return 2;
       }
    }
    for(i=0; i<3; i++)
    {
       if(s[i][0]==s[1][i]&&s[1][i]==s[2][i]&&s[i][0]!='-')
       {
           if(s[0][i]=='X')
             return 1;
           else
            return 2;
       }
    }

       if(s[0][0]==s[1][1]&&s[1][1]==s[2][2]&&s[0][0]!='-')
       {
           if(s[0][0]=='X')
             return 1;
           else
            return 2;
       }

    return 0;
}

void print(char s[][3])
{
    int i, j;
    cout<<"THE TIK TAC TOE GAME PRESENTED BY ROHIT"<<endl;
    cout<<"\n\n\n\n\n\n";
  for(i=0; i<3; i++)
  {
      for(j=0; j<3; j++)
      {
          cout<<s[i][j]<<"\t";
      }
      cout<<endl;
  }
  cout<<"\n\n";
}
