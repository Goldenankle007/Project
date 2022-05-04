#include <stdio.h> 
 
int main() { 
  int intA[5]; 
  int sum = 0, i, average; 
 
  for(i=0; i<5; i++) { 
    printf( "Enter number : " ); 
    scanf( "%d", &intA[i] ); 
    sum += intA[i]; 
  } 
  
 	printf("Average is %d\n", sum/5);
 
  return 0; 
}
