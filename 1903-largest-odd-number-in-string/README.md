<h2><a href="https://leetcode.com/problems/largest-odd-number-in-string/">1903. Largest Odd Number in String</a></h2><h3>Easy</h3><hr><div><p>You are given a string <code style="font-family: monospace, Bangla1021, sans-serif;">num</code>, representing a large integer. Return <em>the <strong>largest-valued odd</strong> integer (as a string) that is a <strong>non-empty substring</strong> of </em><code style="font-family: monospace, Bangla1021, sans-serif;">num</code><em>, or an empty string </em><code style="font-family: monospace, Bangla1021, sans-serif;">""</code><em> if no odd integer exists</em>.</p>

<p>A <strong>substring</strong> is a contiguous sequence of characters within a string.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1021, sans-serif;"><strong>Input:</strong> num = "52"
<strong>Output:</strong> "5"
<strong>Explanation:</strong> The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1021, sans-serif;"><strong>Input:</strong> num = "4206"
<strong>Output:</strong> ""
<strong>Explanation:</strong> There are no odd numbers in "4206".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1021, sans-serif;"><strong>Input:</strong> num = "35427"
<strong>Output:</strong> "35427"
<strong>Explanation:</strong> "35427" is already an odd number.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla1021, sans-serif;">1 &lt;= num.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla1021, sans-serif;">num</code> only consists of digits and does not contain any leading zeros.</li>
</ul>
</div>