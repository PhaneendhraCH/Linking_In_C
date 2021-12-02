# Static Linking in C (LINUX)

	What is a Library 
	
		-> Group of Pre Compiled codes called Functions
		-> To avoid Repetitions of code, package is created, called Library.
	
	-> In Linux, Static Library Files end with .a

	-> Linker makes a copy of all library functions to executable files.


## Files :

	** lib_add.c ** -> To add two interger numbers.

	** lib_sub.c ** -> To subtract two integer numbers.

	** calc.h ** -> It has Function declarations of lib_add.c and lib_sub.c

	** main.c ** -> Main File in C which includes both lib_add.c and lib_sub.c


## Compilation:

	** Compile lib_add.c **
		gcc -c lib_add.c -o lib_add.o
		
	** Compile lib_sub.c **
		gcc -c lib_sub.c -o lib_sub.o
		
	Create a Static Library includes both ** lib_add.c ** and **l ib_sub.c **

		** ar rcs lib_calc.a lib_add.o lib_sub.o **
		
		Here,
		** ar ** = archive, 
		
		** rcs* * = revision control system
		      rcs automates the storing, retrieval, logging, identification, and merging of revisions,
		
		** lib_calc.a ** = name of the static library file (including both lib_add and lib_sub)

	Compile main.c
		gcc -c main.c -o main.o
		gcc -o main main.o -L. lib_calc.a
		
	Execute :
		./main
		
	      
