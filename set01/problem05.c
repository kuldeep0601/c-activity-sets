// Write a C program to compare three numbers using **pass by value**
#include <stdio.h>

int input(){
int num;
printf("Enter a number:");
scanf("%d",&num);
return num;
}

int compare_num(int a,int b,int c,int largest){
    largest=a;
    if(b>largest){
        largest=b;
    }
    if(c>largest){
        largest=c;
    }
    return largest;
}
void displayResult(int largest)
{
    printf("The largest number is:%d\n",largest);
}
int main()
{
    int a,b,c ,largest;
    a = input();
    b = input();
    c = input();
    largest = compare(a,b,c,largest);
    displayResult(largest);
    return 0;
}