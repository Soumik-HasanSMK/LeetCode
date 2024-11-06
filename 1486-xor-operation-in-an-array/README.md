<h2><a href="https://leetcode.com/problems/xor-operation-in-an-array/">1486. XOR Operation in an Array</a></h2><h3>Easy</h3><hr><div><p>You are given an integer <code style="font-family: monospace, Bangla947, sans-serif;">n</code> and an integer <code style="font-family: monospace, Bangla947, sans-serif;">start</code>.</p>

<p>Define an array <code style="font-family: monospace, Bangla947, sans-serif;">nums</code> where <code style="font-family: monospace, Bangla947, sans-serif;">nums[i] = start + 2 * i</code> (<strong>0-indexed</strong>) and <code style="font-family: monospace, Bangla947, sans-serif;">n == nums.length</code>.</p>

<p>Return <em>the bitwise XOR of all elements of</em> <code style="font-family: monospace, Bangla947, sans-serif;">nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla947, sans-serif;"><strong>Input:</strong> n = 5, start = 0
<strong>Output:</strong> 8
<strong>Explanation:</strong> Array nums is equal to [0, 2, 4, 6, 8] where (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
Where "^" corresponds to bitwise XOR operator.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla947, sans-serif;"><strong>Input:</strong> n = 4, start = 3
<strong>Output:</strong> 8
<strong>Explanation:</strong> Array nums is equal to [3, 5, 7, 9] where (3 ^ 5 ^ 7 ^ 9) = 8.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla947, sans-serif;">1 &lt;= n &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla947, sans-serif;">0 &lt;= start &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla947, sans-serif;">n == nums.length</code></li>
</ul>
</div>