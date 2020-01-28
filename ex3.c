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
  int length, revLength, length2, revLength2;
  
  puts("Type some text (then ENTER):");

  fgets(text, MAX, stdin);
  length = strlen(text) - 1;
  for (int i = 0; i <= length; i++){
      reverse[i] = text[(length - 1) - i];
  }

  printf("Your input in reverse is:\n%s\n", reverse);

for (int i = 0; i <= length; i++){
    if (isspace(text[i]) || !isalpha(text[i]) || ispunct(text[i])){
        continue;
    } if (!isspace(text[i]) && isalpha(text[i]) && !ispunct(text[i])){
        text2[i] = text[i];
    }
}
length2 = strlen(text2) - 1;

 for (int i = 0; i <= length2; i++){
      reverse2[i] = text2[(length2 - 1) - i];
  }
for (int i = 0; i < length; i++){
    if (text[i] == reverse[i] && text[i+3] == reverse[i+3]){
    printf("Found a palindrome!\n");
    break;
    }
}


}