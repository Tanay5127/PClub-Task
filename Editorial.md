# PClub-Task
https://polygon.codeforces.com/p9NRs9d/Tanay5127/zeroes-and-ones

#Editorial

To solve this problem , we can follow the following steps:
1. First, we have to count the number of zeroes and ones. Let's denote these counts as countZeros and countOnes, respectively.

2. If the absolute difference between countZeros and countOnes is greater than 1, it is not possible to create a good array. In such cases, we output -1.

3. If the creation of good array is possible, there are three cases to consider:

Case 1: If countZeros is greater than countOnes, we need to make zeros come first in the array. To do this, we iterate through the array, considering every second element   starting from the first one. If the current element is not zero, we increment the swap count. The final swap count represents the minimum number of swaps required.

Case 2: If countOnes is greater than countZeros, we need to make ones come first in the array. Similar to Case 1, we iterate through the array, considering every second       element starting from the first one. If the current element is not one, we increment the swap count.

Case 3: If both countZeros and countOnes are equal, we need to consider both possibilities and choose the one that results in the minimum number of swaps. We create two       variables, swapCountZeros and swapCountOnes, to keep track of the swap count for the respective cases. Similar to the previous cases, we iterate through the array,              considering every second element starting from the first one. In swapCountZeros, we increment the count if the current element is not zero, and in swapCountOnes, we increment the count if the current element is not one. Finally, we choose the minimum of swapCountZeros and swapCountOnes as the swapCount.

4. Finally, return swapCount.

   **Input**

   The first line of input contains integer *N*(0<N<2<sup>5</sup>) and followed by an array on N elements containing 0s and 1s.

   **Output**
   You have to output the minimum number of operation needed to make the array good.

   *Example*
   **Input**
   6
   
   1 0 1 1 0 0

   **Output**
   1

   **Input**
   6
   
   0 0 1 1 0 0

   **Output**
   -1

   **Input**
   10
   
   1 0 1 1 0 0 1 1 0 0

   **Output**
   2
   
   
   
