linked-lists

Remove Duplicates from Sorted List

You are given head of the non-empty sorted linked list where the value of the 
𝑖
𝑡
ℎ
i
th
 node will be 
𝐴
𝑖
A
i
	​

.

Your task is to delete all duplicates such that each element appears only once and return the linked list sorted.

Input:
First line will contain 
𝑇
T, number of test cases. Then the test cases follow.
The first line contains one integer 
𝑁
N — the length of the linked list.
The second line contains 
𝑁
N space separated integers 
𝐴
1
,
𝐴
2
,
…
𝐴
𝑁
A
1
	​

,A
2
	​

,…A
N
	​

 — the value of the linked list nodes starting from the head for the linked list.

Note:

For Java language, you need to:

Complete the function in the submit solution tab:

Node removeDuplicates(Node head){...}


 
 

For C++ language, you need to:

Complete the function in the submit solution tab:

Node* removeDuplicates(Node* head){...}


 
 

For Python language, you need to:

Complete the function in the submit solution tab:

def Node removeDuplicates(self, head):

Output:

The function you complete should return the required answer.

Constraints
1
≤
𝑇
≤
10
1≤T≤10
1
≤
𝑁
,
𝐴
𝑖
≤
10
5
1≤N,A
i
	​

≤10
5
Sample 1:
Input
Output
3
5
1 1 6 8 8
5
1 2 3 4 5
4
5 5 5 5
1 6 8 
1 2 3 4 5 
5 
Explanation:

Test case 
1
1: We will remove duplicate entry of 
1
1, 
8
8. So the sorted linked list will be 
1
→
6
→
8
1→6→8.

Test case 
2
2: There is no duplicate entry. So the sorted linked list will be 
1
→
2
→
3
→
4
→
5
1→2→3→4→5.

Test case 
3
3: We will remove duplicate entry of 
5
5. So the sorted linked list will be 
5
5.