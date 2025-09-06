<img height="50" align="right" src="https://raw.githubusercontent.com/fchavonet/fchavonet/refs/heads/main/assets/images/logo-holberton_school.webp" alt="Holberton School logo">

# C - Sorting Algorithms & Big O

## Table of contents

<details>
	<summary>
		CLICK TO ENLARGE 😇
	</summary>
	<a href="#description">Description</a>
	<br> 
	<a href="#objectives">Objectives</a>
	<br>
	<a href="#requirements">Requirements</a>
	<br>
	<a href="#instructions">Instructions</a>
	<br>
	<a href="#tech-stack">Tech stack</a>
	<br>
	<a href="#files-description">Files description</a>
	<br>
	<a href="#installation_and_how_to_use">Installation and how to use</a>
	<br>
	<a href="#thanks">Thanks</a>
	<br>
	<a href="#authors">Authors</a>
</details>

## <span id="description">Description</span>

Educational implementation of classic sorting algorithms in C (arrays and doubly linked lists), with step-by-step prints and Big-O analysis files for best/average/worst cases.

## <span id="objectives">Objectives</span>

At the end of this project, I should be able to explain to anyone, **without the help of Google**:

- At least four different sorting algorithms.
- What is the Big O notation, and how to evaluate the time complexity of an algorithm?
- How to select the best sorting algorithm for a given input?
- What is a stable sorting algorithm?

## <span id="requirements">Requirements</span>

- My programs and functions will be compiled with `gcc` using the flags `-Wall`, `-Werror`, `-Wextra`, `-pedantic` and `-std=gnu89`.
- All my files should end with a new line.
- My code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl).
- I am not allowed to use global variables.
- No more than 5 functions per file.
- Unless specified otherwise, I am not allowed to use the standard library. Any use of functions like `printf`, `puts`, … is totally forbidden.
- The prototypes of all my functions should be included in my header file called `sort.h`.
- All my header files should be include guarded.

## <span id="instructions">Instructions</span>

### Mandatory

<details>
	<summary>
		<b>0. Bubble sort</b>
	</summary>
	<br>

