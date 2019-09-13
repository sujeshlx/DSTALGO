#include<string.h>
#include<iostream>
using namespace std;

bool isPaliandrom(string s);
int main()
{

cout << isPaliandrom("aaaa") << endl;
}



bool isPaliandrom(string s)
{
  
  s = s.toLowercase(s);
  if(s.length() <= 1)
  {
     return true;
  }
  else
  {
    char first = s[0];
    char last = s[s.length() - 1];

    if(first == last)
    {
      string middle = s.substr(1,s.length()-2);
      return isPaliandrom(middle);
    }
    else
       return false;
  }
  
}
