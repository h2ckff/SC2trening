#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
#include <conio.h>
using namespace std;

//Variables used betwen functions
string input = "";
string expected = "";
int points = 0;
char a;
char tempRan;
string tempStr;
bool score=0;

//Function that generates the character to type
string generator()
{
  int i = rand()%35;
  if(i<9)
  {
    return to_string(i+1);
  }
  else
  {
    tempRan = 'a' + (i - 9);
    tempStr = tempRan;
    return tempStr;
  }
}

//Main function where takes place most of things
int main()
{
  //First text that appers right after compilaton
  cout<<"SC2traing v. 1.0"<<endl<<"To stop enter ?"<<endl;
  system("pause");
  cout<<endl;

//Main loop where takes place somethings
  while(input!="?")
  {
    cout<<"SC2traing v. 1.0"<<endl<<"To stop enter ?"<<endl<<endl;

    if(score == 1)
    {
      cout<<"Good job";
    }
    else
    {
      cout<<"You missed";
    }
    cout<<" | Your score: "<<points<<endl<<endl;

    expected = generator();
    cout<<"\t"<<expected<<endl;
    a = getch();
    input = a;

    if(input==expected)
    {
      points++;
      score = 1;
    }
    else
    {
      score = 0;
    }
    system("cls");
  }

  //Ending information and system("pause"), to freeze app
  cout<<"SC2traing v. 1.0"<<endl<<"To stop enter ?"<<endl<<endl;
  cout<<"You're done. Your score is equal "<<points<<endl;
  system("pause");
  return 0;
}
