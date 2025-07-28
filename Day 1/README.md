# 🟩 Day 1 – Remove Duplicates from Sorted Array

📌 **Problem:** [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)  
💻 **Language Used:** C  
🔢 **Problem Number:** LeetCode 26  
🧠 **Difficulty:** Easy  
📂 **Solution File:** [`26. Remove Duplicates from Sorted Array.c`](./26.%20Remove%20Duplicates%20from%20Sorted%20Array.c)

---

## 🔍 Problem Description

Given a **sorted** array of integers `nums`, your task is to remove the duplicates **in-place**, such that each element appears only once. The relative order of the elements should be maintained, and the result should use **O(1)** extra memory.

---

## 💡 My Approach

I used a **two-pointer technique**, slightly modified:

- `slow` is used to track the index of the next unique value to be placed.
- We loop through the array and compare `nums[i]` with `nums[i+1]` to detect duplicates.
- If they are **not equal**, the value is unique and we place it at `nums[slow]`.
- After the loop ends, we add the last element manually since it gets skipped in the loop.

### ✏️ Code Highlights

```c
int removeDuplicates(int* nums, int numsSize) {
    int slow = 0;
    int i;
    for (i = 0; i < numsSize - 1; i++) {
        printf("%d\n", nums[i]);
        if (nums[i] != nums[i + 1]) {
            nums[slow++] = nums[i];
        }
    }
    nums[slow++] = nums[i]; // Add the last unique element
    return slow;
}
