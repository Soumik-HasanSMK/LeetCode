<h2><a href="https://leetcode.com/problems/count-items-matching-a-rule/">1773. Count Items Matching a Rule</a></h2><h3>Easy</h3><hr><div><p>You are given an array <code style="font-family: monospace, Bangla960, sans-serif;">items</code>, where each <code style="font-family: monospace, Bangla960, sans-serif;">items[i] = [type<sub>i</sub>, color<sub>i</sub>, name<sub>i</sub>]</code> describes the type, color, and name of the <code style="font-family: monospace, Bangla960, sans-serif;">i<sup>th</sup></code> item. You are also given a rule represented by two strings, <code style="font-family: monospace, Bangla960, sans-serif;">ruleKey</code> and <code style="font-family: monospace, Bangla960, sans-serif;">ruleValue</code>.</p>

<p>The <code style="font-family: monospace, Bangla960, sans-serif;">i<sup>th</sup></code> item is said to match the rule if <strong>one</strong> of the following is true:</p>

<ul>
	<li><code style="font-family: monospace, Bangla960, sans-serif;">ruleKey == "type"</code> and <code style="font-family: monospace, Bangla960, sans-serif;">ruleValue == type<sub>i</sub></code>.</li>
	<li><code style="font-family: monospace, Bangla960, sans-serif;">ruleKey == "color"</code> and <code style="font-family: monospace, Bangla960, sans-serif;">ruleValue == color<sub>i</sub></code>.</li>
	<li><code style="font-family: monospace, Bangla960, sans-serif;">ruleKey == "name"</code> and <code style="font-family: monospace, Bangla960, sans-serif;">ruleValue == name<sub>i</sub></code>.</li>
</ul>

<p>Return <em>the number of items that match the given rule</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla960, sans-serif;"><strong>Input:</strong> items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
<strong>Output:</strong> 1
<strong>Explanation:</strong> There is only one item matching the given rule, which is ["computer","silver","lenovo"].
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla960, sans-serif;"><strong>Input:</strong> items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]], ruleKey = "type", ruleValue = "phone"
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are only two items matching the given rule, which are ["phone","blue","pixel"] and ["phone","gold","iphone"]. Note that the item ["computer","silver","phone"] does not match.</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla960, sans-serif;">1 &lt;= items.length &lt;= 10<sup>4</sup></code></li>
	<li><code style="font-family: monospace, Bangla960, sans-serif;">1 &lt;= type<sub>i</sub>.length, color<sub>i</sub>.length, name<sub>i</sub>.length, ruleValue.length &lt;= 10</code></li>
	<li><code style="font-family: monospace, Bangla960, sans-serif;">ruleKey</code> is equal to either <code style="font-family: monospace, Bangla960, sans-serif;">"type"</code>, <code style="font-family: monospace, Bangla960, sans-serif;">"color"</code>, or <code style="font-family: monospace, Bangla960, sans-serif;">"name"</code>.</li>
	<li>All strings consist only of lowercase letters.</li>
</ul>
</div>