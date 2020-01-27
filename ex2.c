/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX];
  int i;
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
  for (int i = 0; i <= length; i++){
      digits = 0;
      if (reverse[i] != text[i]){
          digits = 1;
    //   } else {
    //       digits = 0;
      } else  if (digits == 0){
            printf("Found a palindrome!\n");
      }
  }
}