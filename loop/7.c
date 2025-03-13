#include <stdio.h>

int main (void) {
    char input[100];
    /* simple version
    for (int i = 1; ; i++)
    {
        scanf(" %c", &input);
        if(input != 'A') printf("Input %d: %c\n", i, input); 
        else break;
    }
    */
   int n = 0;
   do
   {
    scanf(" %c", &input[n]);
    if (input[n] == 'A') break;
    n++;
   } while (1);
   
   for (int i = 0; i < n; i++) {
    printf("Input %d: %c\n", i + 1, input[i]);
   }
}