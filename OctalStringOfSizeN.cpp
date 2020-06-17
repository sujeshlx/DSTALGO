#include<iostream>
using namespace std;


// Function to print the output 
void printTheArray(char arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 

void printBinStringsHelper(int n,char p[],int pi)
{

   if(pi == n)
   {
      printTheArray(p,n);
      return;
  }
  
  for(int i = 0;i<8;i++)
  {

    p[pi] = i+'0';
    printBinStringsHelper(n,p,pi+1);
  }
}


void printBinStrings(int n)
{
  char p[n];   
  printBinStringsHelper(n,p,0);
}
int main()
{
printBinStrings(3);
}
