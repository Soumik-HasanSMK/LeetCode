<h2><a href="https://leetcode.com/problems/top-k-frequent-words/">692. Top K Frequent Words</a></h2><h3>Medium</h3><hr><div><p>Given an array of strings <code style="font-family: monospace, Bangla373, sans-serif;">words</code> and an integer <code style="font-family: monospace, Bangla373, sans-serif;">k</code>, return <em>the </em><code style="font-family: monospace, Bangla373, sans-serif;">k</code><em> most frequent strings</em>.</p>

<p>Return the answer <strong>sorted</strong> by <strong>the frequency</strong> from highest to lowest. Sort the words with the same frequency by their <strong>lexicographical order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla373, sans-serif;"><strong>Input:</strong> words = ["i","love","leetcode","i","love","coding"], k = 2
<strong>Output:</strong> ["i","love"]
<strong>Explanation:</strong> "i" and "love" are the two most frequent words.
Note that "i" comes before "love" due to a lower alphabetical order.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla373, sans-serif;"><strong>Input:</strong> words = ["the","day","is","sunny","the","the","the","sunny","is","is"], k = 4
<strong>Output:</strong> ["the","is","sunny","day"]
<strong>Explanation:</strong> "the", "is", "sunny" and "day" are the four most frequent words, with the number of occurrence being 4, 3, 2 and 1 respectively.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla373, sans-serif;">1 &lt;= words.length &lt;= 500</code></li>
	<li><code style="font-family: monospace, Bangla373, sans-serif;">1 &lt;= words[i].length &lt;= 10</code></li>
	<li><code style="font-family: monospace, Bangla373, sans-serif;">words[i]</code> consists of lowercase English letters.</li>
	<li><code style="font-family: monospace, Bangla373, sans-serif;">k</code> is in the range <code style="font-family: monospace, Bangla373, sans-serif;">[1, The number of <strong>unique</strong> words[i]]</code></li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow-up:</strong> Could you solve it in <code style="font-family: monospace, Bangla373, sans-serif;">O(n log(k))</code> time and <code style="font-family: monospace, Bangla373, sans-serif;">O(n)</code> extra space?</p>
</div>