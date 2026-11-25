# **ARRAY IN C – NOTES**

I can prepare the notes in `.txt` format. Here is the copy-ready content.

## **1. What is an Array?**

An array is a collection of elements of the same data type stored in continuous memory locations.

**Example:**

```
int a[5] = {10, 20, 30, 40, 50};
```

Array representation:

```
Index:    0    1    2    3    4
        +----+----+----+----+----+
Value:  | 10 | 20 | 30 | 40 | 50 |
        +----+----+----+----+----+
```

## **2. Declaration of Array**

**Syntax:**

```
data_type array_name[size];
```

**Examples:**

```
int marks[5];
float price[10];
char name[20];
```

## **3. Initialization of Array**

```
int a[5] = {10, 20, 30, 40, 50};
```

We can also initialize without specifying the size:

```
int a[] = {10, 20, 30};
```

## **4. Accessing Array Elements**

Array indexing starts from `0`.

```
printf("%d", a[0]);  // 10
printf("%d", a[2]);  // 30
```

## **5. Types of Arrays**

1. One-dimensional array
2. Two-dimensional array
3. Multidimensional array

### **One-dimensional Array**

Stores elements in a single sequence.

```
int a[5] = {1, 2, 3, 4, 5};
```

### **Two-dimensional Array**

Stores elements in rows and columns.

```
int a[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

Representation:

```
+---+---+---+
| 1 | 2 | 3 |
+---+---+---+
| 4 | 5 | 6 |
+---+---+---+
```

## **6. Traversing an Array**

Traversal means visiting each element of an array.

**Algorithm:**

1. Start.
2. Initialize `i = 0`.
3. Repeat while `i < n`.
4. Display `a[i]`.
5. Increment `i`.
6. Stop.

**C Program:**

```
#include <stdio.h>

int main()
{
    int a[100], n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array elements:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
```

## **7. Insertion in an Array**

Insertion means adding a new element at a specified position.

**Example:**

```
Before: 10 20 30 40
Insert 25 at position 3
After:  10 20 25 30 40
```

**C Program:**

```
#include <stdio.h>

int main()
{
    int a[100], n, i, pos, value;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position and value: ");
    scanf("%d %d", &pos, &value);

    if(pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = value;
    n++;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
```

## **8. Deletion in an Array**

Deletion means removing an element from a specified position.

**Example:**

```
Before: 10 20 30 40
Delete element at position 2
After:  10 30 40
```

**C Program:**

```
#include <stdio.h>

int main()
{
    int a[100], n, i, pos;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n)
    {
        printf("Invalid position");
        return 0;
    }

    for(i = pos - 1; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    printf("Updated array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
```

## **9. Advantages of Arrays**

- Easy to store multiple elements.
- Direct access using index.
- Simple to traverse and process.
- Efficient access to elements.

## **10. Disadvantages of Arrays**

- Fixed size in ordinary static arrays.
- Stores only elements of the same data type.
- Insertion and deletion can require shifting elements.
- Requires contiguous memory allocation.

## **11. Time Complexity**

| Operation              | Time complexity |
| ---------------------- | --------------- |
| Access by index        | O(1)            |
| Traversal              | O(n)            |
| Searching (linear)     | O(n)            |
| Insertion at beginning | O(n)            |
| Insertion at end       | O(1)\*          |
| Deletion at beginning  | O(n)            |
| Deletion at end        | O(1)\*          |

*Assuming available capacity and no resizing.*

## **12. Important Exam Questions**

1. Define an array.
2. Explain the advantages and disadvantages of arrays.
3. Differentiate between one-dimensional and two-dimensional arrays.
4. Write a C program to traverse an array.
5. Write a C program to insert an element into an array.
6. Write a C program to delete an element from an array.
7. Explain array representation in memory.
8. Explain the time complexity of array operations.

**To save as a TXT file:** Copy the notes into a text editor and save as `array_notes.txt`.
