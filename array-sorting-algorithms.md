# Array Sorting Algorithms 📊

**Sorting algorithms** are used to rearrange elements in an array in a specific order, usually ascending or descending. They are fundamental in computer science and appear in many real-world applications.

---

## Why Sorting Matters

Sorting is useful for:

- searching data faster
- organizing large collections of information
- preparing data for other algorithms
- improving readability of results

---

## Common Sorting Algorithms

### Unordered List

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

### Ordered List

1. Compare the array elements
2. Apply the sorting logic
3. Swap or move elements when needed
4. Repeat until the array is sorted

---

## Comparison Table

| Algorithm       | Time Complexity (Average) | Space Complexity | Stable |
|----------------|----------------------------|------------------|--------|
| Bubble Sort    | O(n²)                      | O(1)             | Yes    |
| Selection Sort | O(n²)                      | O(1)             | No     |
| Insertion Sort | O(n²)                      | O(1)             | Yes    |
| Merge Sort     | O(n log n)                 | O(n)             | Yes    |
| Quick Sort     | O(n log n)                 | O(log n)         | No     |
| Heap Sort      | O(n log n)                 | O(1)             | No     |

---

## Code Example

Here is a simple example (`bubble_sort.c`) of **Bubble Sort** in C:

```c
#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[] = {5, 2, 9, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
```

You can compile it with:
```
gcc bubble_sort.c -o bubble_sort 
```
---

## Useful Link

Learn more about sorting here:  
[Sorting algorithm - Wikipedia](https://en.wikipedia.org/wiki/Sorting_algorithm)

---

## More on array-sorting-algorithms

Here are even more examples of *array-sorting algorithms* and their time-space complexities:

![Sorting Illustration](Complexity.png)

---

## Fun Fact 😄

*Efficient sorting* can make a huge difference in performance when working with large arrays. Algorithms like **Merge Sort** and **Quick Sort** are much faster than **Bubble Sort** for large inputs. 

---

## Conclusion

Sorting algorithms are essential for understanding how data can be organized efficiently. Simple algorithms are easier to understand, while advanced ones are better for performance.

