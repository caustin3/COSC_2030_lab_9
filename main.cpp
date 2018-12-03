//Chase Austin
//Date: 3/Dec/2018
//COSC 2030 lab 9 


#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
	map<string, int> map_;
	cout << "input the file full name?" << endl;
	string file_name,input;

	cin >> file_name;

	fstream file_;
	file_.open(file_name);
	if (file_.is_open()) 
	{	
		while (!file_.eof()) 
		{
			file_ >> input;
			++map_[input];
		}
	}
	file_.close();
	ofstream outputFile("output.txt");
	
	for (map<string, int>::iterator it = map_.begin(); it != map_.end(); ++it)
	{
		for (int index = it->second; index > 0; index--)
		{
			outputFile << it->first;
		}
	}
	outputFile.close();	
	return 0;
}