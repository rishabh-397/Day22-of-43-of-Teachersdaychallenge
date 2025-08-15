# Day22-of-43-of-Teachersdaychallenge

A. Kefa and First Steps
time limit per test2 seconds
memory limit per test256 megabytes
Kefa decided to make some money doing business on the Internet for exactly n days. He knows that on the i-th day (1 ≤ i ≤ n) he makes ai money. Kefa loves progress, that's why he wants to know the length of the maximum non-decreasing subsegment in sequence ai. Let us remind you that the subsegment of the sequence is its continuous fragment. A subsegment of numbers is called non-decreasing if all numbers in it follow in the non-decreasing order.

Help Kefa cope with this task!

Input
The first line contains integer n (1 ≤ n ≤ 105).

The second line contains n integers a1,  a2,  ...,  an (1 ≤ ai ≤ 109).

Output
Print a single integer — the length of the maximum non-decreasing subsegment of sequence a.

Examples

Input
6
2 2 1 3 4 1

Output
3

Input
3
2 2 9

Output
3


 Valera and Plates
time limit per test1 second
memory limit per test256 megabytes
Valera is a lazy student. He has m clean bowls and k clean plates.

Valera has made an eating plan for the next n days. As Valera is lazy, he will eat exactly one dish per day. At that, in order to eat a dish, he needs exactly one clean plate or bowl. We know that Valera can cook only two types of dishes. He can eat dishes of the first type from bowls and dishes of the second type from either bowls or plates.

When Valera finishes eating, he leaves a dirty plate/bowl behind. His life philosophy doesn't let him eat from dirty kitchenware. So sometimes he needs to wash his plate/bowl before eating. Find the minimum number of times Valera will need to wash a plate/bowl, if he acts optimally.

Input
The first line of the input contains three integers n, m, k (1 ≤ n, m, k ≤ 1000) — the number of the planned days, the number of clean bowls and the number of clean plates.

The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 2). If ai equals one, then on day i Valera will eat a first type dish. If ai equals two, then on day i Valera will eat a second type dish.

Output
Print a single integer — the minimum number of times Valera will need to wash a plate/bowl.

Examples

Input
3 1 1
1 2 1

Output
1

Input
4 3 1
1 1 1 1

Output
1

Input
3 1 2
2 2 2

Output
0

Input
8 2 2
1 2 1 2 1 2 1 2

Output
4
