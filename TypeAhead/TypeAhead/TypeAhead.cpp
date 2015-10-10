// TypeAhead.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>



using namespace std;

//hard code text in program
string text = "Mary had a little lamb its fleece was white as snow And everywhere that Mary went the lamb was sure to go It followed her to school one day which was against the rule It made the children laugh and play to see a lamb at school And so the teacher turned it out but still it lingered near And waited patiently about till Mary did appear Why does the lamb love Mary so? the eager children cry Why Mary loves the lamb you know the teacher did reply " ;
string* myString=new string[text.length()];
map<string, int>freq;
int size;
void ngram(int len, string test){
	for (int i = 0; i < size-len+1; i++){
		if (len == 2){
			if (myString[i] + myString[i + 1] == test+myString[i+1]){
				freq[myString[i]+myString[i+1]]++;
			}
			
		}
		if (len == 3){
			freq[myString[i]]++;
		}
	}
}
int main(int argc, char* argv[])
{
	//myString.push_back(text[0]);
	ifstream infile;
//	infile.open(argv[1]);
	infile.open("testFile.txt");
	string check;
	while (getline(infile, check)){
		//cout << check << endl;
	}
	for (int i = 0, j=0; i < text.length(); i++, j++){
		string s="";
		while (text[i] != ' '){
			s = s+text[i];
			i++;
		}
		
		myString[j] = s;
		freq[myString[j]] = 0;
		size = j+1;
		//cout << myString[j] << " ";
	}

	ngram(2, "the");
	cout << freq["theteacher"];
	int max = 0;
	for(std::map<string, int>::iterator it = freq.begin(); it != freq.end(); ++it)
		
		std::cout << it->first << " => " << it->second << '\n';
		
//	}
	
	system("pause");
	return 0;
}
