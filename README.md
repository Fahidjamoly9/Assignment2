 HEAD
# Assignment2
=======
# Assignment 2 - Operating Systems

**Course Name:** Operating Systems  
**Semester:** A

## **Submitting Students**
- Name: [Fahid Jamoly][diana hbous]
- ID: [206403271][322911892]

## **Assignment Overview**
This assignment focuses on understanding the internal structure of a running program and the role of the operating system in managing resources. It includes:
- Analyzing memory sections (stack, heap, static memory).
- Understanding system limits using the `getrlimit` function.
- Exploring recursive function behavior and stack usage.

## **Included Files**
1. **`limits.c`**: Program to display system limits.
2. **`map.c` and `recur.c`**: Programs to analyze memory usage and recursion.
3. **`Open-Question-Responses.docx`**: Document with answers to theoretical questions.

## **Compilation and Execution**
To compile and run the programs:
1. **`limits.c`:**
   ```bash
   gcc -o limits limits.c
   ./limits

gcc -c map.c
gcc -c recur.c
gcc -o map map.o recur.o
./map
 e1fa37a (Initial commit - Added all files for Assignment 2)
