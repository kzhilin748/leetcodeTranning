#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrrev(char *str){
        if(str==NULL)
                return;
        char *right= str+strlen(str)-1;
        char *left=str;
        char temp;
        while(left<right){
                temp=*left;
                *left++=*right;
                *right--=temp;
        }
}
int main()
{   char *str=(char*)malloc(3);
    for(int i=0;i<strlen(str);i++){
        *(str+i)='0'+i;
    }
    printf("%s\n",str);
    mystrrev(str);
    printf("%s",str);

    return 0;
}
