//first include the library 
#include<iostream>
using namespace std;
int main()
	{
//declaring the variables
	char a;
//ask the user to give the character
	cout<< " give the alphabet and i will say it is a vowel or not and whether it  is upper case and lower case "<<endl;
	cin>>a;
	if(a==65 or a==69 or a==73 or a==79 or a==85 or a==97 or a==101 or a==105 or a==111 or a==117)
	{
	cout<< " the alphabet is a vowel "<<endl;
	}
	else
	{
	cout<<" the alphabet is a consonant "<<endl;
	}
	if(a==97 or a==101 or a==105 or a==111 or a==117)
	{
		cout<< " the alphabet is a vowel and is in lower case "<<endl;
	}
	if(a==65 or a==69 or a==73 or a==79 or a==85)
	{
	cout<< " the alphabet is a vowel and is in upper case"<<endl;
	}
	return 0;
	}
