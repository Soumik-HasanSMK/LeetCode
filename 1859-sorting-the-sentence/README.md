<h2><a href="https://leetcode.com/problems/sorting-the-sentence/">1859. Sorting the Sentence</a></h2><h3>Easy</h3><hr><div><p>A <strong>sentence</strong> is a list of words that are separated by a single space with no leading or trailing spaces. Each word consists of lowercase and uppercase English letters.</p>

<p>A sentence can be <strong>shuffled</strong> by appending the <strong>1-indexed word position</strong> to each word then rearranging the words in the sentence.</p>

<ul>
	<li>For example, the sentence <code style="font-family: monospace, Bangla496, sans-serif;">"This is a sentence"</code> can be shuffled as <code style="font-family: monospace, Bangla496, sans-serif;">"sentence4 a3 is2 This1"</code> or <code style="font-family: monospace, Bangla496, sans-serif;">"is2 sentence4 This1 a3"</code>.</li>
</ul>

<p>Given a <strong>shuffled sentence</strong> <code style="font-family: monospace, Bangla496, sans-serif;">s</code> containing no more than <code style="font-family: monospace, Bangla496, sans-serif;">9</code> words, reconstruct and return <em>the original sentence</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla496, sans-serif;"><strong>Input:</strong> s = "is2 sentence4 This1 a3"
<strong>Output:</strong> "This is a sentence"
<strong>Explanation:</strong> Sort the words in s to their original positions "This1 is2 a3 sentence4", then remove the numbers.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla496, sans-serif;"><strong>Input:</strong> s = "Myself2 Me1 I4 and3"
<strong>Output:</strong> "Me Myself and I"
<strong>Explanation:</strong> Sort the words in s to their original positions "Me1 Myself2 and3 I4", then remove the numbers.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla496, sans-serif;">2 &lt;= s.length &lt;= 200</code></li>
	<li><code style="font-family: monospace, Bangla496, sans-serif;">s</code> consists of lowercase and uppercase English letters, spaces, and digits from <code style="font-family: monospace, Bangla496, sans-serif;">1</code> to <code style="font-family: monospace, Bangla496, sans-serif;">9</code>.</li>
	<li>The number of words in <code style="font-family: monospace, Bangla496, sans-serif;">s</code> is between <code style="font-family: monospace, Bangla496, sans-serif;">1</code> and <code style="font-family: monospace, Bangla496, sans-serif;">9</code>.</li>
	<li>The words in <code style="font-family: monospace, Bangla496, sans-serif;">s</code> are separated by a single space.</li>
	<li><code style="font-family: monospace, Bangla496, sans-serif;">s</code> contains no leading or trailing spaces.</li>
</ul></div>