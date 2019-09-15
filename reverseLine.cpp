#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void printReverseLine(ifstream& input);

int main()
{
    ifstream myfile("my.txt");
    printReverseLine(myfile);
}

void printReverseLine(ifstream& input)
{
   string line;

   if(getline(input,line))
   {
      cout<< line <<endl;
      printReverseLine(input);
   }
}
