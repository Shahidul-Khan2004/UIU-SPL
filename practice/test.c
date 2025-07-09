#include <stdio.h> 
#include <string.h> 
int main() { 
char str1[50] = "CS-1010"; 
char str2[50] = "Introduction to Programming"; 
int index = strlen(str1) / 2 - 1; 
for (int k = 0; index + k < strlen(str1); k += 2) { 
str1[index + k] = str2[k]; 
} 
strcat(str1, str2); 
if (strcmp(str2, str1) > 0) { 
strncat(str1, " Fun and engaging!", 19); 
} else { 
strncat(str2, " Fun and engaging!", 19); 
} 
printf("%s\n", str1); 
printf("%s\n", str2); 
return 0; 
} 