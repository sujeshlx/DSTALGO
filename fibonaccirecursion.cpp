#include<iostream>
using namespace std;


int fibinocci(int n);
int main()
{
   cout << "fibinocci " << fibinocci(6) <<endl;
}
int fibinocci(int n)
{
  if(n == 0)
    return 0;
  
  if(n == 1)
    return 1;

  return fibinocci(n-1) + fibinocci(n-2);
}
