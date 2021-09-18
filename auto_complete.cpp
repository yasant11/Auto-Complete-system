#include<iostream>
#include<windows.h>
#include <conio.h>
#include <string>
using namespace std;
#include "trie.h"

int main()
{
	trie dict;
	string sample_words[25]={"maximum","mad","mean","meal","tax","ten","trend","trade","treat","clear","cat","apple","alternate","mango","television","manage","telecom","cricket","many","host","hole","human","tea","cry","street"};
	for(int i=0;i<25;i++)
		dict.insert(sample_words[i]);
		
	char x;
	string record="";
	cout<<"Hit ENTER to EXIT :-)            You can also use BACKSPACE to delete character\n";
	cout<<"-----------------                ----------------------------------------------\n\nINPUT : ";
	while(1)
	{
		x=getche();
		system("cls");
		cout<<"Hit ENTER to EXIT :-)            You can also use BACKSPACE to delete character\n";
		cout<<"-----------------                ----------------------------------------------\n\n";
		if(x==*"\b")
			record.erase( record.end()-1 );
		else if(int(x)>=int('a')&&int(x)<=int('z'))
			record+=x;
		else
			break;
		cout<<"AUTO COMPLETIONS\n";
		cout<<"----------------\n";
		dict.autocomplete(record);
		cout<<"\n\nINPUT"<<endl<<record;
	}
	
	return 0;
}
