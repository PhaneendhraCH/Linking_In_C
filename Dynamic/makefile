main : main.o lib_calc.so		           # add dynamic library to target(main)
	gcc -o main main.o -L. lib_calc.so

main.o : main.c 			           # compile main.c
	 gcc -c main.c -o main.o

lib_calc.so: lib_add.o lib_sub.o		  # creating dynamic library file for both lib_add,lib_sub
	    gcc lib_add.o lib_sub.o -shared -o lib_calc.so
	    
lib_add.o : lib_add.c 				   # compile lib_add.c
	    gcc -c -fpic lib_add.c

lib_sub.o : lib_sub.c 				   # compile lib_sub.c
	    gcc -c -fpic lib_sub.c

clean:
	rm -f *.o
	rm -f main
	rm -f *.a
