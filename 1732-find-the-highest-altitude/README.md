<h2><a href="https://leetcode.com/problems/find-the-highest-altitude/">1732. Find the Highest Altitude</a></h2><h3>Easy</h3><hr><div><p>There is a biker going on a road trip. The road trip consists of <code style="font-family: monospace, Bangla1042, sans-serif;">n + 1</code> points at different altitudes. The biker starts his trip on point <code style="font-family: monospace, Bangla1042, sans-serif;">0</code> with altitude equal <code style="font-family: monospace, Bangla1042, sans-serif;">0</code>.</p>

<p>You are given an integer array <code style="font-family: monospace, Bangla1042, sans-serif;">gain</code> of length <code style="font-family: monospace, Bangla1042, sans-serif;">n</code> where <code style="font-family: monospace, Bangla1042, sans-serif;">gain[i]</code> is the <strong>net gain in altitude</strong> between points <code style="font-family: monospace, Bangla1042, sans-serif;">i</code>​​​​​​ and <code style="font-family: monospace, Bangla1042, sans-serif;">i + 1</code> for all (<code style="font-family: monospace, Bangla1042, sans-serif;">0 &lt;= i &lt; n)</code>. Return <em>the <strong>highest altitude</strong> of a point.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1042, sans-serif;"><strong>Input:</strong> gain = [-5,1,5,0,-7]
<strong>Output:</strong> 1
<strong>Explanation:</strong> The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1042, sans-serif;"><strong>Input:</strong> gain = [-4,-3,-2,-1,4,3,2]
<strong>Output:</strong> 0
<strong>Explanation:</strong> The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla1042, sans-serif;">n == gain.length</code></li>
	<li><code style="font-family: monospace, Bangla1042, sans-serif;">1 &lt;= n &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla1042, sans-serif;">-100 &lt;= gain[i] &lt;= 100</code></li>
</ul>
</div>