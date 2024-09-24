// 2 sorted arrays (nums1 and nums2) are given of size m + n and n respectively.
// merge both the arrays in num1 and the result should also be sorted
// for example:
// nums1 = [1, 3, 5, 0, 0, 0]  m = 3, n =3
// nums2 = [3, 4, 6]

// Naive Approach
// First merge both the arrays then sort using any sorting technique
// Worst Case O(n^2) or O(nlogn) depending on the sorting technique used

void mergeNaiveApproach(int nums1[], int nums2[], int m, int n)
{

    int i = m;
    int j = 0;

    while (i < m + n && j < n)
    {
        nums1[i] = nums2[j];
        i++;
        j++;
    }

    for (int i = 0; i < m + n; i++)
    {
        for (int j = 0; j < m + n - 1; j++)
        {
            if (nums1[j] > nums1[j + 1])
            {
                int temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }
}

// Optimum Approach: Using 3 pointers (i, j, k)
// i  pointer points to the m - 1 element
// j  pointer points to the n - 1 element
// k pointer points to the m + n - 1
// compare nums1[i] to nums2[j]
//      if nums1[i] is greater then nums1[k] = nums1[i], decrement i and k
//      else nums1[k] = nums2[j], decrement j and k
// then if any element of nums2 remains (this will happen when n > m)
//      assign all the remaining elements to nums1[k]

void mergeOptimumApporach(int nums1[], int nums2[], int m, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
            k--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}
