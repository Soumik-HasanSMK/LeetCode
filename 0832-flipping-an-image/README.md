<h2><a href="https://leetcode.com/problems/flipping-an-image/">832. Flipping an Image</a></h2><h3>Easy</h3><hr><div><p>Given an <code style="font-family: monospace, Bangla844, sans-serif;">n x n</code> binary matrix <code style="font-family: monospace, Bangla844, sans-serif;">image</code>, flip the image <strong>horizontally</strong>, then invert it, and return <em>the resulting image</em>.</p>

<p>To flip an image horizontally means that each row of the image is reversed.</p>

<ul>
	<li>For example, flipping <code style="font-family: monospace, Bangla844, sans-serif;">[1,1,0]</code> horizontally results in <code style="font-family: monospace, Bangla844, sans-serif;">[0,1,1]</code>.</li>
</ul>

<p>To invert an image means that each <code style="font-family: monospace, Bangla844, sans-serif;">0</code> is replaced by <code style="font-family: monospace, Bangla844, sans-serif;">1</code>, and each <code style="font-family: monospace, Bangla844, sans-serif;">1</code> is replaced by <code style="font-family: monospace, Bangla844, sans-serif;">0</code>.</p>

<ul>
	<li>For example, inverting <code style="font-family: monospace, Bangla844, sans-serif;">[0,1,1]</code> results in <code style="font-family: monospace, Bangla844, sans-serif;">[1,0,0]</code>.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla844, sans-serif;"><strong>Input:</strong> image = [[1,1,0],[1,0,1],[0,0,0]]
<strong>Output:</strong> [[1,0,0],[0,1,0],[1,1,1]]
<strong>Explanation:</strong> First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla844, sans-serif;"><strong>Input:</strong> image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
<strong>Output:</strong> [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
<strong>Explanation:</strong> First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla844, sans-serif;">n == image.length</code></li>
	<li><code style="font-family: monospace, Bangla844, sans-serif;">n == image[i].length</code></li>
	<li><code style="font-family: monospace, Bangla844, sans-serif;">1 &lt;= n &lt;= 20</code></li>
	<li><code style="font-family: monospace, Bangla844, sans-serif;">images[i][j]</code> is either <code style="font-family: monospace, Bangla844, sans-serif;">0</code> or <code style="font-family: monospace, Bangla844, sans-serif;">1</code>.</li>
</ul>
</div>