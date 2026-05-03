/*
Given an array arr[] of integers, where each element arr[i] represents the number of pages in the i-th book.
You also have an integer k representing the number of students. The task is to allocate books to each student such that:

- Each student receives atleast one book.
- Each student is assigned a contiguous sequence of books.
- No book is assigned to more than one student.
- All books must be allocated.

The objective is to minimize the maximum number of pages assigned to any student.
In other words, out of all possible allocations, find the arrangement where the student who receives the most pages
still has the smallest possible maximum.

Note: If it is not possible to allocate books to all students, return -1.
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

bool canAllocate(vector<int> &arr, int k, int maxPages)
{
    int pages = 0, students = 1;
    for (int book : arr)
    {
        if (pages + book <= maxPages)
            pages += book;
        else
        {
            students++;
            if (students > k || book > maxPages)
                return false;
            pages = book;
        }
    }
    return true;
}

int findMinPages(vector<int> &arr, int k)
{
    if (k > arr.size())
        return -1;

    int start = *max_element(arr.begin(), arr.end());
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (canAllocate(arr, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 20, 30, 10};
    cout << findMinPages(arr, 2);
    return 0;
}