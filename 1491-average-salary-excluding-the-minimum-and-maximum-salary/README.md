<h2><a href="https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/">1491. Average Salary Excluding the Minimum and Maximum Salary</a></h2><h3>Easy</h3><hr><div><p>You are given an array of <strong>unique</strong> integers <code style="font-family: monospace, Bangla1028, sans-serif;">salary</code> where <code style="font-family: monospace, Bangla1028, sans-serif;">salary[i]</code> is the salary of the <code style="font-family: monospace, Bangla1028, sans-serif;">i<sup>th</sup></code> employee.</p>

<p>Return <em>the average salary of employees excluding the minimum and maximum salary</em>. Answers within <code style="font-family: monospace, Bangla1028, sans-serif;">10<sup>-5</sup></code> of the actual answer will be accepted.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1028, sans-serif;"><strong>Input:</strong> salary = [4000,3000,1000,2000]
<strong>Output:</strong> 2500.00000
<strong>Explanation:</strong> Minimum salary and maximum salary are 1000 and 4000 respectively.
Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre style="font-family: SFMono-Regular, Consolas, &quot;Liberation Mono&quot;, Menlo, Courier, monospace, Bangla1028, sans-serif;"><strong>Input:</strong> salary = [1000,2000,3000]
<strong>Output:</strong> 2000.00000
<strong>Explanation:</strong> Minimum salary and maximum salary are 1000 and 3000 respectively.
Average salary excluding minimum and maximum salary is (2000) / 1 = 2000
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code style="font-family: monospace, Bangla1028, sans-serif;">3 &lt;= salary.length &lt;= 100</code></li>
	<li><code style="font-family: monospace, Bangla1028, sans-serif;">1000 &lt;= salary[i] &lt;= 10<sup>6</sup></code></li>
	<li>All the integers of <code style="font-family: monospace, Bangla1028, sans-serif;">salary</code> are <strong>unique</strong>.</li>
</ul>
</div>