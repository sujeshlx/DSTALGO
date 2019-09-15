#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& ,int value, int start, int end);

int main()
{
  std::vector<int> v = {1,2,3,4,5};

 int i =  binarysearch(v,3,1,5);
 cout<< v[i];
 cout<<endl;
}

int binarysearch(vector<int>&  v,int value,int start,int end)
{
    int mid = end - start;

    if(value == v[mid])
      return mid;
    
    else if(value < v[mid])
    {
        return binarysearch(v,value,start,mid - 1);
    }
    else
    {
        return binarysearch(v,value,mid + 1,end);
    }

}
