<h2><a href="https://leetcode.com/problems/sort-array-by-parity-ii/">922. Sort Array By Parity II</a></h2><h3>Easy</h3><hr><div><p>Given an array of integers <code style="font-family: monospace, Bangla751, sans-serif;">nums</code>, half of the integers in <code style="font-family: monospace, Bangla751, sans-serif;">nums</code> are <strong>odd</strong>, and the other half are <strong>even</strong>.</p>

<p>Sort the array so that whenever <code style="font-family: monospace, Bangla751, sans-serif;">nums[i]</code> is odd, <code style="font-family: monospace, Bangla751, sans-serif;">i</code> is <strong>odd</strong>, and whenever <code style="font-family: monospace, Bangla751, sans-serif;">nums[i]</code> is even, <code style="font-family: monospace, Bangla751, sans-serif;">i</code> is <strong>even</strong>.</p>

<p>Return <em>any answer array that satisfies this condition</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla751, sans-serif;"><strong>Input:</strong> nums = [4,2,5,7]
<strong>Output:</strong> [4,5,2,7]
<strong>Explanation:</strong> [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla751, sans-serif;"><strong>Input:</strong> nums = [2,3]
<strong>Output:</strong> [2,3]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla751, sans-serif;">2 &lt;= nums.length &lt;= 2 * 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla751, sans-serif;">nums.length</code> is even.</li>
	<li>Half of the integers in <code style="font-family: monospace, Bangla751, sans-serif;">nums</code> are even.</li>
	<li><code style="font-family: monospace, Bangla751, sans-serif;">0 &lt;= nums[i] &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow Up:</strong> Could you solve it in-place?</p>
</div>