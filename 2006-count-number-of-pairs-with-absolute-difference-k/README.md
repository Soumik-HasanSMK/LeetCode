<h2><a href="https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/">2006. Count Number of Pairs With Absolute Difference K</a></h2><h3>Easy</h3><hr><div><p>Given an integer array <code style="font-family: monospace, Bangla899, sans-serif;">nums</code> and an integer <code style="font-family: monospace, Bangla899, sans-serif;">k</code>, return <em>the number of pairs</em> <code style="font-family: monospace, Bangla899, sans-serif;">(i, j)</code> <em>where</em> <code style="font-family: monospace, Bangla899, sans-serif;">i &lt; j</code> <em>such that</em> <code style="font-family: monospace, Bangla899, sans-serif;">|nums[i] - nums[j]| == k</code>.</p>

<p>The value of <code style="font-family: monospace, Bangla899, sans-serif;">|x|</code> is defined as:</p>

<ul>
	<li><code style="font-family: monospace, Bangla899, sans-serif;">x</code> if <code style="font-family: monospace, Bangla899, sans-serif;">x &gt;= 0</code>.</li>
	<li><code style="font-family: monospace, Bangla899, sans-serif;">-x</code> if <code style="font-family: monospace, Bangla899, sans-serif;">x &lt; 0</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla899, sans-serif;"><strong>Input:</strong> nums = [1,2,2,1], k = 1
<strong>Output:</strong> 4
<strong>Explanation:</strong> The pairs with an absolute difference of 1 are:
- [<strong><u>1</u></strong>,<strong><u>2</u></strong>,2,1]
- [<strong><u>1</u></strong>,2,<strong><u>2</u></strong>,1]
- [1,<strong><u>2</u></strong>,2,<strong><u>1</u></strong>]
- [1,2,<strong><u>2</u></strong>,<strong><u>1</u></strong>]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla899, sans-serif;"><strong>Input:</strong> nums = [1,3], k = 3
<strong>Output:</strong> 0
<strong>Explanation:</strong> There are no pairs with an absolute difference of 3.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla899, sans-serif;"><strong>Input:</strong> nums = [3,2,1,5,4], k = 2
<strong>Output:</strong> 3
<b>Explanation:</b> The pairs with an absolute difference of 2 are:
- [<strong><u>3</u></strong>,2,<strong><u>1</u></strong>,5,4]
- [<strong><u>3</u></strong>,2,1,<strong><u>5</u></strong>,4]
- [3,<strong><u>2</u></strong>,1,5,<strong><u>4</u></strong>]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla899, sans-serif;">1 &lt;= nums.length &lt;= 200</code></li>
	<li><code style="font-family: monospace, Bangla899, sans-serif;">1 &lt;= nums[i] &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla899, sans-serif;">1 &lt;= k &lt;= 99</code></li>
</ul>
</div>