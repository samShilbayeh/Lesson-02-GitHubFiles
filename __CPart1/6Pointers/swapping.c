/*
Write a C program that swaps the values of two integer variables using a function.

 Declare a function named swap that takes two integer pointers as parameters and swaps the values of the integers pointed to by those pointers. 

In the main function, declare two integer variables, initialize them with values, and then call the swap function to swap their values. 

Finally, print the values of the variables before and after the swap to verify the result.
*/

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
    
}



void main(){
    int a=3 , b=6;
    
    printf("a = %d, b =%d\n", a,b);
    swap(&a,&b);
    printf("new value after swap a = %d, b =%d", a,b);
    

}
