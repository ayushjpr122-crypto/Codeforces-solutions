<h2><a href="https://codeforces.com/contest/2280/problem/E" target="_blank" rel="noopener noreferrer">2280E — Anti-Productive</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2280E](https://codeforces.com/contest/2280/problem/E) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">E. Anti-Productive</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ of length $$$n$$$ and a bound $$$\ell$$$. A pair of indices $$$1\le i  \lt  j \le n$$$ is called <span class="tex-font-style-it">dangerous</span> if $$$a_i \cdot a_j \ge \ell$$$.</p><p>In one operation, you can choose an index $$$i$$$ and decrease $$$a_i$$$ by $$$1$$$ (even if this makes $$$a_i$$$ zero or negative). Determine the minimum number of operations you have to apply to $$$a$$$ to make no pair of indices dangerous.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^3$$$). The description of the test cases follows.</p><p>The first line of each test case contains the integers $$$n$$$ and $$$\ell$$$ ($$$2\le n\le 5\cdot 10^5$$$, $$$1\le \ell\le 10^9$$$) — the number of integers in $$$a$$$ and the bound, respectively.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le 10^9$$$) — the elements of $$$a$$$.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases is at most $$$5\cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase, output a single integer: the minimum number of operations you have to perform on the array to make every pair of indices not dangerous.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005808791012272141" id="id0036366421479676336" class="input-output-copier">Copy</div></div><pre data-content="5
5 11
10 2 6 3 1
4 5
1 2 3 3
2 13
3 4
4 9
1 1 1 9
6 1000000000
1000000000 1000000000 1 1000000000 1000000000 1000000000
" id="id0005808791012272141"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">5 11</div><div class="test-example-line test-example-line-odd test-example-line-1">10 2 6 3 1</div><div class="test-example-line test-example-line-even test-example-line-2">4 5</div><div class="test-example-line test-example-line-even test-example-line-2">1 2 3 3</div><div class="test-example-line test-example-line-odd test-example-line-3">2 13</div><div class="test-example-line test-example-line-odd test-example-line-3">3 4</div><div class="test-example-line test-example-line-even test-example-line-4">4 9</div><div class="test-example-line test-example-line-even test-example-line-4">1 1 1 9</div><div class="test-example-line test-example-line-odd test-example-line-5">6 1000000000</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000000 1000000000 1 1000000000 1000000000 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006067769874225595" id="id005385772968167415" class="input-output-copier">Copy</div></div><pre data-content="8
2
0
1
3999999997
" id="id006067769874225595"><div class="test-example-line test-example-line-odd test-example-line-1">8</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-odd test-example-line-3">0</div><div class="test-example-line test-example-line-even test-example-line-4">1</div><div class="test-example-line test-example-line-odd test-example-line-5">3999999997</div></pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we can decrease each of the middle $$$3$$$ numbers down to $$$1$$$, which takes $$$1 + 5 + 2 = 8$$$ operations.</p><p>In the second example, we can decrease each of the last $$$2$$$ numbers down to $$$2$$$, which takes $$$2$$$ operations.</p></div>