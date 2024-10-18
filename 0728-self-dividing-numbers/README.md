<h2><a href="https://leetcode.com/problems/self-dividing-numbers/">728. Self Dividing Numbers</a></h2><h3>Easy</h3><hr><div><p>A <strong>self-dividing number</strong> is a number that is divisible by every digit it contains.</p>

<ul>
	<li>For example, <code style="font-family: monospace, Bangla343, sans-serif;">128</code> is <strong>a self-dividing number</strong> because <code style="font-family: monospace, Bangla343, sans-serif;">128 % 1 == 0</code>, <code style="font-family: monospace, Bangla343, sans-serif;">128 % 2 == 0</code>, and <code style="font-family: monospace, Bangla343, sans-serif;">128 % 8 == 0</code>.</li>
</ul>

<p>A <strong>self-dividing number</strong> is not allowed to contain the digit zero.</p>

<p>Given two integers <code style="font-family: monospace, Bangla343, sans-serif;">left</code> and <code style="font-family: monospace, Bangla343, sans-serif;">right</code>, return <em>a list of all the <strong>self-dividing numbers</strong> in the range</em> <code style="font-family: monospace, Bangla343, sans-serif;">[left, right]</code> (both <strong>inclusive</strong>).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla343, sans-serif;"><strong>Input:</strong> left = 1, right = 22
<strong>Output:</strong> [1,2,3,4,5,6,7,8,9,11,12,15,22]
</pre><p><strong class="example">Example 2:</strong></p>
<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla343, sans-serif;"><strong>Input:</strong> left = 47, right = 85
<strong>Output:</strong> [48,55,66,77]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla343, sans-serif;">1 &lt;= left &lt;= right &lt;= 10<sup>4</sup></code></li>
</ul>
</div>