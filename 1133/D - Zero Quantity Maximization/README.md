<h2><a href="https://codeforces.com/contest/1133/problem/D" target="_blank" rel="noopener noreferrer">1133D — Zero Quantity Maximization</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1133D](https://codeforces.com/contest/1133/problem/D) |

## Topics
`hashing` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Zero Quantity Maximization</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays $$$a$$$ and $$$b$$$, each contains $$$n$$$ integers.</p><p>You want to create a new array $$$c$$$ as follows: choose some real (i.e. not necessarily integer) number $$$d$$$, and then for every $$$i \in [1, n]$$$ let $$$c_i := d \cdot a_i + b_i$$$.</p><p>Your goal is to maximize the number of zeroes in array $$$c$$$. What is the largest possible answer, if you choose $$$d$$$ optimally?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of elements in both arrays.</p><p>The second line contains $$$n$$$ integers $$$a_1$$$, $$$a_2$$$, ..., $$$a_n$$$ ($$$-10^9 \le a_i \le 10^9$$$).</p><p>The third line contains $$$n$$$ integers $$$b_1$$$, $$$b_2$$$, ..., $$$b_n$$$ ($$$-10^9 \le b_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum number of zeroes in array $$$c$$$, if you choose $$$d$$$ optimally.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009871248275124522" id="id0020104897788099152" class="input-output-copier">Copy</div></div><pre id="id0009871248275124522">5
1 2 3 4 5
2 4 7 11 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004087352961589409" id="id0014304707135435413" class="input-output-copier">Copy</div></div><pre id="id004087352961589409">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009095891619871929" id="id005287945165136679" class="input-output-copier">Copy</div></div><pre id="id009095891619871929">3
13 37 39
1 2 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007568461329560146" id="id0039659744963208665" class="input-output-copier">Copy</div></div><pre id="id007568461329560146">2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016469434359100055" id="id0043196788317676593" class="input-output-copier">Copy</div></div><pre id="id0016469434359100055">4
0 0 0 0
1 2 3 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005872431217968539" id="id008978123840813519" class="input-output-copier">Copy</div></div><pre id="id005872431217968539">0
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00882675763653556" id="id00633827202620264" class="input-output-copier">Copy</div></div><pre id="id00882675763653556">3
1 2 -1
-6 -12 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007313852423283129" id="id0010229856485674149" class="input-output-copier">Copy</div></div><pre id="id007313852423283129">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we may choose $$$d = -2$$$.</p><p>In the second example, we may choose $$$d = -\frac{1}{13}$$$.</p><p>In the third example, we cannot obtain any zero in array $$$c$$$, no matter which $$$d$$$ we choose.</p><p>In the fourth example, we may choose $$$d = 6$$$.</p></div>