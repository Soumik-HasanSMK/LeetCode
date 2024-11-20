<h2><a href="https://leetcode.com/problems/number-of-equivalent-domino-pairs/">1128. Number of Equivalent Domino Pairs</a></h2><h3>Easy</h3><hr><div><p>Given a list of <code style="font-family: monospace, Bangla698, sans-serif;">dominoes</code>, <code style="font-family: monospace, Bangla698, sans-serif;">dominoes[i] = [a, b]</code> is <strong>equivalent to</strong> <code style="font-family: monospace, Bangla698, sans-serif;">dominoes[j] = [c, d]</code> if and only if either (<code style="font-family: monospace, Bangla698, sans-serif;">a == c</code> and <code style="font-family: monospace, Bangla698, sans-serif;">b == d</code>), or (<code style="font-family: monospace, Bangla698, sans-serif;">a == d</code> and <code style="font-family: monospace, Bangla698, sans-serif;">b == c</code>) - that is, one domino can be rotated to be equal to another domino.</p>

<p>Return <em>the number of pairs </em><code style="font-family: monospace, Bangla698, sans-serif;">(i, j)</code><em> for which </em><code style="font-family: monospace, Bangla698, sans-serif;">0 &lt;= i &lt; j &lt; dominoes.length</code><em>, and </em><code style="font-family: monospace, Bangla698, sans-serif;">dominoes[i]</code><em> is <strong>equivalent to</strong> </em><code style="font-family: monospace, Bangla698, sans-serif;">dominoes[j]</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla698, sans-serif;"><strong>Input:</strong> dominoes = [[1,2],[2,1],[3,4],[5,6]]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla698, sans-serif;"><strong>Input:</strong> dominoes = [[1,2],[1,2],[1,1],[1,2],[2,2]]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla698, sans-serif;">1 &lt;= dominoes.length &lt;= 4 * 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla698, sans-serif;">dominoes[i].length == 2</code></li>
	<li><code style="font-family: monospace, Bangla698, sans-serif;">1 &lt;= dominoes[i][j] &lt;= 9</code></li>
</ul>
</div>