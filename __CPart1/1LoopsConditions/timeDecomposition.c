#include<stdio.h>
int main(void){

long timeInSeconds= 5600;
long remSeconds=timeInSeconds;

long h=remSeconds/3600;   //hours    
remSeconds = remSeconds-(h*3600);
//printf("%d\n",remSeconds);

long m=remSeconds/60; //minutes
remSeconds =remSeconds-(m*60);
//printf("%d\n",remSeconds);
//float s=timeInSeconds%60.0;

printf("%ld Seconds:\n%ldH:%dM:%ldSec\n",timeInSeconds,h,m,remSeconds);


return 0;

}