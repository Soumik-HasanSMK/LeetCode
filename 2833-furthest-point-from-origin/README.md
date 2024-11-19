<h2><a href="https://leetcode.com/problems/furthest-point-from-origin/">2833. Furthest Point From Origin</a></h2><h3>Easy</h3><hr><div><p>You are given a string <code style="font-family: monospace, Bangla623, sans-serif;">moves</code> of length <code style="font-family: monospace, Bangla623, sans-serif;">n</code> consisting only of characters <code style="font-family: monospace, Bangla623, sans-serif;">'L'</code>, <code style="font-family: monospace, Bangla623, sans-serif;">'R'</code>, and <code style="font-family: monospace, Bangla623, sans-serif;">'_'</code>. The string represents your movement on a number line starting from the origin <code style="font-family: monospace, Bangla623, sans-serif;">0</code>.</p>

<p>In the <code style="font-family: monospace, Bangla623, sans-serif;">i<sup>th</sup></code> move, you can choose one of the following directions:</p>

<ul>
	<li>move to the left if <code style="font-family: monospace, Bangla623, sans-serif;">moves[i] = 'L'</code> or <code style="font-family: monospace, Bangla623, sans-serif;">moves[i] = '_'</code></li>
	<li>move to the right if <code style="font-family: monospace, Bangla623, sans-serif;">moves[i] = 'R'</code> or <code style="font-family: monospace, Bangla623, sans-serif;">moves[i] = '_'</code></li>
</ul>

<p>Return <em>the <strong>distance from the origin</strong> of the <strong>furthest</strong> point you can get to after </em><code style="font-family: monospace, Bangla623, sans-serif;">n</code><em> moves</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla623, sans-serif;"><strong>Input:</strong> moves = "L_RL__R"
<strong>Output:</strong> 3
<strong>Explanation:</strong> The furthest point we can reach from the origin 0 is point -3 through the following sequence of moves "LLRLLLR".
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla623, sans-serif;"><strong>Input:</strong> moves = "_R__LL_"
<strong>Output:</strong> 5
<strong>Explanation:</strong> The furthest point we can reach from the origin 0 is point -5 through the following sequence of moves "LRLLLLL".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla623, sans-serif;"><strong>Input:</strong> moves = "_______"
<strong>Output:</strong> 7
<strong>Explanation:</strong> The furthest point we can reach from the origin 0 is point 7 through the following sequence of moves "RRRRRRR".
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla623, sans-serif;">1 &lt;= moves.length == n &lt;= 50</code></li>
	<li><code style="font-family: monospace, Bangla623, sans-serif;">moves</code> consists only of characters <code style="font-family: monospace, Bangla623, sans-serif;">'L'</code>, <code style="font-family: monospace, Bangla623, sans-serif;">'R'</code> and <code style="font-family: monospace, Bangla623, sans-serif;">'_'</code>.</li>
</ul>
</div>