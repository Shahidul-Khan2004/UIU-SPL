#include <stdio.h> 
#include <string.h> 
 
int fun(int *a, int *b){ 
if (*a > 1)  
return *a + *b; 
else  
return *b - *a; 
} 
int main(void) { 
int x = -10;  
int y = 20;  
printf("The result is %d", 
fun(&x, &y)); 
} 