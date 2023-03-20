#include <stdio.h>
#include <ctype.h>
int main(void){
char var;
printf( "Enter any char from keyboard ");
putchar ('\n'); // Move the crusher to next line

var = getchar();
  if(islower(var))
  {
  putchar(toupper(var));
	}
 else
 {
 putchar(tolower(var));
  }
return 0;
}
