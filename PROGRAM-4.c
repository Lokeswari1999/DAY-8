#include<stdio.h> 
#include<stdlib.h> 
//Take two arguments and 1 is return value.
int flip_bits(int binaryval, int bitpos) 
{ 
//declare the variable as result.
int result; 
//From that bit position can be left shifted with 1 and which can be stored in temperory variable as mask(fun has to flip to the bit position).
int mask = (1<<bitpos);
//Then byte value xor with temperory variable mask that can store in binary value.
binaryval = binaryval^mask; 
//That stored byte value can be store in another variable as result.
result = binaryval; 
return result; 
} 
int main() 
{ 
         int binaryval, bitpos;
	 //Ask inputs binary value,bit position from the user. 
         printf("Enter binary value:\n"); 
         scanf("%x",&binaryval); 
         printf("Enter the bit pos:\n"); 
         scanf("%x",&bitpos); 
         int result = flip_bits(binaryval,bitpos); 
	 //print the result.
         printf("%x", result); 
} 
