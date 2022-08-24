# Search Algorithms and space complexity

## <b>Purpose of this repository</b>

Not even a single day pass, when we do not have to search for something in our day to day life, car keys, books, pen, mobile charger and what not. Same is the life of a computer, there is so much data stored in it, that whenever a user asks for some data, computer has to search it's memory to look for the data and make it available to the user. And the computer has it's own techniques to search through it's memory fast, which you we will learn more about in our repository of Search Algorithms.

- Sequential Search: In this, the list or array is traversed sequentially and every element is checked. For example: <u>Linear Search</u>
- Interval Search: These algorithms are specifically designed for searching in sorted data-structures. These type of searching algorithms are more efficient than Linear Search method, as they repeatedly target the center of the search structure and divide the search space in 2 half. For Example: <u>Binary Search.</u>

## <b>Linear Search</b>

Linear search (known as sequential search) is an algorithm for finding a target value within a list. It sequentially checks each element of the list for the target value until a match is found or until all the elements have been searched. This is one of the most basic search algorithms and is directly, inspired by real-life events.

<em>This is the search algorithm that will never fail in our Universe.</em>

 ### <b>Algorithm</b>

Steps involved in this algorithm are:

- <b>Step 1:</b> Select the first element as the current element.
- <b>Step 2:</b> Compare the current element with the target element. If matches, then go to step 5.
- <b>Step 3:</b> If there is a next element, then set current element to next element and go to Step 2.
- <b>Step 4:</b> Target element not found. Go to Step 6.
- <b>Step 5:</b> Target element found and return location. 
- <b>Step 6:</b> Exit process.

### <b>Complexity</b>

- Worst case time complexity: O(N)
- Average case time complexity: O(N)
- Best case time complexity: O(1)
- Space complexity: O(1)

In theory, Linear search in average makes <b>n/2</b> comparisons where <b>n</b> is the number of elements in the set. At the most, linear search algorithm takes <b>n comparisons.</b>

In terms of implementation, linear search algorithm takes <b>2n+1 comparisons</b> (n to check if target element is found and <b>n+1 comparisons</b> to check if end of list is reached) in the worst case. With optimizations, we can make <b>n+1 comparisons</b> in the worst case.

## <b>Binary Search</b>

Binary Search algorithm is an efficient comparison based search algorithm where the <b>key idea is to reduce the size of search space by half in every iteration</b> by exploiting a restriction on the search space that it is in sorted order. When suitable, binary search is choose over other search algorithms.

<b>The key idea</b>: a list is sorted and we compare a number with a random number from the list, we can say whether the potential match lies on the left or the right of the number.

When the number is the middle element, then we can reduce the number of potential matches by half.

### <b>Algorithm</b>
<b>The steps involved in Binary search algorithm are:</b><br>
<em>Pre-condition: The element list must be sorted.</em>

- <b>Step 1:</b> Find middle element of the array.
- <b>Step 2:</b> Compare the value of the middle element with the target value.
- <b>Step 3:</b> If they match, it is returned.
- <b>Step 4:</b> If the value is less or greater than the target, the search continues in the lower or upper half of the array accordingly.
- <b>Step 5:</b> The same procedure as in step 2-4 continues, but with a smaller part of the array. This continues until the target element is found or until there are no elements left.

### <b>Complexity</b>

- Worst case time complexity: O(log N)
- Average case time complexity: O(log N)
- Best case time complexity: O(1)
- Space complexity: O(1)

## <b>Jump Search</b>

Jump Search is a searching algorithm for sorted arrays. The basic idea is to check fewer elements by jumping ahead by fixed steps or skipping some elements in place of searching all elements.<br>
### <b>Algorithm</b>
<u>The steps involved in this algorithm are:</u>
*(Block size: B and list size: N; list is sorted in ascending order)*

- **Step 1:** Start from index 1
- **Step 2:** Jump head by B elements. Current position = Current position + B. If position is out of element list, set current position to last position.
- **Step 3:** If element at current position < target element, then do Linear Search on element from position current position -B to current position else go to step 2. If current position is last position, go to step 4.
- **Step 4:** Exit. Element not found.

**\\ How is the perfect block size √N? /**

*Consider the list to be of size N and Block size of size B.*

In the worst case, we have to do **N/B jumps** and if the element is not present, we perform **B-1 comparisons.** Therefore, the total number of comparisons in the worst case will be **((N/B) + B-1).** The value of the function **((N/B) + B-1)** will be minimum when **B = √N.**

Therefore, the best block size is B = √N.

**Complexity**
- Worst case time complexity: O(√N)
- Average case time complexity: O(√N)
- Best case time complexity: O(1)
- Space complexity: O(1)
