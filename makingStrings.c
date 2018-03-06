#include <stdio.h>

int main () {
  /* Codeblock_01: Compiled and printed out.
   */
  char isThisAString[50] = "I should be a string.";
  puts(isThisAString);

  
  /* Codeblock_02:
     initial compiling generated error - 
     "makingStings.c:17:21: error: array type 'char [50]' is not assignable"
   */
  // initialize the string
  char willThisBeAString[50];
  // simulate writing other code
  for(int i = 0; i<100; i++)
    puts("doing something else...");
  // delcare the string
  willThisBeAString = "I am also a string.";
  puts(willThisBeAString);
  
  return 0;
}