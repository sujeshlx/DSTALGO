#include<stdio.h>


int power(int base,int exp);
int result = 1;
int main()
{
    printf("Power = %d \n" , power(3,2));
}

int power(int base, int exp)
{
    
	if(exp == 0)
              return result;
	result *= base;
        power(base,exp-1);
    
}
