<h2><a href="https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/">1662. Check If Two String Arrays are Equivalent</a></h2><h3>Easy</h3><hr><div><p>Given two string arrays <code style="font-family: monospace, Bangla770, sans-serif;">word1</code> and <code style="font-family: monospace, Bangla770, sans-serif;">word2</code>, return<em> </em><code style="font-family: monospace, Bangla770, sans-serif;">true</code><em> if the two arrays <strong>represent</strong> the same string, and </em><code style="font-family: monospace, Bangla770, sans-serif;">false</code><em> otherwise.</em></p>

<p>A string is <strong>represented</strong> by an array if the array elements concatenated <strong>in order</strong> forms the string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla770, sans-serif;"><strong>Input:</strong> word1 = ["ab", "c"], word2 = ["a", "bc"]
<strong>Output:</strong> true
<strong>Explanation:</strong>
word1 represents string "ab" + "c" -&gt; "abc"
word2 represents string "a" + "bc" -&gt; "abc"
The strings are the same, so return true.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla770, sans-serif;"><strong>Input:</strong> word1 = ["a", "cb"], word2 = ["ab", "c"]
<strong>Output:</strong> false
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla770, sans-serif;"><strong>Input:</strong> word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
<strong>Output:</strong> true
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla770, sans-serif;">1 &lt;= word1.length, word2.length &lt;= 10<sup>3</sup></code></li>
	<li><code style="font-family: monospace, Bangla770, sans-serif;">1 &lt;= word1[i].length, word2[i].length &lt;= 10<sup>3</sup></code></li>
	<li><code style="font-family: monospace, Bangla770, sans-serif;">1 &lt;= sum(word1[i].length), sum(word2[i].length) &lt;= 10<sup>3</sup></code></li>
	<li><code style="font-family: monospace, Bangla770, sans-serif;">word1[i]</code> and <code style="font-family: monospace, Bangla770, sans-serif;">word2[i]</code> consist of lowercase letters.</li>
</ul>
</div>