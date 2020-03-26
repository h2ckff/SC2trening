#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
using namespace std;

//Variables used betwen functions
string input = "";
string expected = "";
int points = 0;

//Function that generates the character to type
void generator()
{
  char rnd = 'a' + rand()%24;
  expected = rnd;
  cout<<expected<<endl;
}

//Main function where takes place most of things
int main()
{
  //First text that appers right after compilaton
  cout<<"SC2traing v.0.1"<<endl<<"To stop enter FIN"<<endl;
  system("pause");
  cout<<endl;

//Main loop where takes place somethings
  while(input!="fin")
  {
    generator();
    cin>>input;

    if(input==expected)
    {
      points++;
      cout<<"Good job";
    }
    else
    {
      cout<<"You missed";
    }

    cout<<" | Your score: "<<points<<endl<<endl;
  }

  //Ending information and system("pause"), to freeze app
  cout<<endl<<endl<<"You're done. Your score is "<<points<<endl;
  system("pause");
  return 0;
}
