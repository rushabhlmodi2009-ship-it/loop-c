#include <stdio.h>

int main()
{
    char ch = 'l';

    do
    {
        printf("%c ", ch);
        ch = ch + 5;
    }
    while(ch <= 'z');

    return 0;
}

#include<stdio.h>
void main(){
    int n,count = 0;
    
    printf("Enter a number :");
    scanf("%d", &n);
    for(;n != 0; n = n/10)
        {
            count++;
        }
    printf("Total digits: %d", count);
}

#include<stdio.h>
void main(){
    int n,first,last,sum;
    printf("Enter any number :");
    scanf("%d", &n);
    last = n%10;
    for(; n != 0; n = n/10){
        first = n;
        sum = first + last;
        printf("Sum of first and last digit : %d", sum);
    }
}