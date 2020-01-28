// /* Example: analysis of text */

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// #define MAX 1000 /* The maximum number of characters in a line of input */

// int main()
// {
//   char text[MAX], reverse[MAX], rev2[MAX], text2[MAX];
//   int i, j;
//   int lowercase, uppercase, digits, other;
//   int length, revLength;
  
//   puts("Type some text (then ENTER):");

//   fgets(text, MAX, stdin);
//   length = strlen(text) - 1;

//   for (int i = 0; i <= length; i++){
//       reverse[i] = text[(length - 1) - i];
//   }
//   revLength = strlen(text);
//   reverse[revLength] = '\0';
//   printf("Your input in reverse is:\n%s\n", reverse);



//   j = -1;

// for (i = 0; i <= length; i++) {
//     if (isspace(text[i]) || ispunct(text[i]) || !isalpha(text[i])) {
// 			continue;
// 		}
//     if (!isspace(text[i]) && !ispunct(text[i]) && isalpha(text[i])) {
// 			j++;
// 			text2[j] = text[i];
// 		} 
// }

//   for (i = 0; i <= strlen(text2); i++) {
// 		text2[i] = tolower(text2[i]);
//     }
//   length = strlen(text2) - 1;
//    for (int i = 0; i <= length; i++){
//       rev2[i] = text2[length - i];
//       // if doesnt work do (length -1)-i
//   }
//   revLength = strlen(text2);
//   rev2[revLength] = '\0';
//   digits = 0;
//   for (int i = 0; i < length; i++){
//     if (rev2[i] != text2[i]){
//         digits = 1;
//         break; 
//      } else {
//             digits = 0;
//         }
//   }
//   if (digits == 0){
//       printf("Found a palindrome!\n");
//   }
// }
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /*The maximum number of characters in a line of input */

int main(){
	char text[MAX], reverse[MAX], newtext[MAX], newrev[MAX];
	int i, nsp;
	int digits, other;
	int length, count, rlength;

	puts("Type some text (then ENTER):");

	/*Save typed characters in text[]: */

	fgets(text, MAX, stdin);
	
	length = strlen(text) - 1;
	count = length - 1;

	/* reverse the contents of text[]: */
	for (i = 0; i <= length; i++) {
		reverse[i] = text[count - i];
	}
	rlength = strlen(text);
	reverse[rlength] = '\0';

	printf("Your input in reverse is:\n");
	printf("%s\n", reverse);
	
	nsp = -1;
	
	/* checks for spaces, punctuation, or numbers in the original array*/
	for (i = 0; i <= length; i++) {
		if (isspace(text[i]) || ispunct(text[i]) || !isalpha(text[i])) {
			continue;
		}
		if (!isspace(text[i]) && !ispunct(text[i]) && isalpha(text[i])) {
			nsp++;
			newtext[nsp] = text[i];
		} 
	}


	/*changes all uppercase letters to lowercase*/
	for (i = 0; i <= strlen(newtext); i++) {
		newtext[i] = tolower(newtext[i]);
	}

	digits = 0;
	
	length = strlen(newtext) - 1;
	count = length - 1;
	/*reverse the contents of newtext[]:*/
	for (i = 0; i <= length; i++) {
		newrev[i] = newtext[length - i];
	}

	rlength = strlen(newtext);
	newrev[rlength] = '\0';

	for (i = 0; i < length; i++) {
		 if (newrev[i] == newtext[i]) {	
			 continue;
		} else {
			digits = 1;
		}
		
	}

	if (digits == 0) {
		printf("Found a palindrome!\n");
	}
}