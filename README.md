# C_strings_tutorial
This is where I'll keep my annotated exercises for the examples that I try out from https://www.cprogramming.com/tutorial/c/lesson9.html

<h2>Notes</h2>
<p>There's a difference between strings and string literals.
</p>
<p>The escape character, '\0', is always tacked onto the end of a string. The string
'Hello' really is 'Hello\0'. <strong> Be sure to account for this when allocating space. </strong> For 'Hello' the string initialization would be: <code> char string[50] </code>
</p>
<p><strong>Pointers</strong> to strings can be used to initialize strings too. So to use <bold>pointers</bold> to arrays I would write:
<code>
char *hello;
hello = malloc(sizeof(*hello) * 256);
</code>
And now I can use it as if it were an array.  Just remember to release the memory afterwards, with: <code>free (hello);</code>
</p>

<h2>To-Do's</h2><p>
[] Read up on string literals and how they behave.