<h2><a href="https://leetcode.com/problems/most-frequent-number-following-key-in-an-array/">2190. Most Frequent Number Following Key In an Array</a></h2><h3>Easy</h3><hr><div><p>You are given a <strong>0-indexed</strong> integer array <code style="font-family: monospace, Bangla753, sans-serif;">nums</code>.<strong> </strong>You are also given an integer <code style="font-family: monospace, Bangla753, sans-serif;">key</code>, which is present in <code style="font-family: monospace, Bangla753, sans-serif;">nums</code>.</p>

<p>For every unique integer <code style="font-family: monospace, Bangla753, sans-serif;">target</code> in <code style="font-family: monospace, Bangla753, sans-serif;">nums</code>, <strong>count</strong> the number of times <code style="font-family: monospace, Bangla753, sans-serif;">target</code> immediately follows an occurrence of <code style="font-family: monospace, Bangla753, sans-serif;">key</code> in <code style="font-family: monospace, Bangla753, sans-serif;">nums</code>. In other words, count the number of indices <code style="font-family: monospace, Bangla753, sans-serif;">i</code> such that:</p>

<ul>
	<li><code style="font-family: monospace, Bangla753, sans-serif;">0 &lt;= i &lt;= nums.length - 2</code>,</li>
	<li><code style="font-family: monospace, Bangla753, sans-serif;">nums[i] == key</code> and,</li>
	<li><code style="font-family: monospace, Bangla753, sans-serif;">nums[i + 1] == target</code>.</li>
</ul>

<p>Return <em>the </em><code style="font-family: monospace, Bangla753, sans-serif;">target</code><em> with the <strong>maximum</strong> count</em>. The test cases will be generated such that the <code style="font-family: monospace, Bangla753, sans-serif;">target</code> with maximum count is unique.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla753, sans-serif;"><strong>Input:</strong> nums = [1,100,200,1,100], key = 1
<strong>Output:</strong> 100
<strong>Explanation:</strong> For target = 100, there are 2 occurrences at indices 1 and 4 which follow an occurrence of key.
No other integers follow an occurrence of key, so we return 100.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla753, sans-serif;"><strong>Input:</strong> nums = [2,2,2,2,3], key = 2
<strong>Output:</strong> 2
<strong>Explanation:</strong> For target = 2, there are 3 occurrences at indices 1, 2, and 3 which follow an occurrence of key.
For target = 3, there is only one occurrence at index 4 which follows an occurrence of key.
target = 2 has the maximum number of occurrences following an occurrence of key, so we return 2.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla753, sans-serif;">2 &lt;= nums.length &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla753, sans-serif;">1 &lt;= nums[i] &lt;= 1000</code></li>
	<li>The test cases will be generated such that the answer is unique.</li>
</ul>
</div>