//first include the library
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
	char a;
//ask the user for the character
	cout<< " give the character and i will tell you its nature "<<endl;
	cin>>a;
//read the character
	if(a>64 and a<91 or a>96 and a<123 or a>47 and a<58 or a>32 and a<48)
	{
	 	cout<<" wow i know this "<<endl;
	}
	else
	{
		cout<< " i dont know dear sorry "<<endl;
	}
	if(a>64 and a<91)
	{
		cout<< " the character is a alphabet in upper case "<<endl;
	}
	if(a>96 and a<123)
	{
		cout<< " the character is a alphabet in lower case "<<endl;
	}
	if(a>47 and a<58)	
	{
		cout<< " the character is a digital item "<<endl;
	}
	if(a>32 and a<48)
	{
		cout<< " the character is a special character "<<endl;
	}
	return 0;
	}

