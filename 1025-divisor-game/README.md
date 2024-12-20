<h2><a href="https://leetcode.com/problems/divisor-game/">1025. Divisor Game</a></h2><h3>Easy</h3><hr><div><p>Alice and Bob take turns playing a game, with Alice starting first.</p>

<p>Initially, there is a number <code style="font-family: monospace, Bangla834, sans-serif;">n</code> on the chalkboard. On each player's turn, that player makes a move consisting of:</p>

<ul>
	<li>Choosing any <code style="font-family: monospace, Bangla834, sans-serif;">x</code> with <code style="font-family: monospace, Bangla834, sans-serif;">0 &lt; x &lt; n</code> and <code style="font-family: monospace, Bangla834, sans-serif;">n % x == 0</code>.</li>
	<li>Replacing the number <code style="font-family: monospace, Bangla834, sans-serif;">n</code> on the chalkboard with <code style="font-family: monospace, Bangla834, sans-serif;">n - x</code>.</li>
</ul>

<p>Also, if a player cannot make a move, they lose the game.</p>

<p>Return <code style="font-family: monospace, Bangla834, sans-serif;">true</code> <em>if and only if Alice wins the game, assuming both players play optimally</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla834, sans-serif;"><strong>Input:</strong> n = 2
<strong>Output:</strong> true
<strong>Explanation:</strong> Alice chooses 1, and Bob has no more moves.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla834, sans-serif;"><strong>Input:</strong> n = 3
<strong>Output:</strong> false
<strong>Explanation:</strong> Alice chooses 1, Bob chooses 1, and Alice has no more moves.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla834, sans-serif;">1 &lt;= n &lt;= 1000</code></li>
</ul>
</div>