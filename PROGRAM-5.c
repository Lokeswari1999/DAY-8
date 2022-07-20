#include <stdio.h> 
// Function to sort the numbers using pointers 
void sort(int n, int* ptr) 
{ 
    int i, j, t; 
// Sort the numbers using pointers 
for (i = 0; i < n; i++) { 
for (j = i + 1; j < n; j++) { 
if (*(ptr + j) < *(ptr + i)) { 
//Do swap for sorting the variables.
t = *(ptr + i); 
*(ptr + i) = *(ptr + j); 
*(ptr + j) = t; 
} 
} 
} 
// print the numbers 
for (i = 0; i < n; i++) 
printf("%d ", *(ptr + i)); 
} 
// Driver code 
int main() 
{ 
//Declare the array variable.
int n = 5; 
int arr[] = { 25, 45, 89, 15, 82 }; 
sort(n, arr); //function calling.
return 0; 
}
