#include<stdio.h>

int arrayInt[] = {1,2,4} ;


void reverseArray(int tab[],int size){
    
    
    int leftIndex;
    int temp;
    
    leftIndex = (sizeof(tab)/sizeof(tab[0]))-size;
    if(leftIndex<=size/2){
        temp=tab[leftIndex];
        tab[leftIndex]=tab[size];
        tab[size]=temp;
        return;
    }    
    else reverseTab(tab,size-1);
}    


//put function's declaration here if you want to use test_main
void reverseTab(int tab[],int size);

//like main for testing
void test_main()
{
int arrayInt[] = {1,2,4} ;

reverseTab (arrayInt,3);

printf("%s",arrayInt);

   
}

//put your function here

