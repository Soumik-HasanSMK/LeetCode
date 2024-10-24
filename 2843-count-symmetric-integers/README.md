<h2><a href="https://leetcode.com/problems/count-symmetric-integers/">2843.   Count Symmetric Integers</a></h2><h3>Easy</h3><hr><div><p>You are given two positive integers <code style="font-family: monospace, Bangla598, sans-serif;">low</code> and <code style="font-family: monospace, Bangla598, sans-serif;">high</code>.</p>

<p>An integer <code style="font-family: monospace, Bangla598, sans-serif;">x</code> consisting of <code style="font-family: monospace, Bangla598, sans-serif;">2 * n</code> digits is <strong>symmetric</strong> if the sum of the first <code style="font-family: monospace, Bangla598, sans-serif;">n</code> digits of <code style="font-family: monospace, Bangla598, sans-serif;">x</code> is equal to the sum of the last <code style="font-family: monospace, Bangla598, sans-serif;">n</code> digits of <code style="font-family: monospace, Bangla598, sans-serif;">x</code>. Numbers with an odd number of digits are never symmetric.</p>

<p>Return <em>the <strong>number of symmetric</strong> integers in the range</em> <code style="font-family: monospace, Bangla598, sans-serif;">[low, high]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla598, sans-serif;"><strong>Input:</strong> low = 1, high = 100
<strong>Output:</strong> 9
<strong>Explanation:</strong> There are 9 symmetric integers between 1 and 100: 11, 22, 33, 44, 55, 66, 77, 88, and 99.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla598, sans-serif;"><strong>Input:</strong> low = 1200, high = 1230
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 4 symmetric integers between 1200 and 1230: 1203, 1212, 1221, and 1230.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla598, sans-serif;">1 &lt;= low &lt;= high &lt;= 10<sup>4</sup></code></li>
</ul>
</div>