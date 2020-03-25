#include <iostream>
#include <string>
#include <cstdlib>
namespace std;

string fin = "fin";
string temp = "";
string tempcin = "";

string randomChar()
{
    int i  = rand()%25;
    if(i<7)
    {
        string tempa = to_string(i);
        return  tempa;
    }
    else
    {
        char n = i;
        return n;
    }
}

int main()
{
    	cout<<"SC2trainting 0.0.1"<<endl;
    	cout<<"Type START to run program. Type FIN to stop time."<<endl;
	while(tempcin!=fin)
	{

	}

   	return 0;
}
