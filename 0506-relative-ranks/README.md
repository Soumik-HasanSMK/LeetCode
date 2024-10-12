<h2><a href="https://leetcode.com/problems/relative-ranks/">506. Relative Ranks</a></h2><h3>Easy</h3><hr><div><p>You are given an integer array <code style="font-family: monospace, Bangla182, sans-serif;">score</code> of size <code style="font-family: monospace, Bangla182, sans-serif;">n</code>, where <code style="font-family: monospace, Bangla182, sans-serif;">score[i]</code> is the score of the <code style="font-family: monospace, Bangla182, sans-serif;">i<sup>th</sup></code> athlete in a competition. All the scores are guaranteed to be <strong>unique</strong>.</p>

<p>The athletes are <strong>placed</strong> based on their scores, where the <code style="font-family: monospace, Bangla182, sans-serif;">1<sup>st</sup></code> place athlete has the highest score, the <code style="font-family: monospace, Bangla182, sans-serif;">2<sup>nd</sup></code> place athlete has the <code style="font-family: monospace, Bangla182, sans-serif;">2<sup>nd</sup></code> highest score, and so on. The placement of each athlete determines their rank:</p>

<ul>
	<li>The <code style="font-family: monospace, Bangla182, sans-serif;">1<sup>st</sup></code> place athlete's rank is <code style="font-family: monospace, Bangla182, sans-serif;">"Gold Medal"</code>.</li>
	<li>The <code style="font-family: monospace, Bangla182, sans-serif;">2<sup>nd</sup></code> place athlete's rank is <code style="font-family: monospace, Bangla182, sans-serif;">"Silver Medal"</code>.</li>
	<li>The <code style="font-family: monospace, Bangla182, sans-serif;">3<sup>rd</sup></code> place athlete's rank is <code style="font-family: monospace, Bangla182, sans-serif;">"Bronze Medal"</code>.</li>
	<li>For the <code style="font-family: monospace, Bangla182, sans-serif;">4<sup>th</sup></code> place to the <code style="font-family: monospace, Bangla182, sans-serif;">n<sup>th</sup></code> place athlete, their rank is their placement number (i.e., the <code style="font-family: monospace, Bangla182, sans-serif;">x<sup>th</sup></code> place athlete's rank is <code style="font-family: monospace, Bangla182, sans-serif;">"x"</code>).</li>
</ul>

<p>Return an array <code style="font-family: monospace, Bangla182, sans-serif;">answer</code> of size <code style="font-family: monospace, Bangla182, sans-serif;">n</code> where <code style="font-family: monospace, Bangla182, sans-serif;">answer[i]</code> is the <strong>rank</strong> of the <code style="font-family: monospace, Bangla182, sans-serif;">i<sup>th</sup></code> athlete.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla182, sans-serif;"><strong>Input:</strong> score = [5,4,3,2,1]
<strong>Output:</strong> ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
<strong>Explanation:</strong> The placements are [1<sup>st</sup>, 2<sup>nd</sup>, 3<sup>rd</sup>, 4<sup>th</sup>, 5<sup>th</sup>].</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla182, sans-serif;"><strong>Input:</strong> score = [10,3,8,9,4]
<strong>Output:</strong> ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
<strong>Explanation:</strong> The placements are [1<sup>st</sup>, 5<sup>th</sup>, 3<sup>rd</sup>, 2<sup>nd</sup>, 4<sup>th</sup>].

</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla182, sans-serif;">n == score.length</code></li>
	<li><code style="font-family: monospace, Bangla182, sans-serif;">1 &lt;= n &lt;= 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla182, sans-serif;">0 &lt;= score[i] &lt;= 10<sup>6</sup></code></li>
	<li>All the values in <code style="font-family: monospace, Bangla182, sans-serif;">score</code> are <strong>unique</strong>.</li>
</ul>
</div>