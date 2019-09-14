#include<iostream>
using namespace std;

void  printBinary(int n);

int main()
{
    printBinary(43);
    cout<<"\n";
    //printBinary(-6);
    cout<<"\n";
}

void  printBinary(int n)
{
    cout << "printBinary("<< n <<")" <<endl;
    if( n < 0)
      n = -n;

    if(n < 2)
       cout << n;

   else
   {
       int lastDigit = n % 2;
       int restofDigit = n / 2;
       printBinary(restofDigit);
       printBinary(lastDigit);
       //cout << lastDigit;
   }	   
}
