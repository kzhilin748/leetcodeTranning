#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define initsize 1
typedef struct{
    int size;
    int cnt;
    void **arr;
}myarray;

void newarray (myarray* array){
    array->size=initsize;
    array->cnt=0;
    array->arr=(void*)malloc(sizeof(void*) * (array->size));
    
}
void arradd(myarray *array,void *obj){
    if(array->cnt==array->size){
        
        void **temp=(void*)malloc(2 * sizeof(void*) * (array->size));
        memcpy(temp,array->arr,array->size*sizeof(void*));
        free(array->arr);
        (array->arr)=temp;
        array->size*=2;
        
        
    }
    *((array->arr)+array->cnt) = obj;
    array->cnt++;
    
}

int main()
{   char *str[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    myarray a;
    newarray(&a);
    for(int i=0;i<7;i++){
        arradd(&a,str[i]);
    }
    for(int i=0;i<a.cnt;i++){
        printf("%s\n",(char*)*((a.arr)+i));
    }
    free(a.arr);
    return 0;
}
