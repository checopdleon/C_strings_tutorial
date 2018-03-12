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

<p>The function <strong>malloc</strong> is used assign a set amount of memory for the arrays I'm crating.  What <strong>malloc</strong> does is ask for the memory from the heap.  If there is enough space the os gives me the amount of memory I asked for.
  </p>

<h3>Using Strings</h3>
<p>When asking for user input use <code>fgets</code> function instead of the <code>scanf</code> function bc <emphasize>scanf</emphasize> leads to buffer overflow problems - it doesn't know how big the array being inputted will be and so completes the string when it sees the first space character.
</p>
<h4>The advantages of using <code>fgets</code></h4>
<p>
<ul>
  <li> It can read from files, if the file's pointer is passed in. (interchangeable with 'stdin')</li>
  <li> Returns a string if a string is successfully read from either the file or the stdin.</li>
</ul>
</p>
<h4>HOW FGETS WORKS</h4>
<p>
It reads input until either the user hits enter or the buffer is full. Then it reads all the characters except for the enter, or in the case it becomes full it will read up to (size - 1). Then in either case adds a null escape-character to complete the string it will return.
</p>
  

<h2>To-Do's</h2><p>
[] Read up on string literals and how they behave.
