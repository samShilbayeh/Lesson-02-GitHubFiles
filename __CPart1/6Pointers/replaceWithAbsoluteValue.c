/*
Write a C program that replaces a given integer with its absolute value using a function.

 Declare a function named replaceWithAbsolute that takes an integer pointer as a parameter and modifies the value of the integer pointed to by converting it to its absolute value.

 In the main function, declare an integer variable, initialize it with a value, and then call the replaceWithAbsolute function to replace its value with the absolute value. 

Finally, print the original and updated values of the variable to verify the result.
*/


void replaceWithAbsolute (int *a){
    
    if (*a <0)
       *a *= -1;
    
}

void main(){
    int a=-3 ;
    
    printf("a = %d\n", a);
    replaceWithAbsolute(&a);
    printf("New value after function is %d", a);
    

}
