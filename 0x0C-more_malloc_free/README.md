# More Malloc and Free
This project is about using the function malloc and free for use the heap memory for dynamic allocation memory in C.

## Environment
All the functions written has been tested on ElementaryOS 5.1 Hera and compiled on gcc 7.5.0

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| 0-malloc_checked.c | script that alloc memory in heap using malloc |
| 1-string_nconcat.c | script that contain a function to concats two strings |
| 2-calloc.c     | script that contain a function that allocates memory from an array using malloc |
| 3-array_range.c | script that contain a function that creates an array of integers|

## How to Use
To run the C files, you need to use the gcc command to compile, like so:
```bash
$ gcc -Wall -pedantic -Werror -Wextra <FILE-NAME> -o <FILE-OUTPUT>
```
Example use for **2-calloc.c**.
```bash
$ gcc -Wall -pedantic -Werror -Wextra 2-calloc.c -o calloc
$ ./calloc
```

### Author
*Nicolas Ribeiro* - [Github](https://github.com/nikolasribeiro) || [Linkedin](https://www.linkedin.com/in/nicolas-sebastian-ribeiro/) || [Email](nikolas.sebastian.ribeiro@gmail.com)
