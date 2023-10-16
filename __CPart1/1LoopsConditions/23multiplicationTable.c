/*
Write a program that displays the multiplication table of a provided integer.

Example: For n = 2, we display:
2 x 0 = 0
2 x 1 = 2
Etc ...
*/

#include<stdio.h>
int main(){
    
    int n = 5;
    printf("Please Enter an Integer\n");
    scanf("%d",&n);
    
    for(int i=0; i<=12;i++)
        printf("%d x %d = %d \n", n, i, n*i);


    return 0;
}