<h2><a href="https://leetcode.com/problems/minimum-increment-to-make-array-unique/">945. Minimum Increment to Make Array Unique</a></h2><h3>Medium</h3><hr><div><p>You are given an integer array <code style="font-family: monospace, Bangla1035, sans-serif;">nums</code>. In one move, you can pick an index <code style="font-family: monospace, Bangla1035, sans-serif;">i</code> where <code style="font-family: monospace, Bangla1035, sans-serif;">0 &lt;= i &lt; nums.length</code> and increment <code style="font-family: monospace, Bangla1035, sans-serif;">nums[i]</code> by <code style="font-family: monospace, Bangla1035, sans-serif;">1</code>.</p>

<p>Return <em>the minimum number of moves to make every value in </em><code style="font-family: monospace, Bangla1035, sans-serif;">nums</code><em> <strong>unique</strong></em>.</p>

<p>The test cases are generated so that the answer fits in a 32-bit integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1035, sans-serif;"><strong>Input:</strong> nums = [1,2,2]
<strong>Output:</strong> 1
<strong>Explanation:</strong> After 1 move, the array could be [1, 2, 3].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1035, sans-serif;"><strong>Input:</strong> nums = [3,2,1,2,1,7]
<strong>Output:</strong> 6
<strong>Explanation:</strong> After 6 moves, the array could be [3, 4, 1, 2, 5, 7].
It can be shown that it is impossible for the array to have all unique values with 5 or less moves.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code style="font-family: monospace, Bangla1035, sans-serif;">0 &lt;= nums[i] &lt;= 10<sup>5</sup></code></li>
</ul>
</div>