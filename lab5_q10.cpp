//first include the library
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
	char a;
//ask the user for the alphabets
	cout<< " please give the alphabet sir  and I will tell you if it is in upper case or in lower case "<<endl;
	cin>>a;
//read the alphabets
	if(a>64 and a<91)
	{
		cout<< " the alphabet is in upper case "<<endl;
	}
	else
	{	
		cout<< " the alphabet is in lower case"<<endl;
	}
	return 0;
	}
