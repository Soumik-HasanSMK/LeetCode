<h2><a href="https://leetcode.com/problems/split-the-array/">3046. Split the Array</a></h2><h3>Easy</h3><hr><div><p>You are given an integer array <code style="font-family: monospace, Bangla951, sans-serif;">nums</code> of <strong>even</strong> length. You have to split the array into two parts <code style="font-family: monospace, Bangla951, sans-serif;">nums1</code> and <code style="font-family: monospace, Bangla951, sans-serif;">nums2</code> such that:</p>

<ul>
	<li><code style="font-family: monospace, Bangla951, sans-serif;">nums1.length == nums2.length == nums.length / 2</code>.</li>
	<li><code style="font-family: monospace, Bangla951, sans-serif;">nums1</code> should contain <strong>distinct </strong>elements.</li>
	<li><code style="font-family: monospace, Bangla951, sans-serif;">nums2</code> should also contain <strong>distinct</strong> elements.</li>
</ul>

<p>Return <code style="font-family: monospace, Bangla951, sans-serif;">true</code><em> if it is possible to split the array, and </em><code style="font-family: monospace, Bangla951, sans-serif;">false</code> <em>otherwise</em><em>.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla951, sans-serif;"><strong>Input:</strong> nums = [1,1,2,2,3,4]
<strong>Output:</strong> true
<strong>Explanation:</strong> One of the possible ways to split nums is nums1 = [1,2,3] and nums2 = [1,2,4].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla951, sans-serif;"><strong>Input:</strong> nums = [1,1,1,1]
<strong>Output:</strong> false
<strong>Explanation:</strong> The only possible way to split nums is nums1 = [1,1] and nums2 = [1,1]. Both nums1 and nums2 do not contain distinct elements. Therefore, we return false.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla951, sans-serif;">1 &lt;= nums.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla951, sans-serif;">nums.length % 2 == 0 </code></li>
	<li><code style="font-family: monospace, Bangla951, sans-serif;">1 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>