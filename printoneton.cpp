#include<iostream>
using namespace std;

void printoneton(int n);


int main()
{
    printoneton(5);
    cout<<endl;
}




void printoneton(int n)
{

  if(n > 0)
  {

    printoneton(n-1);	  
    cout<<n <<"\t";

  }
}
