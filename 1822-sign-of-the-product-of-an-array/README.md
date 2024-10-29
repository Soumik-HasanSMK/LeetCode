<h2><a href="https://leetcode.com/problems/sign-of-the-product-of-an-array/">1822. Sign of the Product of an Array</a></h2><h3>Easy</h3><hr><div><p>Implement a function <code style="font-family: monospace, Bangla575, sans-serif;">signFunc(x)</code> that returns:</p>

<ul>
	<li><code style="font-family: monospace, Bangla575, sans-serif;">1</code> if <code style="font-family: monospace, Bangla575, sans-serif;">x</code> is positive.</li>
	<li><code style="font-family: monospace, Bangla575, sans-serif;">-1</code> if <code style="font-family: monospace, Bangla575, sans-serif;">x</code> is negative.</li>
	<li><code style="font-family: monospace, Bangla575, sans-serif;">0</code> if <code style="font-family: monospace, Bangla575, sans-serif;">x</code> is equal to <code style="font-family: monospace, Bangla575, sans-serif;">0</code>.</li>
</ul>

<p>You are given an integer array <code style="font-family: monospace, Bangla575, sans-serif;">nums</code>. Let <code style="font-family: monospace, Bangla575, sans-serif;">product</code> be the product of all values in the array <code style="font-family: monospace, Bangla575, sans-serif;">nums</code>.</p>

<p>Return <code style="font-family: monospace, Bangla575, sans-serif;">signFunc(product)</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla575, sans-serif;"><strong>Input:</strong> nums = [-1,-2,-3,-4,3,2,1]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The product of all values in the array is 144, and signFunc(144) = 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla575, sans-serif;"><strong>Input:</strong> nums = [1,5,0,2,-3]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The product of all values in the array is 0, and signFunc(0) = 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla575, sans-serif;"><strong>Input:</strong> nums = [-1,1,-1,1,-1]
<strong>Output:</strong> -1
<strong>Explanation:</strong> The product of all values in the array is -1, and signFunc(-1) = -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla575, sans-serif;">1 &lt;= nums.length &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla575, sans-serif;">-100 &lt;= nums[i] &lt;= 100</code></li>
</ul>
</div>