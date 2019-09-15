#include<iostream>
#include<vector>

using namespace std;

void  diceRaolls(int ,int );
void  diceRaollsHelper(int ,vector<int>& ,int desiredSum );
int sumDesired(int desiredSum ,vector<int>& chosen);
int main()
{
  diceRaolls(2,4);
}
void  diceRaolls(int dice,int desiredSum)
{
  vector<int> chosen;

  diceRaollsHelper(dice,chosen,desiredSum);
}

void diceRaollsHelper(int dice,vector<int>& chosen,int desiredSum)
{
 
  if(dice == 0)
  {

    if( sumDesired(desiredSum ,chosen)  == desiredSum)
    {
      for (auto i = chosen.begin(); i != chosen.end(); ++i)
      {
	
        std::cout << *i << ' ';
       }
       cout<<endl;
    }
  }
  else
  {
    for(int i = 1;i<=6;i++)
    {
      chosen.push_back(i);
      diceRaollsHelper(dice - 1,chosen,desiredSum);
      chosen.erase(chosen.end() - 1);
    }
  }
}

int sumDesired(int desiredSum ,vector<int>& chosen)
{
   int sum = 0;
   for (auto i = chosen.begin(); i != chosen.end(); ++i)
    {

      sum += *i;
    }

   return sum;
}
