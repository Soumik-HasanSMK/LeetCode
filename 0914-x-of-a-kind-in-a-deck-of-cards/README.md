<h2><a href="https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/">914. X of a Kind in a Deck of Cards</a></h2><h3>Easy</h3><hr><div><p>You are given an integer array <code style="font-family: monospace, Bangla541, sans-serif;">deck</code> where <code style="font-family: monospace, Bangla541, sans-serif;">deck[i]</code> represents the number written on the <code style="font-family: monospace, Bangla541, sans-serif;">i<sup>th</sup></code> card.</p>

<p>Partition the cards into <strong>one or more groups</strong> such that:</p>

<ul>
	<li>Each group has <strong>exactly</strong> <code style="font-family: monospace, Bangla541, sans-serif;">x</code> cards where <code style="font-family: monospace, Bangla541, sans-serif;">x &gt; 1</code>, and</li>
	<li>All the cards in one group have the same integer written on them.</li>
</ul>

<p>Return <code style="font-family: monospace, Bangla541, sans-serif;">true</code><em> if such partition is possible, or </em><code style="font-family: monospace, Bangla541, sans-serif;">false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla541, sans-serif;"><strong>Input:</strong> deck = [1,2,3,4,4,3,2,1]
<strong>Output:</strong> true
<strong>Explanation</strong>: Possible partition [1,1],[2,2],[3,3],[4,4].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla541, sans-serif;"><strong>Input:</strong> deck = [1,1,1,2,2,2,3,3]
<strong>Output:</strong> false
<strong>Explanation</strong>: No possible partition.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla541, sans-serif;">1 &lt;= deck.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla541, sans-serif;">0 &lt;= deck[i] &lt; 10<sup>4</sup></code></li>
</ul>
</div>