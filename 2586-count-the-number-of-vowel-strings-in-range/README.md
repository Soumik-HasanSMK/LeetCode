<h2><a href="https://leetcode.com/problems/count-the-number-of-vowel-strings-in-range/">2586. Count the Number of Vowel Strings in Range</a></h2><h3>Easy</h3><hr><div><p>You are given a <strong>0-indexed</strong> array of string <code style="font-family: monospace, Bangla394, sans-serif;">words</code> and two integers <code style="font-family: monospace, Bangla394, sans-serif;">left</code> and <code style="font-family: monospace, Bangla394, sans-serif;">right</code>.</p>

<p>A string is called a <strong>vowel string</strong> if it starts with a vowel character and ends with a vowel character where vowel characters are <code style="font-family: monospace, Bangla394, sans-serif;">'a'</code>, <code style="font-family: monospace, Bangla394, sans-serif;">'e'</code>, <code style="font-family: monospace, Bangla394, sans-serif;">'i'</code>, <code style="font-family: monospace, Bangla394, sans-serif;">'o'</code>, and <code style="font-family: monospace, Bangla394, sans-serif;">'u'</code>.</p>

<p>Return <em>the number of vowel strings </em><code style="font-family: monospace, Bangla394, sans-serif;">words[i]</code><em> where </em><code style="font-family: monospace, Bangla394, sans-serif;">i</code><em> belongs to the inclusive range </em><code style="font-family: monospace, Bangla394, sans-serif;">[left, right]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla394, sans-serif;"><strong>Input:</strong> words = ["are","amy","u"], left = 0, right = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> 
- "are" is a vowel string because it starts with 'a' and ends with 'e'.
- "amy" is not a vowel string because it does not end with a vowel.
- "u" is a vowel string because it starts with 'u' and ends with 'u'.
The number of vowel strings in the mentioned range is 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla394, sans-serif;"><strong>Input:</strong> words = ["hey","aeo","mu","ooo","artro"], left = 1, right = 4
<strong>Output:</strong> 3
<strong>Explanation:</strong> 
- "aeo" is a vowel string because it starts with 'a' and ends with 'o'.
- "mu" is not a vowel string because it does not start with a vowel.
- "ooo" is a vowel string because it starts with 'o' and ends with 'o'.
- "artro" is a vowel string because it starts with 'a' and ends with 'o'.
The number of vowel strings in the mentioned range is 3.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla394, sans-serif;">1 &lt;= words.length &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla394, sans-serif;">1 &lt;= words[i].length &lt;= 10</code></li>
	<li><code style="font-family: monospace, Bangla394, sans-serif;">words[i]</code> consists of only lowercase English letters.</li>
	<li><code style="font-family: monospace, Bangla394, sans-serif;">0 &lt;= left &lt;= right &lt; words.length</code></li>
</ul>
</div>