<h2><a href="https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays/">1460. Make Two Arrays Equal by Reversing Subarrays</a></h2><h3>Easy</h3><hr><div><p>You are given two integer arrays of equal length <code style="font-family: monospace, Bangla195, sans-serif;">target</code> and <code style="font-family: monospace, Bangla195, sans-serif;">arr</code>. In one step, you can select any <strong>non-empty subarray</strong> of <code style="font-family: monospace, Bangla195, sans-serif;">arr</code> and reverse it. You are allowed to make any number of steps.</p>

<p>Return <code style="font-family: monospace, Bangla195, sans-serif;">true</code> <em>if you can make </em><code style="font-family: monospace, Bangla195, sans-serif;">arr</code><em> equal to </em><code style="font-family: monospace, Bangla195, sans-serif;">target</code><em>&nbsp;or </em><code style="font-family: monospace, Bangla195, sans-serif;">false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla195, sans-serif;"><strong>Input:</strong> target = [1,2,3,4], arr = [2,4,1,3]
<strong>Output:</strong> true
<strong>Explanation:</strong> You can follow the next steps to convert arr to target:
1- Reverse subarray [2,4,1], arr becomes [1,4,2,3]
2- Reverse subarray [4,2], arr becomes [1,2,4,3]
3- Reverse subarray [4,3], arr becomes [1,2,3,4]
There are multiple ways to convert arr to target, this is not the only way to do so.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla195, sans-serif;"><strong>Input:</strong> target = [7], arr = [7]
<strong>Output:</strong> true
<strong>Explanation:</strong> arr is equal to target without any reverses.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla195, sans-serif;"><strong>Input:</strong> target = [3,7,9], arr = [3,7,11]
<strong>Output:</strong> false
<strong>Explanation:</strong> arr does not have value 9 and it can never be converted to target.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla195, sans-serif;">target.length == arr.length</code></li>
	<li><code style="font-family: monospace, Bangla195, sans-serif;">1 &lt;= target.length &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla195, sans-serif;">1 &lt;= target[i] &lt;= 1000</code></li>
	<li><code style="font-family: monospace, Bangla195, sans-serif;">1 &lt;= arr[i] &lt;= 1000</code></li>
</ul>
</div>