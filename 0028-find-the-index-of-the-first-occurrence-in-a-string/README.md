<h2><a href="https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/">28. Find the Index of the First Occurrence in a String</a></h2><h3>Easy</h3><hr><div><p>Given two strings <code style="font-family: monospace, Bangla260, sans-serif;">needle</code> and <code style="font-family: monospace, Bangla260, sans-serif;">haystack</code>, return the index of the first occurrence of <code style="font-family: monospace, Bangla260, sans-serif;">needle</code> in <code style="font-family: monospace, Bangla260, sans-serif;">haystack</code>, or <code style="font-family: monospace, Bangla260, sans-serif;">-1</code> if <code style="font-family: monospace, Bangla260, sans-serif;">needle</code> is not part of <code style="font-family: monospace, Bangla260, sans-serif;">haystack</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla260, sans-serif;"><strong>Input:</strong> haystack = "sadbutsad", needle = "sad"
<strong>Output:</strong> 0
<strong>Explanation:</strong> "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla260, sans-serif;"><strong>Input:</strong> haystack = "leetcode", needle = "leeto"
<strong>Output:</strong> -1
<strong>Explanation:</strong> "leeto" did not occur in "leetcode", so we return -1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla260, sans-serif;">1 &lt;= haystack.length, needle.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla260, sans-serif;">haystack</code> and <code style="font-family: monospace, Bangla260, sans-serif;">needle</code> consist of only lowercase English characters.</li>
</ul>
</div>