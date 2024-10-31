<h2><a href="https://leetcode.com/problems/sort-the-people/">2418. Sort the People</a></h2><h3>Easy</h3><hr><div><p>You are given an array of strings <code style="font-family: monospace, Bangla262, sans-serif;">names</code>, and an array <code style="font-family: monospace, Bangla262, sans-serif;">heights</code> that consists of <strong>distinct</strong> positive integers. Both arrays are of length <code style="font-family: monospace, Bangla262, sans-serif;">n</code>.</p>

<p>For each index <code style="font-family: monospace, Bangla262, sans-serif;">i</code>, <code style="font-family: monospace, Bangla262, sans-serif;">names[i]</code> and <code style="font-family: monospace, Bangla262, sans-serif;">heights[i]</code> denote the name and height of the <code style="font-family: monospace, Bangla262, sans-serif;">i<sup>th</sup></code> person.</p>

<p>Return <code style="font-family: monospace, Bangla262, sans-serif;">names</code><em> sorted in <strong>descending</strong> order by the people's heights</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla262, sans-serif;"><strong>Input:</strong> names = ["Mary","John","Emma"], heights = [180,165,170]
<strong>Output:</strong> ["Mary","Emma","John"]
<strong>Explanation:</strong> Mary is the tallest, followed by Emma and John.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla262, sans-serif;"><strong>Input:</strong> names = ["Alice","Bob","Bob"], heights = [155,185,150]
<strong>Output:</strong> ["Bob","Alice","Bob"]
<strong>Explanation:</strong> The first Bob is the tallest, followed by Alice and the second Bob.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla262, sans-serif;">n == names.length == heights.length</code></li>
	<li><code style="font-family: monospace, Bangla262, sans-serif;">1 &lt;= n &lt;= 10<sup>3</sup></code></li>
	<li><code style="font-family: monospace, Bangla262, sans-serif;">1 &lt;= names[i].length &lt;= 20</code></li>
	<li><code style="font-family: monospace, Bangla262, sans-serif;">1 &lt;= heights[i] &lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla262, sans-serif;">names[i]</code> consists of lower and upper case English letters.</li>
	<li>All the values of <code style="font-family: monospace, Bangla262, sans-serif;">heights</code> are distinct.</li>
</ul>
</div>