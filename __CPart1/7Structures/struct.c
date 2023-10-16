


#include<stdio.h>
#include<string.h>

//put function's declaration here if you want to use test_main
void reverseTab(int tab[],int size);

//like main for testing
int main()
{
    struct person{
        int id;
        int name[50];
        char sex;
    };

    struct person p1;
        
    p1.id= 123;
    strcpy(p1.name,"Joan Doe");
    p1.sex='M';

    printf("ID=%d Name: %s",p1.id,p1.name);

    return 0;
}    