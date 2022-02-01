# inverted-index
<h1 id="instructions">Instructions</h1>

<h2 id="inverter-inputs">Inverter Inputs</h2>

<p>Your inverter will take exactly one argument: a file that contains a
list of filenames.  Each filename will appear on a separate line.</p>

<p>Each of the files described in the first file will contain text that
you will build your index from. For example:</p>

<h3 id="inputstxt">inputs.txt</h3>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>foo1.txt
foo2.txt
</code></pre></div></div>

<h3 id="foo1txt">foo1.txt</h3>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>this is a test. cool.
</code></pre></div></div>

<h3 id="foo2txt">foo2.txt</h3>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>this is also a test.
boring.
</code></pre></div></div>

<h2 id="output">Output</h2>

<p>Your inverter should output a string of all of the words from all of the inputs, in “alphabetical” order, followed by the document numbers in which they appear, in order. For example (note: your program must
produce exactly this output):</p>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>a: 0 1
also: 1
boring: 1
cool: 0
is: 0 1
test: 0 1
this: 0 1
</code></pre></div></div>

<p>Alphabetical is defined as the order according to ascii. So “The” and “the” are separate words, and “The” comes first. Only certain words should be indexed. Words are anything that is made up of only alpha
characters, and not numbers, spaces, etc. “Th3e” is two words, “Th” and “e”.</p>

<p>Files are incrementally numbered, starting with 0.  Only valid, openable files should be included in the count. (is_open comes in handy here)</p>

<p>Your program should absolutely not produce any other output. Extraneous output, or output formatted incorrectly (extra spaces etc.) will make the autograder mark your solution as incorrect. Please
leave yourself extra days to work these problems out.</p>

<p>Remember, your program needs to be robust to errors.  Files may be empty, etc. Please handle these cases gracefully (silently) and with no extra
output.</p>

<p>The noskipws operator may be useful in parsing the input:</p>
