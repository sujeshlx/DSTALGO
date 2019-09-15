#include<iostream>
#include<string>
using namespace std;

void printAllBianry(int digits,string emty);
int main()
{
   printAllBianry(3,"");
}
void printAllBianry(int digits,string prefix)
{
   if(digits == 0)
   {
      cout<< prefix <<endl;
   }
   else
   {
     printAllBianry(digits - 1,prefix + "0" );
     printAllBianry(digits - 1 ,prefix + "1");
   }
}

