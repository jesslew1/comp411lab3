/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], reverse[MAX], text2[MAX], reverse2[MAX];
  int i;
  int lowercase, uppercase, digits, other;
  int length, revLength;
  
  puts("Type some text (then ENTER):");

  fgets(text, MAX, stdin);
  length = strlen(text) - 1;
  for (int i = 0; i <= length; i++){
      reverse[i] = text[(length - 1) - i];
  }
//   revLength = length + 1;
//   reverse[revLength] = '\0';
  printf("Your input in reverse is:\n%s\n", reverse);

for (int i = 0; i <= length; i++){
    int j = 0;
    if (isspace(text[i]) || !isalpha(text[i]) || ispunct(text[i])){
        continue;
    } if (!isspace(text[i]) && isalpha(text[i]) && !ispunct(text[i])){
        text2[j] = text[i];
        j++;
    }
}
length = strlen(text2) -1;
for (int i =0; i < (length+1); i ++){
    text2[i] = toupper(text2[i]);
}
 for (int i = 0; i <= length; i++){
      reverse2[i] = text2[(length - 1) - i];
  }
// revLength = length + 1;
// reverse2[revLength] = '\0';

//   digits = 0;
  for (int i = 0; i < MAX; i++){
    if (reverse2[i] == text2[i]){
          digits = 0;
        // break; 
    } else {
        digits = 1;
    }
  }
  if (digits = 0){
      printf("Found a palindrome!\n");
  }


}