#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  char buf[MAX_BUF], charc;
  int length;
  // other stuff
  do {
       // read a line
       fgets(buf, MAX_BUF, stdin);
        // calculate its length
        length = strlen(buf) - 1;
        if (length == 0)
           break;
       // modify the line by switching characters
      for (int i = 0; i < MAX_BUF; i++){
          charc = buf[i];
		      if (charc == 'O'|| charc == 'o')
			      	buf[i] = '0';
          if (charc == 'I'|| charc == 'i')
				      buf[i] = '1';
          if (charc == 'E'|| charc == 'e')
				      buf[i] = '3';
          if (charc == 'S'|| charc == 's')
			      	buf[i] = '5';
		}
        // print the modified line
      printf("%s", buf);
  } while (length > 1);
}