<h2><a href="https://leetcode.com/problems/check-if-two-chessboard-squares-have-the-same-color/">3274. Check if Two Chessboard Squares Have the Same Color</a></h2><h3>Easy</h3><hr><div><p>You are given two strings, <code style="font-family: monospace, Bangla336, sans-serif;">coordinate1</code> and <code style="font-family: monospace, Bangla336, sans-serif;">coordinate2</code>, representing the coordinates of a square on an <code style="font-family: monospace, Bangla336, sans-serif;">8 x 8</code> chessboard.</p>

<p>Below is the chessboard for reference.</p>

<p><img alt="" src="https://assets.leetcode.com/uploads/2024/07/17/screenshot-2021-02-20-at-22159-pm.png" style="width: 400px; height: 396px;"></p>

<p>Return <code style="font-family: monospace, Bangla336, sans-serif;">true</code> if these two squares have the same color and <code style="font-family: monospace, Bangla336, sans-serif;">false</code> otherwise.</p>

<p>The coordinate will always represent a valid chessboard square. The coordinate will always have the letter first (indicating its column), and the number second (indicating its row).</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="font-family: Menlo, Bangla336, sans-serif;">coordinate1 = "a1", coordinate2 = "c3"</span></p>

<p><strong>Output:</strong> <span class="example-io" style="font-family: Menlo, Bangla336, sans-serif;">true</span></p>

<p><strong>Explanation:</strong></p>

<p>Both squares are black.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="font-family: Menlo, Bangla336, sans-serif;">coordinate1 = "a1", coordinate2 = "h3"</span></p>

<p><strong>Output:</strong> <span class="example-io" style="font-family: Menlo, Bangla336, sans-serif;">false</span></p>

<p><strong>Explanation:</strong></p>

<p>Square <code style="font-family: monospace, Bangla336, sans-serif;">"a1"</code> is black and <code style="font-family: monospace, Bangla336, sans-serif;">"h3"</code> is white.</p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla336, sans-serif;">coordinate1.length == coordinate2.length == 2</code></li>
	<li><code style="font-family: monospace, Bangla336, sans-serif;">'a' &lt;= coordinate1[0], coordinate2[0] &lt;= 'h'</code></li>
	<li><code style="font-family: monospace, Bangla336, sans-serif;">'1' &lt;= coordinate1[1], coordinate2[1] &lt;= '8'</code></li>
</ul>
</div>