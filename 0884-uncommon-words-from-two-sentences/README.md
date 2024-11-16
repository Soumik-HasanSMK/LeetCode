<h2><a href="https://leetcode.com/problems/uncommon-words-from-two-sentences/">884. Uncommon Words from Two Sentences</a></h2><h3>Easy</h3><hr><div><p>A <strong>sentence</strong> is a string of single-space separated words where each word consists only of lowercase letters.</p>

<p>A word is <strong>uncommon</strong> if it appears exactly once in one of the sentences, and <strong>does not appear</strong> in the other sentence.</p>

<p>Given two <strong>sentences</strong> <code style="font-family: monospace, Bangla143, sans-serif;">s1</code> and <code style="font-family: monospace, Bangla143, sans-serif;">s2</code>, return <em>a list of all the <strong>uncommon words</strong></em>. You may return the answer in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="font-family: Menlo, Bangla143, sans-serif;">s1 = "this apple is sweet", s2 = "this apple is sour"</span></p>

<p><strong>Output:</strong> <span class="example-io" style="font-family: Menlo, Bangla143, sans-serif;">["sweet","sour"]</span></p>

<p><strong>Explanation:</strong></p>

<p>The word <code style="font-family: monospace, Bangla143, sans-serif;">"sweet"</code> appears only in <code style="font-family: monospace, Bangla143, sans-serif;">s1</code>, while the word <code style="font-family: monospace, Bangla143, sans-serif;">"sour"</code> appears only in <code style="font-family: monospace, Bangla143, sans-serif;">s2</code>.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io" style="font-family: Menlo, Bangla143, sans-serif;">s1 = "apple apple", s2 = "banana"</span></p>

<p><strong>Output:</strong> <span class="example-io" style="font-family: Menlo, Bangla143, sans-serif;">["banana"]</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">1 &lt;= s1.length, s2.length &lt;= 200</code></li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">s1</code> and <code style="font-family: monospace, Bangla143, sans-serif;">s2</code> consist of lowercase English letters and spaces.</li>
	<li><code style="font-family: monospace, Bangla143, sans-serif;">s1</code> and <code style="font-family: monospace, Bangla143, sans-serif;">s2</code> do not have leading or trailing spaces.</li>
	<li>All the words in <code style="font-family: monospace, Bangla143, sans-serif;">s1</code> and <code style="font-family: monospace, Bangla143, sans-serif;">s2</code> are separated by a single space.</li>
</ul>
</div>