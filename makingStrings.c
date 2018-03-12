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
  for(int i = 0; i<10; i++)
    puts("doing something else...");
  // delcare the string
  // Part of me is tempted to initialize 'willThisBeAString' to a random number, but I'm afraid
  // that I'll corrupt the memory on my macbook. I'll leave this alone until I can run it on a
  // virtual machine or know enough about finding free memory on the macbook.
  willThisBeAString[0] = 'A';
  willThisBeAString[1] = 'm';
  willThisBeAString[2] = ' ';
  willThisBeAString[3] = 'I';
  willThisBeAString[4] = ' ';
  willThisBeAString[5] = 'a';
  willThisBeAString[6] = ' ';
  willThisBeAString[7] = 's';
  willThisBeAString[8] = 't';
  willThisBeAString[9] = 'r';
  willThisBeAString[10] = 'i';
  willThisBeAString[11] = 'n';
  willThisBeAString[12] = 'g';
  willThisBeAString[13] = '?';

  printf("%s\n", willThisBeAString );

  /*
  for (int i = 0; i < 50; i++) {
    printf("%c", willThisBeAString[i]);
  }*/

  //free(willThisBeAString);

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

     FOURTH ATTEMPT TO COMPILE generated 1 warning and 3 errors:
     makingStrings.c:32:21: error: array type 'char [50]' is not assignable
       willThisBeAString = "I am also a string.";
       ~~~~~~~~~~~~~~~~~ ^
     makingStrings.c:90:9: error: redefinition of 'willThisBeAString' with a different type: 'char *'          vs 'char [50]'
     char *willThisBeAString = malloc( sizeof(*willThisBeAnotherString) * 256);
           ^
     makingStrings.c:25:8: note: previous definition is here
     char willThisBeAString[50];
          ^
     makingStrings.c:90:45: error: use of undeclared identifier 'willThisBeAnotherString'; did you me     an 'willThisBeAString'?
     char *willThisBeAString = malloc( sizeof(*willThisBeAnotherString) * 256);
                                               ^~~~~~~~~~~~~~~~~~~~~~~
                                               willThisBeAString
     makingStrings.c:25:8: note: 'willThisBeAString' declared here
     char willThisBeAString[50];
          ^
     makingStrings.c:92:22: warning: incompatible pointer to integer conversion assigning to 'char' f     rom 'char [30]' [-Wint-conversion]
     *willThisBeAString = "This is an even bigger string";
                     ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

     FIFTH ATTEMPT TO COMPILE generated 1 warning and 2 errors
     makingStrings.c:30:23: error: expected expression
     willThisBeAString = {'I',' ','a','m',' ','a','l','s','o',' ','a',' ','s','t','r','i','n','g','.'     };
                       ^
     makingStrings.c:109:9: error: redefinition of 'willThisBeAString' with a different type: 'char *     ' vs 'char [50]'
     char *willThisBeAString = malloc( sizeof(*willThisBeAString) * 256);
           ^
     makingStrings.c:25:8: note: previous definition is here
     char willThisBeAString[50];
          ^
     makingStrings.c:111:22: warning: incompatible pointer to integer conversion assigning to 'char'      from 'char [30]' [-Wint-conversion]
     *willThisBeAString = "This is an even bigger string";
                        ^ ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
   */
  // declaring a string using pointers.
  // Initially I had problems declaring above and initializing here. Then I tried
  // declaring and initializing the variable 'willThisBeAnotherString' in the same line.
  // Now I went back to separate declaration and initialization be re-allocating memory.
  //  willThisBeAString = malloc( sizeof(*willThisBeAString) * 256);
  // freeing up the memory taken up by the string
  willThisBeAString = 'This is an even bigger string.';
  /*willThisBeAString[0] = 'T';
  willThisBeAString[1] = 'h';
  willThisBeAString[2] = 'i';
  willThisBeAString[3] = 's';
  willThisBeAString[4] = ' ';
  willThisBeAString[5] = 'i';
  willThisBeAString[6] = 's';
  willThisBeAString[7] = ' ';
  willThisBeAString[8] = 'a';
  willThisBeAString[9] = 'n';
  willThisBeAString[10] = ' ';
  willThisBeAString[11] = 'e';
  willThisBeAString[12] = 'v';
  willThisBeAString[13] = 'e';
  willThisBeAString[14] = 'n';
  willThisBeAString[15] = ' ';
  willThisBeAString[16] = 'b';
  willThisBeAString[17] = 'i';
  willThisBeAString[18] = 'g';
  willThisBeAString[19] = 'g';
  willThisBeAString[20] = 'e';
  willThisBeAString[21] = 'r';
  willThisBeAString[22] = ' ';
  willThisBeAString[23] = 's';
  willThisBeAString[24] = 't';
  willThisBeAString[25] = 'r';
  willThisBeAString[26] = 'i';
  willThisBeAString[27] = 'n';
  willThisBeAString[28] = 'g';
  willThisBeAString[29] = '.';*/

  printf("%s\n", willThisBeAString);
    
  /*for (int i = 0; i < 50; i++) {
    printf("%c", willThisBeAString[i]);
    }*/
  //free (willThisBeAString);
  
  return 0;
}
