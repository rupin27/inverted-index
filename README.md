# inverted-index
<h1 id="instructions">Description</h1>
<p>
In computer science, an inverted index (also referred to as a postings list, postings file, or inverted file) is a database index storing a mapping from content, such as words or numbers, to its locations in a table, or in a document or a set of documents (named in contrast to a forward index, which maps from documents to content). The purpose of an inverted index is to allow fast full-text searches, at a cost of increased processing when a document is added to the database. The inverted file may be the database file itself, rather than its index. It is the most popular data structure used in document retrieval systems,[1] used on a large scale for example in search engines. Additionally, several significant general-purpose mainframe-based database management systems have used inverted list architectures, including ADABAS, DATACOM/DB, and Model 204.
</p>

<h2 id="inverter-inputs">Inverter Inputs</h2>

<p>This inverter will take exactly one argument: a file that contains a
list of filenames.  Each filename will appear on a separate line.</p>

<p>Each of the files described in the first file will contain text that
you will build your index from. For example:</p>

<h3 id="inputstxt">inputs.txt</h3>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>foo1.txt
foo2.txt
</code></pre></div></div>

<h3 id="samp1txt">samp1.txt</h3>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code> this file contai5ns text
</code></pre></div></div>

<h3 id="samp2txt">samp2.txt</h3>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code> no wa3y! this file also contai5ns text
</code></pre></div></div>

<h2 id="output">Output</h2>

<p>The inverter will output a string of all of the words from all of the inputs, in “alphabetical” order, followed by the document numbers in which they appear, in order. For example:</p>

<div class="language-plaintext highlighter-rouge"><div class="highlight"><pre class="highlight"><code>word: 0 1
word1: 1
word2: 1
word3: 0
word4: 0 1
word5: 0 1
.
.
.
</code></pre></div></div>

<p>Alphabetical is defined as the order according to ascii. So “The” and “the” are separate words, and “The” comes first. Only certain words are indexed. Words are anything that is made up of only alpha
characters, and not numbers, spaces, etc. “Th3e” is two words, “Th” and “e”.</p>

<p>Files are incrementally numbered, starting with 0.  Only valid, openable files are included in the count. </p>
