# 🟩 Day 2 – Majority Element

📌 **Problem:** [Majority Element](https://leetcode.com/problems/majority-element/)  
💻 **Language Used:** C  
🔢 **Problem Number:** LeetCode 169  
🧠 **Difficulty:** Easy  
📂 **Solution File:** [`169. Majority Element.c`](./169.%20Majority%20Element.c)

---

## 🔍 Problem Description

Given an array `nums` of size `n`, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times.  
It is guaranteed that the majority element always exists in the array.

---

## 💡 My Approach

I used the **Boyer-Moore Voting Algorithm**:

- Initialize `count = 0` and `temp = 0`
- Loop through the array:
  - If `count == 0`, set `temp` to the current number
  - If the current number equals `temp`, increment `count`
  - Otherwise, decrement `count`
- At the end, `temp` will contain the majority element

### ✏️ Code Highlights

```c
int majorityElement(int* nums, int numsSize) {
    int count = 0;
    int temp = 0;
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            temp = nums[i];
        }
        if (nums[i] == temp) {
            count++;
        } else {
            count--;
        }
    }
    return temp;
}
