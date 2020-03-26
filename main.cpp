#include <iostream>
#include <string>
#include <random>
#include <cstdlib>
using namespace std;

string input = "";
string expected = "";
int points = 0;

void generator()
{
  char rnd = 'a' + rand()%24;
  expected = rnd;
  cout<<expected<<endl;
}

int main()
{
  cout<<"Hellow world";

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

    cout<<" | Your score: "<<points<<endl;
  }

}
