<h2><a href="https://leetcode.com/problems/clear-digits/">3174. Clear Digits</a></h2><h3>Easy</h3><hr><div><p>You are given a string <code style="font-family: monospace, Bangla499, sans-serif;">s</code>.</p>

<p>Your task is to remove <strong>all</strong> digits by doing this operation repeatedly:</p>

<ul>
	<li>Delete the <em>first</em> digit and the <strong>closest</strong> <b>non-digit</b> character to its <em>left</em>.</li>
</ul>

<p>Return the resulting string after removing all digits.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="font-family: Menlo, Bangla499, sans-serif;">s = "abc"</span></p>

<p><strong>Output:</strong> <span class="example-io" style="font-family: Menlo, Bangla499, sans-serif;">"abc"</span></p>

<p><strong>Explanation:</strong></p>

<p>There is no digit in the string.<!-- notionvc: ff07e34f-b1d6-41fb-9f83-5d0ba3c1ecde --></p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="font-family: Menlo, Bangla499, sans-serif;">s = "cb34"</span></p>

<p><strong>Output:</strong> <span class="example-io" style="font-family: Menlo, Bangla499, sans-serif;">""</span></p>

<p><strong>Explanation:</strong></p>

<p>First, we apply the operation on <code style="font-family: monospace, Bangla499, sans-serif;">s[2]</code>, and <code style="font-family: monospace, Bangla499, sans-serif;">s</code> becomes <code style="font-family: monospace, Bangla499, sans-serif;">"c4"</code>.</p>

<p>Then we apply the operation on <code style="font-family: monospace, Bangla499, sans-serif;">s[1]</code>, and <code style="font-family: monospace, Bangla499, sans-serif;">s</code> becomes <code style="font-family: monospace, Bangla499, sans-serif;">""</code>.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla499, sans-serif;">1 &lt;= s.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla499, sans-serif;">s</code> consists only of lowercase English letters and digits.</li>
	<li>The input is generated such that it is possible to delete all digits.</li>
</ul>
</div>