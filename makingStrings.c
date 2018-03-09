#include <stdio.h>
#include <stdlib.h>

int main () {
  /* Codeblock_01: Compiled and printed out.
   */
  char isThisAString[50] = "I should be a string.";
  puts(isThisAString);

  
  /* Codeblock_02:
     initial compiling generated error - 
     "makingStings.c:17:21: error: array type 'char [50]' is not assignable"

     second compiling generated 3 warnings and 2 errors -
     makingStrings.c:20:23: error: expected expression
     willThisBeAString = {I am also a string.};
                      ^
     makingStrings.c:21:3: warning: implicit declaration of function 'Puts' is invalid in C99
                         [-Wimplicit-function-declaration]
     Puts(willThisBeAString);
     ^
   */
  // initialize the string
  char willThisBeAString[50];
  // simulate writing other code
  for(int i = 0; i<100; i++)
    puts("doing something else...");
  // delcare the string
  //  willThisBeAString = {I am also a string.}; commented to compile after adding CodeBlock_03
  puts(willThisBeAString);

  /* Codeblock_03:
     initial compiling generated 2 warninngs and 1 error - 
     makingStrings.c:26:23: warning: implicitly declaring library function 'malloc' with type
          'void *(unsigned long)' [-Wimplicit-function-declaration]
     willThisBeAString = malloc( sizeof(*willThisBeAString) * 256);
                      ^
     makingStrings.c:26:23: note: include the header <stdlib.h> or explicitly provide a
          declaration for 'malloc'

     makingStrings.c:26:21: error: array type 'char [50]' is not assignable
     willThisBeAString = malloc( sizeof(*willThisBeAString) * 256);
     ~~~~~~~~~~~~~~~~~ ^

     makingStrings.c:28:3: warning: implicit declaration of function 'free' is invalid in C99
                         [-Wimplicit-function-declaration]
     free (willThisBeAString);

     SECOND ATTEMPT TO COMPILE  generated 2 warnings and 2 errors
     makingStrings.c:52:3: error: use of undeclared identifier
         'willThisBeAnotherString'; did you mean 'willThisBeAString'?
         willThisBeAnotherString = malloc( sizeof(*willThisBeAString) * 256);
	 ^~~~~~~~~~~~~~~~~~~~~~~
	 willThisBeAString

     makingStrings.c:24:8: note: 'willThisBeAString' declared here
     char willThisBeAString[50];
          ^
     makingStrings.c:52:29: warning: implicitly declaring library function 'malloc'
                with type 'void *(unsigned long)' [-Wimplicit-function-declaration]
     willThisBeAnotherString = malloc( sizeof(*willThisBeAString) * 256);
                               ^
     makingStrings.c:52:29: note: include the header <stdlib.h> or explicitly provide
                                                           a declaration for 'malloc'

     makingStrings.c:52:27: error: array type 'char [50]' is not assignable
     willThisBeAnotherString = malloc( sizeof(*willThisBeAString) * 256);
     ~~~~~~~~~~~~~~~~~~~~~~~ ^

     makingStrings.c:54:3: warning: implicit declaration of function 'free' is
                              invalid in C99 [-Wimplicit-function-declaration]
     free (willThisBeAString);
     ^

     THIRD ATTEMPT TO COMPILE  generated 1 error
     makingStrings.c:79:8: error: array initializer must be an initializer list or string
      literal
     char willThisBeAnotherString[] = malloc( sizeof(*willThisBeAString) * 256);
          ^
   */
  // declaring a string using pointers.
  // Initially I had used 'willThisBeAString' initialized above,
  // but now I'm declaring and initializing in the same line.
  char willThisBeAnotherString[] = malloc( sizeof(*willThisBeAString) * 256);
  // freeing up the memory taken up by the string
  free (willThisBeAString);
  
  return 0;
}
