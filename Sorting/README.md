# Sorting Algorithms – DSA

Sorting is a fundamental concept in **Data Structures and Algorithms (DSA)**.  
It involves arranging elements of a collection (array, list, etc.) in a specific order — **ascending** or **descending**.

Sorting is widely used to:
- Optimize searching algorithms
- Organize data efficiently
- Reduce complexity in other algorithms
- Solve real-world problems like ranking, scheduling, and data analysis

---

## 🔹 Types of Sorting Algorithms

### 1. Comparison-Based Sorting
These algorithms compare elements to determine their order.

- Bubble Sort
- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort

### 2. Non-Comparison-Based Sorting
These algorithms do not rely on element comparison.

- Counting Sort
- Radix Sort
- Bucket Sort

---

## 🔹 Sorting Algorithms Overview

| Algorithm        | Time Complexity (Avg) | Time Complexity (Worst) | Space Complexity | Stable |
|------------------|----------------------|-------------------------|------------------|--------|
| Bubble Sort      | O(n²)                | O(n²)                   | O(1)             | ✅ Yes |
| Selection Sort   | O(n²)                | O(n²)                   | O(1)             | ❌ No  |
| Insertion Sort   | O(n²)                | O(n²)                   | O(1)             | ✅ Yes |
| Merge Sort       | O(n log n)           | O(n log n)              | O(n)             | ✅ Yes |
| Quick Sort       | O(n log n)           | O(n²)                   | O(log n)         | ❌ No  |
| Heap Sort        | O(n log n)           | O(n log n)              | O(1)             | ❌ No  |
| Counting Sort    | O(n + k)             | O(n + k)                | O(k)             | ✅ Yes |

---

## 🔹 When to Use Which Sort?

- **Small datasets** → Insertion Sort
- **Large datasets** → Merge Sort / Quick Sort
- **Memory efficient** → Heap Sort
- **Nearly sorted data** → Insertion Sort
- **Integer range known** → Counting Sort / Radix Sort

