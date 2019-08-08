#include <stdio.h>
#include <stdlib.h>
#define MYBUFFERLEN (1024*4)
#define true 1
#define false 0
typedef short bool;

bool filecopy(char *readfilename,char  *writefilename){
    FILE *rptr,*wptr;
    if((rptr=fopen(readfilename,"rb"))==NULL||(wptr=fopen(writefilename,"wb"))==NULL){
        return false;
    }
    char *mybuffer =(char *)malloc(MYBUFFERLEN*sizeof(char));
    int lencnt=0;
    while(lencnt=fread(mybuffer,1,MYBUFFERLEN,rptr)){
        fwrite(mybuffer,1,MYBUFFERLEN,wptr);
    }

    free(mybuffer);
    fclose(rptr);
    fclose(wptr);
    return true;
}

int main()
{
    char readfilename[10],writefilename[10];

    printf("複製文件名稱\n");
    scanf("%s",readfilename);
    printf("新文件名稱\n");
    scanf("%s",writefilename);
    filecopy(readfilename,writefilename);

    return 0;
}


