#include <stdio.h>
#include<stdlib.h>
#include<string.h>

void myswap(int *a,int*b){
    *a^=*b;
    *b^=*a;
    *a^=*b;

}

void myswap2(void*a,void*b){
    *(int*)a^=*(int*)b;
    *(int*)b^=*(int*)a;
    *(int*)a^=*(int*)b;
}
int main()
{
    int a=20,b=10;

    myswap(&a,&b);

    printf("a=%d b=%d\n",a,b);
    myswap2(&a,&b);

    printf("a=%d b=%d\n",a,b);

    return 0;
}
