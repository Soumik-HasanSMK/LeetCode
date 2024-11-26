<h2><a href="https://leetcode.com/problems/unique-email-addresses/">929. Unique Email Addresses</a></h2><h3>Easy</h3><hr><div><p>Every <strong>valid email</strong> consists of a <strong>local name</strong> and a <strong>domain name</strong>, separated by the <code style="font-family: monospace, Bangla490, sans-serif;">'@'</code> sign. Besides lowercase letters, the email may contain one or more <code style="font-family: monospace, Bangla490, sans-serif;">'.'</code> or <code style="font-family: monospace, Bangla490, sans-serif;">'+'</code>.</p>

<ul>
	<li>For example, in <code style="font-family: monospace, Bangla490, sans-serif;">"alice@leetcode.com"</code>, <code style="font-family: monospace, Bangla490, sans-serif;">"alice"</code> is the <strong>local name</strong>, and <code style="font-family: monospace, Bangla490, sans-serif;">"leetcode.com"</code> is the <strong>domain name</strong>.</li>
</ul>

<p>If you add periods <code style="font-family: monospace, Bangla490, sans-serif;">'.'</code> between some characters in the <strong>local name</strong> part of an email address, mail sent there will be forwarded to the same address without dots in the local name. Note that this rule <strong>does not apply</strong> to <strong>domain names</strong>.</p>

<ul>
	<li>For example, <code style="font-family: monospace, Bangla490, sans-serif;">"alice.z@leetcode.com"</code> and <code style="font-family: monospace, Bangla490, sans-serif;">"alicez@leetcode.com"</code> forward to the same email address.</li>
</ul>

<p>If you add a plus <code style="font-family: monospace, Bangla490, sans-serif;">'+'</code> in the <strong>local name</strong>, everything after the first plus sign <strong>will be ignored</strong>. This allows certain emails to be filtered. Note that this rule <strong>does not apply</strong> to <strong>domain names</strong>.</p>

<ul>
	<li>For example, <code style="font-family: monospace, Bangla490, sans-serif;">"m.y+name@email.com"</code> will be forwarded to <code style="font-family: monospace, Bangla490, sans-serif;">"my@email.com"</code>.</li>
</ul>

<p>It is possible to use both of these rules at the same time.</p>

<p>Given an array of strings <code style="font-family: monospace, Bangla490, sans-serif;">emails</code> where we send one email to each <code style="font-family: monospace, Bangla490, sans-serif;">emails[i]</code>, return <em>the number of different addresses that actually receive mails</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla490, sans-serif;"><strong>Input:</strong> emails = ["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"]
<strong>Output:</strong> 2
<strong>Explanation:</strong> "testemail@leetcode.com" and "testemail@lee.tcode.com" actually receive mails.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla490, sans-serif;"><strong>Input:</strong> emails = ["a@leetcode.com","b@leetcode.com","c@leetcode.com"]
<strong>Output:</strong> 3
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla490, sans-serif;">1 &lt;= emails.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla490, sans-serif;">1 &lt;= emails[i].length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla490, sans-serif;">emails[i]</code> consist of lowercase English letters, <code style="font-family: monospace, Bangla490, sans-serif;">'+'</code>, <code style="font-family: monospace, Bangla490, sans-serif;">'.'</code> and <code style="font-family: monospace, Bangla490, sans-serif;">'@'</code>.</li>
	<li>Each <code style="font-family: monospace, Bangla490, sans-serif;">emails[i]</code> contains exactly one <code style="font-family: monospace, Bangla490, sans-serif;">'@'</code> character.</li>
	<li>All local and domain names are non-empty.</li>
	<li>Local names do not start with a <code style="font-family: monospace, Bangla490, sans-serif;">'+'</code> character.</li>
	<li>Domain names end with the <code style="font-family: monospace, Bangla490, sans-serif;">".com"</code> suffix.</li>
	<li>Domain names must contain at least one character before <code style="font-family: monospace, Bangla490, sans-serif;">".com"</code> suffix.</li>
</ul>
</div>