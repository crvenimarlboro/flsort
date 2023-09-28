FLSort (First-Last Sort) Algorithm
Overview
FLSort, short for First-Last Sort, is a simple sorting algorithm designed to sort an array by repeatedly comparing the first and last elements and swapping them if necessary. This process continues until the highest element "bubbles up" to the end of the sorted portion of the array. FLSort is a straightforward sorting technique that can be understood easily but is not the most efficient for large datasets.

How It Works
Start by comparing the first and last elements of the array.

If the first element is greater than the last element, swap them.

Continue this process, comparing and swapping adjacent elements until no more swaps are needed in a pass.

After each pass, the highest value will be at the end of the sorted portion of the array.

Repeat the process for the remaining unsorted portion of the array until the entire array is sorted.

Example
Let's take an example array: [2, 4, 5, 1, 3, 7, 8, 10, 9, 6].

In the first pass, 10 (the highest value) will move to the end of the array, as it's repeatedly compared and swapped with the adjacent elements.

In subsequent passes, the next highest values will move to their correct positions until the array is fully sorted.
