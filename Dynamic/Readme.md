# Dynamic Linking in C (LINUX)

	What is a Library 
	
		-> Group of Pre Compiled codes called Functions
		-> To avoid Repetitions of code, package is created, called Library.
	
	-> In Linux, Dynamic Library Files end with .so
	
	-> Dynamic Libraries are :
		
		-> Also Called as Shared Library
		-> They are Linked at Run Time
		-> Every Program can access this library, instead creating multiple copies for each program
	
	-> Linker makes a copy of all library functions to executable files.


## Files :

	lib_add.c -> To add two interger numbers.

	lib_sub.c -> To subtract two integer numbers.

	calc.h -> It has Function declarations of lib_add.c and lib_sub.c

	main.c -> Main File in C which includes both lib_add.c and lib_sub.c


## Compilation:

	Compile lib_add.c and lib_sub.c
	
		gcc -c lib_add.c lib_sub.c -fpic
		
		Here, .o files for both .c files will be created in a single command
		
		-fpic -> command which describes that the files are "Position Independent Code"	
		
	Create a Dynamic Library includes both lib_add.c and lib_sub.c
		
		gcc lib_add.o lib_sub.o -shared -o lib_calc.so
		
		Here,
		-shared indicates that these files are shared, 
		
		lib_calc.so -> The Dynamic Library Files end with .so

	Compile main.c
		gcc -c main.c -o main.o
		gcc -o main main.o -L. lib_calc.so
	
	We knew that these Dynamic Libraries are available at Run time 
	 -> so add these to lib path (As Path Variables in Windows)
	 
	 Command  : sudo cp lib_calc.so /usr/lib
	 	     
	 	    Here the lib_calc.so is been copied to "/usr/lib/" directory
		
	Execute :
	
		If you are executing using make command i.e. (make main) then ensure that 
		you have added the library file to "usr/lib" folder. You can do that by executing 
		below command
			sudo cp lib_calc.so /usr/lib
			
		./main
		
	      