[![Watch the video](https://img.youtube.com/vi/lyZQPjUT5B4/hqdefault.jpg)](https://www.youtube.com/watch?v=lyZQPjUT5B4 "Watch on YouTube")

Write a function that sorts an array of integers in ascending order using the `Bubble sort` algorithm:

- Prototype: `void bubble_sort(int *array, size_t size);`.
- You’re expected to print the `array` after each time you swap two elements (see example below).

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

- In the best case.
- In the average case.
- In the worst case.

```bash
alex@/tmp/sort$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
alex@/tmp/sort$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$ 
```

#
**Repo:**
- GitHub repository: `holbertonschool-sorting_algorithms`.
- File: `0-bubble_sort.c`, `0-O`.
<hr>
</details>

<details>
	<summary>
		<b>1. Insertion sort</b>
	</summary>
	<br>

[![Watch the video](https://img.youtube.com/vi/ROalU379l3U/hqdefault.jpg)](https://www.youtube.com/watch?v=ROalU379l3U "Watch on YouTube")

Write a function that sorts a doubly linked list of integers in ascending order using the `Insertion sort` algorithm:

- Prototype: `void insertion_sort_list(listint_t **list);`.
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the `list` after each time you swap two elements (see example below).

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

- In the best case.
- In the average case.
- In the worst case.

```bash
alex@/tmp/sort$ cat 1-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
alex@/tmp/sort$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

#
**Repo:**
- GitHub repository: `holbertonschool-sorting_algorithms`.
- File: `1-insertion_sort_list.c`, `1-O`.
<hr>
</details>

<details>
	<summary>
		<b>2. Selection sort</b>
	</summary>
	<br>

[![Watch the video](https://img.youtube.com/vi/Ns4TPTC8whw/hqdefault.jpg)](https://www.youtube.com/watch?v=Ns4TPTC8whw "Watch on YouTube")

Write a function that sorts an array of integers in ascending order using the `Selection sort` algorithm:

- Prototype: `void selection_sort(int *array, size_t size);`.
- You’re expected to print the `array` after each time you swap two elements (see example below).

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

- In the best case.
- In the average case.
- In the worst case.

#
**Repo:**
- GitHub repository: `holbertonschool-sorting_algorithms`.
- File: `2-selection_sort.c`, `2-O`.
<hr>
</details>

<details>
	<summary>
		<b>3. Quick sort</b>
	</summary>
	<br>

[![Watch the video](https://img.youtube.com/vi/ywWBy6J5gz8/hqdefault.jpg)](https://www.youtube.com/watch?v=ywWBy6J5gz8 "Watch on YouTube")

Write a function that sorts an array of integers in ascending order using the `Quick sort` algorithm

- Prototype: `void quick_sort(int *array, size_t size);`.
- You must implement the `Lomuto` partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the `array` after each time you swap two elements (see example below).

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

- In the best case.
- In the average case.
- In the worst case.

```bash
alex@/tmp/sort$ cat 3-main.c
#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    quick_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
alex@/tmp/sort$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick

alex@/tmp/sort$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
alex@/tmp/sort$
```

#
**Repo:**
- GitHub repository: `holbertonschool-sorting_algorithms`.
- File: `3-quick_sort.c`, `3-O`.
<hr>
</details>

## <span id="tech-stack">Tech stack</span>

<p align="left">
    <img src="https://img.shields.io/badge/C-a8b9cc?logo=&logoColor=black&style=for-the-badge" alt="C badge">
    <img src="https://img.shields.io/badge/GIT-f05032?logo=git&logoColor=white&style=for-the-badge" alt="Git badge">
    <img src="https://img.shields.io/badge/GITHUB-181717?logo=github&logoColor=white&style=for-the-badge" alt="GitHub badge">
    <img src="https://img.shields.io/badge/MARKDOWN-000000?logo=markdown&logoColor=white&style=for-the-badge" alt="Markdown badge">
    <img src="https://img.shields.io/badge/VIM-019733?logo=vim&logoColor=white&style=for-the-badge" alt="VIM badge">
</p>

## <span id="files-description">Files description</span>

| **FILES**                 | **DESCRIPTION**                               |
| :-----------------------: | --------------------------------------------- |
| `0-O`                     | Big O for Bubble sort.                        |
| `0-bubble_sort.c`         | Bubble sort (arrays).                         |
| `1-O`                     | Big O for Insertion sort.                     |
| `1-insertion_sort_list.c` | Insertion sort (doubly linked list).          |
| `2-O`                     | Big O for Selection sort.                     |
| `2-selection_sort.c`      | Selection sort (arrays).                      |
| `3-O`                     | Big O for Quick sort (Lomuto).                |
| `3-quick_sort.c`          | Quick sort (Lomuto).                          |
| `print_array.c`           | Print arrays.                                 |
| `print_list`              | Print list.                                   |
| `sort.h`                  | Prototypes and structs.                       |
| `README.md`               | The README file you are currently reading 😉. |

## <span id="installation_and_how_to_use">Installation and how to use</span>

### Installation:

1. Clone this repository:
	- Open your preferred Terminal.
	- Navigate to the directory where you want to clone the repository.
	- Run the following command:

```bash
git clone https://github.com/fchavonet/holbertonschool-sorting_algorithms.git
```

2. Open the repository you've just cloned.

3. Build with gcc following the project flags.

> Refer to the <a href="#instructions">Instructions</a> section for task-specific details and expected outputs (and main files content).

### How to use:

1. Below are minimal compile/run examples using the provided sample main.c files (you may adapt paths as needed):

```bash
# Bubble sort (arrays).
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-bubble_sort.c print_array.c -o bubble
./bubble

# Insertion sort (doubly linked list).
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-insertion_sort_list.c print_list.c -o insertion
./insertion

# Selection sort (arrays).
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 2-main.c 2-selection_sort.c print_array.c -o select
./select

# Quick sort (Lomuto).
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 3-main.c 3-quick_sort.c print_array.c -o quick
./quick
```

## <span id="thanks">Thanks</span>

- A big thank you to all my Holberton School peers for their help and support throughout this project.

## <span id="authors">Authors</span>

**Fabien CHAVONET**
- GitHub: [@fchavonet](https://github.com/fchavonet)
