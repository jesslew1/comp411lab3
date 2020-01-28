// /* Example: analysis of text */

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX 1000 /* The maximum number of characters in a line of input */

// int main()
// {
//   char text[MAX], reverse[MAX];
//   int i;
//   int lowercase, uppercase, digits, other;
//   int length, revLength;
  
//   puts("Type some text (then ENTER):");

//   fgets(text, MAX, stdin);
//   length = strlen(text) - 1;
//   for (int i = 0; i <= length; i++){
//      reverse[i] = text[(length - 1) - i];
//   }
//   revLength = length + 1;
//   reverse[revLength] = '\0';
//   printf("Your input in reverse is:\n%s\n", reverse);
//   digits = 0;
//   for (int i = 0; i < length; i++){
//     if (text[i] != reverse[i]){
//           digits = 1;
//         break; 
//      } else {
//         digits = 0;
//         }
//   }
//   if (digits == 0){
//       printf("Found a palindrome!\n");
//   }
// }
/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX], text2[MAX], reverse2[MAX];
  int i, j;
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
  
  for (int i = 0; i < length; i++){
      if (!isspace(text[i]) || !ispunct(text[i]) || isalpha(text[i])){
          break;
      }
      if (!isspace(text[i]) && !ispunct(text[i]) && isalpha(text[i])){
          text2[i] = text[i];
      }
  }

for (i = 0; i <= strlen(text2); i++) {
		text2[i] = tolower(text2[i]);
}

length = strlen(text2) - 1;
  for (int i = 0; i <= length; i++){
     reverse2[i] = text2[(length - 1) - i];
  }
  revLength = strlen(text2);
  reverse2[revLength] = '\0';

  digits = 0;
  for (int i = 0; i < length; i++){
    if (text2[i] != reverse2[i]){
          digits = 1;
        break; 
     } else {
        digits = 0;
        }
  }
  if (digits == 0){
      printf("Found a palindrome!\n");
  }
}