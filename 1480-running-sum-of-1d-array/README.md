<h2><a href="https://leetcode.com/problems/running-sum-of-1d-array/">1480. Running Sum of 1d Array</a></h2><h3>Easy</h3><hr><div><p>Given an array <code style="font-family: monospace, Bangla509, sans-serif;">nums</code>. We define a running sum of an array as&nbsp;<code style="font-family: monospace, Bangla509, sans-serif;">runningSum[i] = sum(nums[0]…nums[i])</code>.</p>

<p>Return the running sum of <code style="font-family: monospace, Bangla509, sans-serif;">nums</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla509, sans-serif;"><strong>Input:</strong> nums = [1,2,3,4]
<strong>Output:</strong> [1,3,6,10]
<strong>Explanation:</strong> Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla509, sans-serif;"><strong>Input:</strong> nums = [1,1,1,1,1]
<strong>Output:</strong> [1,2,3,4,5]
<strong>Explanation:</strong> Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla509, sans-serif;"><strong>Input:</strong> nums = [3,1,2,10,1]
<strong>Output:</strong> [3,4,6,16,17]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla509, sans-serif;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla509, sans-serif;">-10^6&nbsp;&lt;= nums[i] &lt;=&nbsp;10^6</code></li>
</ul>
</div>