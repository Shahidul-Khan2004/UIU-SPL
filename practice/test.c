#include <stdio.h> 
#include <string.h> 
int main() { 
char str1[50] = {'\0'}, str2[50] = "EXCELLENCE"; 
strcpy(str1, "ACHIEVEMENT"); 
int i = strlen(str1) * 0.5; 
for(int k = 0; str2[k] != '\0'; ++k) { 
str1[i + k] = str2[k]; 
} 
strrev(str1); 
strcat(str1, str2); 
if(strcmp(str2, str1) >= 0) { 
strcpy(str1, "STUDY HARD"); 
} else { 
strcpy(str2, "NEVER GIVE UP"); 
} 
return 0; 
} 