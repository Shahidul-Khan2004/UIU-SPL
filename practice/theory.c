#include <stdio.h> 
#include <string.h> 
 
void f(char *s1, char *s2, int n, int *a) {     
int i;      
for(i=0; i<n; i++) {          
if(s1[i] > s2[i]) *a = *a+1;            
else if(s1[i]<s2[i]) *(s1+i)=*(s2+i); 
else if(s1[i] == s2[i]) *a = *a-1; 
}  
}  
void main() {      
int a, b;      
char s1[] = "worldcupBangladesh";      
char s2[] = "BanglaWash";      
a = 0;      
f(s1,s2,13,&a);        
printf("%d\n s1=%s , s2=%s\n",a,s1,s2);  
} 