/*
Write a program that calculates and displays the result of 
an integer (n) raised to the power of another integer (p)
*/

int main(){

    int n = 5, power =4;
    int result =1;   
 
    for(int i = power;i>=1;i--)
        result *= n;
    
    printf("%d to the power %d = %d ", n, power, result);


    return 0;
}