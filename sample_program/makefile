#Macros 
cc = gcc
cflags = -c
static = ar rcs

#$@ = target variable
#$^ = prerequisites for all files separated by spaces, without duplicates
#$< = first prerequisite file name

linked : linked_list.o lib_linkedlist.a
	  $(cc) -o $@ -L. $^
	  #gcc -o linked linked_list.o -L. lib_linkedlist.a

linked_list.o : linked_list.c
		$(cc) $(cflags) $^ -o $@
		#gcc -c linked_list.c -o linked_list.o

lib_linkedlist.a: remove_last.o
		 $(static) $@ $<
		 #ar rcs lib_linkedlist.a remove_last.o

remove_last.o : remove_last.c
		$(cc) $(cflags) $<
		#gcc -c remove_last.c
		

clean :
	rm -f *.o
	rm -f linked
	rm -f lib_linkedlist.a
