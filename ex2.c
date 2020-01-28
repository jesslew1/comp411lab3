/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX];
  int i,j;
  int lowercase, uppercase, digits, other;
  int length, revLength;
  
  puts("Type some text (then ENTER):");

  fgets(text, MAX, stdin);
  length = strlen(text) - 1;
 for (int i = 0; i <= length; i++){
     reverse[i] = text[(length - 1) - i];
  }
  revLength = strlen(text);
  reverse[revLength] = '\0';
  printf("Your input in reverse is:\n%s\n", reverse);
  digits = 0;
  for (int i = 0; i < length; i++){
    if (text[i] != reverse[i]){
          digits = 1;
        break; 
     } else {
        digits = 0;
        }
  if (digits == 0){
      printf("Found a palindrome!\n");
  }
}