<h2><a href="https://leetcode.com/problems/rearrange-characters-to-make-target-string/">2287. Rearrange Characters to Make Target String</a></h2><h3>Easy</h3><hr><div><p>You are given two <strong>0-indexed</strong> strings <code style="font-family: monospace, Bangla967, sans-serif;">s</code> and <code style="font-family: monospace, Bangla967, sans-serif;">target</code>. You can take some letters from <code style="font-family: monospace, Bangla967, sans-serif;">s</code> and rearrange them to form new strings.</p>

<p>Return<em> the <strong>maximum</strong> number of copies of </em><code style="font-family: monospace, Bangla967, sans-serif;">target</code><em> that can be formed by taking letters from </em><code style="font-family: monospace, Bangla967, sans-serif;">s</code><em> and rearranging them.</em></p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla967, sans-serif;"><strong>Input:</strong> s = "ilovecodingonleetcode", target = "code"
<strong>Output:</strong> 2
<strong>Explanation:</strong>
For the first copy of "code", take the letters at indices 4, 5, 6, and 7.
For the second copy of "code", take the letters at indices 17, 18, 19, and 20.
The strings that are formed are "ecod" and "code" which can both be rearranged into "code".
We can make at most two copies of "code", so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla967, sans-serif;"><strong>Input:</strong> s = "abcba", target = "abc"
<strong>Output:</strong> 1
<strong>Explanation:</strong>
We can make one copy of "abc" by taking the letters at indices 0, 1, and 2.
We can make at most one copy of "abc", so we return 1.
Note that while there is an extra 'a' and 'b' at indices 3 and 4, we cannot reuse the letter 'c' at index 2, so we cannot make a second copy of "abc".
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla967, sans-serif;"><strong>Input:</strong> s = "abbaccaddaeea", target = "aaaaa"
<strong>Output:</strong> 1
<strong>Explanation:</strong>
We can make one copy of "aaaaa" by taking the letters at indices 0, 3, 6, 9, and 12.
We can make at most one copy of "aaaaa", so we return 1.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla967, sans-serif;">1 &lt;= s.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla967, sans-serif;">1 &lt;= target.length &lt;= 10</code></li>
	<li><code style="font-family: monospace, Bangla967, sans-serif;">s</code> and <code style="font-family: monospace, Bangla967, sans-serif;">target</code> consist of lowercase English letters.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Note:</strong> This question is the same as <a href="https://leetcode.com/problems/maximum-number-of-balloons/description/" target="_blank"> 1189: Maximum Number of Balloons.</a></p>
</div>