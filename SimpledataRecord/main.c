#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define Myalloc(size) malloc((size))
typedef struct {
    int a;
    char str[10];
}myset;
int main()
{
    myset *p;
    p=(myset*)Myalloc(5*sizeof(myset));
//    p=(myset*)malloc(5*sizeof(myset));

    for(int i=0;i<5;i++){
        scanf("%s",(p+i)->str);
        (p+i)->a=i;
    }
    for(int i=0;i<5;i++){
        printf("ID %d str: %s\n",(p+i)->a,(p+i)->str);
    }
    free(p);
    return 0;
}
