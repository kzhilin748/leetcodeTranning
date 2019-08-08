#include <stdio.h>
#include<limits.h>
#include<stdlib.h>
#define true 1
#define false 0

typedef int bool;
bool isPalindrome(int x) {
    long temp0 =x;
    if(x<0||temp0>INT_MAX)
        return false;
    int temp =0; 
    while(temp<x){
        temp=temp*10+x%10;
        if(temp==x)
            break;
        x/=10;
    }
    return temp==x ? true:false;
}
int main()
{
    printf("%d",isPalindrome(1231));

    return 0;
}
