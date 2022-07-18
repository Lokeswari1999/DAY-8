#include <stdio.h> 
int main() 
{ 
   //Declare the variables(as per the given input).
   int n=0xf3,x,i;
   //Find out the value of T0PS2, T0PS1, T0PS0 bits in T0CON register
   for(i=2;i>=0;i--){ 
    x=(n>>i)&1; 
   //print the output.
   printf("%x",x); 
   } 
} 
