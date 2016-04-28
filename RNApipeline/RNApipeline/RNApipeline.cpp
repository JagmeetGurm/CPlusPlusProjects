// RNApipeline.cpp : Defines the entry point for the console application.
//RNA sequence pipelining



#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>



using namespace std;

class gene{
	

public:
	gene(int src, int dest, string id){
		this->src = src;
		this->dest = dest;
		//this->dummy = dummy;
		geneID = id;
		//this->strand = strand;


	}
	int sourceID(){
		return src;
	}
	int destID(){
		return dest;
	}
	string gID(){
		return geneID;
	}

private:
	int src, dest, dummy;
	string geneID;
	string strand;

};
int main()
{
	

	ifstream inputFile;
	string line;
	vector<gene>geneStorage;
	inputFile.open("HG19-refseq-exon-annot-chr1-2016");
	if (!inputFile){
		cout << "sorry! can't open the file" << endl;

	}
	else{
		while (!inputFile.eof()){
			getline(inputFile, line);
			//check the file being read
		//	cout << line << endl;
			//parsing the string line
			std::istringstream buf(line);
			std::istream_iterator<std::string> beg(buf), end;

			std::vector<std::string> tokens(beg, end); // done!
		//	cout << tokens[2]<<endl;
	//		for (auto& s : tokens)
		//		std::cout << '"' << s << '"' << '\n';
//lets create the genes;
			std::string::size_type sz;
			
			gene g(stoi(tokens[1]), stoi(tokens[2]), tokens[3]);
			geneStorage.push_back(g);
		//	cout << geneStorage.size() << endl;
		}
	}
	cout<<geneStorage[0].sourceID()<<endl;
	cout << geneStorage[1].destID() << endl;
	cout << geneStorage[2].gID() << endl;
	system("pause");
	return 0;
}

