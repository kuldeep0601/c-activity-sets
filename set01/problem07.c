// Write a C program to find sum of all natural numbers until _n_

#include <stdio.h>

int input_n()
{
    int n;
    printf("Enter a value of number:");
    scanf("%d",&n);
    return n;
}

int sum_n_nos(int n)
{
int sum= 0;
for(int i=1 ; i<=n; i++)
{
    sum+=1;
}
return sum;
}
void output(int n, int sum)
{
    printf("the sum of natural numbers upto %d is: %d\n",n,sum);
}
int main()
{
    int num = input_n();
    int sum = sum_n_nos(num);
    output(num,sum);
    return 0;
}


