#include <stdio.h>

int main()
{
  // declare a long list
  // 'string' is the name; when the name is passed, the adress
  // is what is realy passed in without needing '&'
  char string[256];

  printf("Please enter a sentence:");

  // receive the input from the stdin
  fgets (string, 256, stdin);

  /* CodeBlock02
   * Added after initial compiling */
  // added to prevent fgets adding a newline escape-character bc
  // fgets newline automatically, unless there's no room for it
  for (int i = 0; i < 256; i++) {

    // replace the newline character in either case: added by
    // user or automatically inserted by fgets
    /* SECOND ATTEMPT TO RECOMPILE generated weird output and infinite loop
       
       ADDED CONDITION 'if i < 256' and 'else if block'.
       
       THIRD ATTEMPT TO COMPILE generated the same weird output.
       My theory is that something is broken near the upper boundary of the
       string received.
       
       REDUCED BY ONE THE 'i' WITHIN THE ELSE IF CONDITION*/
    // Codeblock03
      if( i < 256 & string[i] == '\n')
	{
	  string[i] = '\0';
	  break;
	}
      else if (i == 255 & string[i] != '\n')
	{
	  string[i] = '\0';
	  break;
	}
    }
  /* end of CodeBlock02 */

  printf( "You entered a this string:\n%s", string);

  //  getchar();// Why use getchar()? - SPDL

  return 0;
}
