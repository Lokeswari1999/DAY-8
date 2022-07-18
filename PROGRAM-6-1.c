#include<stdio.h> 

int main(){ 
    //Declare the 3 variables.
    int n=0xfb; 
    int pos=3; 
    int pos1=7;
    //logic for setting the bit 3 and bit 7. 
    n=n|(1<<pos)|(1<<pos1); 
    //print the outpt after setting the bit.
    printf("%x",n); 
} 
