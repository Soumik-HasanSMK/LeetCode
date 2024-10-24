<h2><a href="https://leetcode.com/problems/maximum-odd-binary-number/">2864. Maximum Odd Binary Number</a></h2><h3>Easy</h3><hr><div><p>You are given a <strong>binary</strong> string <code style="font-family: monospace, Bangla974, sans-serif;">s</code> that contains at least one <code style="font-family: monospace, Bangla974, sans-serif;">'1'</code>.</p>

<p>You have to <strong>rearrange</strong> the bits in such a way that the resulting binary number is the <strong>maximum odd binary number</strong> that can be created from this combination.</p>

<p>Return <em>a string representing the maximum odd binary number that can be created from the given combination.</em></p>

<p><strong>Note </strong>that the resulting string <strong>can</strong> have leading zeros.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla974, sans-serif;"><strong>Input:</strong> s = "010"
<strong>Output:</strong> "001"
<strong>Explanation:</strong> Because there is just one '1', it must be in the last position. So the answer is "001".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla974, sans-serif;"><strong>Input:</strong> s = "0101"
<strong>Output:</strong> "1001"
<strong>Explanation: </strong>One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla974, sans-serif;">1 &lt;= s.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla974, sans-serif;">s</code> consists only of <code style="font-family: monospace, Bangla974, sans-serif;">'0'</code> and <code style="font-family: monospace, Bangla974, sans-serif;">'1'</code>.</li>
	<li><code style="font-family: monospace, Bangla974, sans-serif;">s</code> contains at least one <code style="font-family: monospace, Bangla974, sans-serif;">'1'</code>.</li>
</ul>
</div>