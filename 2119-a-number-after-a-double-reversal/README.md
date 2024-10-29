<h2><a href="https://leetcode.com/problems/a-number-after-a-double-reversal/">2119. A Number After a Double Reversal</a></h2><h3>Easy</h3><hr><div><p><strong>Reversing</strong> an integer means to reverse all its digits.</p>

<ul>
	<li>For example, reversing <code style="font-family: monospace, Bangla551, sans-serif;">2021</code> gives <code style="font-family: monospace, Bangla551, sans-serif;">1202</code>. Reversing <code style="font-family: monospace, Bangla551, sans-serif;">12300</code> gives <code style="font-family: monospace, Bangla551, sans-serif;">321</code> as the <strong>leading zeros are not retained</strong>.</li>
</ul>

<p>Given an integer <code style="font-family: monospace, Bangla551, sans-serif;">num</code>, <strong>reverse</strong> <code style="font-family: monospace, Bangla551, sans-serif;">num</code> to get <code style="font-family: monospace, Bangla551, sans-serif;">reversed1</code>, <strong>then reverse</strong> <code style="font-family: monospace, Bangla551, sans-serif;">reversed1</code> to get <code style="font-family: monospace, Bangla551, sans-serif;">reversed2</code>. Return <code style="font-family: monospace, Bangla551, sans-serif;">true</code> <em>if</em> <code style="font-family: monospace, Bangla551, sans-serif;">reversed2</code> <em>equals</em> <code style="font-family: monospace, Bangla551, sans-serif;">num</code>. Otherwise return <code style="font-family: monospace, Bangla551, sans-serif;">false</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla551, sans-serif;"><strong>Input:</strong> num = 526
<strong>Output:</strong> true
<strong>Explanation:</strong> Reverse num to get 625, then reverse 625 to get 526, which equals num.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla551, sans-serif;"><strong>Input:</strong> num = 1800
<strong>Output:</strong> false
<strong>Explanation:</strong> Reverse num to get 81, then reverse 81 to get 18, which does not equal num.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla551, sans-serif;"><strong>Input:</strong> num = 0
<strong>Output:</strong> true
<strong>Explanation:</strong> Reverse num to get 0, then reverse 0 to get 0, which equals num.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla551, sans-serif;">0 &lt;= num &lt;= 10<sup>6</sup></code></li>
</ul>
</div>