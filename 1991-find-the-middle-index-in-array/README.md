<h2><a href="https://leetcode.com/problems/find-the-middle-index-in-array/">1991. Find the Middle Index in Array</a></h2><h3>Easy</h3><hr><div><p>Given a <strong>0-indexed</strong> integer array <code style="font-family: monospace, Bangla241, sans-serif;">nums</code>, find the <strong>leftmost</strong> <code style="font-family: monospace, Bangla241, sans-serif;">middleIndex</code> (i.e., the smallest amongst all the possible ones).</p>

<p>A <code style="font-family: monospace, Bangla241, sans-serif;">middleIndex</code> is an index where <code style="font-family: monospace, Bangla241, sans-serif;">nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1]</code>.</p>

<p>If <code style="font-family: monospace, Bangla241, sans-serif;">middleIndex == 0</code>, the left side sum is considered to be <code style="font-family: monospace, Bangla241, sans-serif;">0</code>. Similarly, if <code style="font-family: monospace, Bangla241, sans-serif;">middleIndex == nums.length - 1</code>, the right side sum is considered to be <code style="font-family: monospace, Bangla241, sans-serif;">0</code>.</p>

<p>Return <em>the <strong>leftmost</strong> </em><code style="font-family: monospace, Bangla241, sans-serif;">middleIndex</code><em> that satisfies the condition, or </em><code style="font-family: monospace, Bangla241, sans-serif;">-1</code><em> if there is no such index</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla241, sans-serif;"><strong>Input:</strong> nums = [2,3,-1,<u>8</u>,4]
<strong>Output:</strong> 3
<strong>Explanation:</strong> The sum of the numbers before index 3 is: 2 + 3 + -1 = 4
The sum of the numbers after index 3 is: 4 = 4
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla241, sans-serif;"><strong>Input:</strong> nums = [1,-1,<u>4</u>]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The sum of the numbers before index 2 is: 1 + -1 = 0
The sum of the numbers after index 2 is: 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla241, sans-serif;"><strong>Input:</strong> nums = [2,5]
<strong>Output:</strong> -1
<strong>Explanation:</strong> There is no valid middleIndex.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla241, sans-serif;">1 &lt;= nums.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla241, sans-serif;">-1000 &lt;= nums[i] &lt;= 1000</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as&nbsp;724:&nbsp;<a href="https://leetcode.com/problems/find-pivot-index/" target="_blank">https://leetcode.com/problems/find-pivot-index/</a></p>
</div>