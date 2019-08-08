#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define mysize 3
char* findlastoccurance(char* str,char c){

    if(!str)
        return;
    char *temp=NULL;
    while(*str!='\0'){
        if(*str==c){
            printf("%x\n",str);
            temp=str;
        }

        ++str;
    }
    return temp;
}
int main()
{   char *str=(char*)malloc(mysize*sizeof(char));
    for(int i=0;i<strlen(str);i++){
        *(str+i)='0'+i;
    }

    char*lasto=findlastoccurance(str,'2');
    if(lasto){

        printf("%c last Occur at %x\n",*lasto,lasto);

    }
    else
        printf("NO");
    free(str);

    return 0;
}
