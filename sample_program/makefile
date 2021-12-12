\linked : linked_list.o lib_linkedlist.a
	  gcc -o linked linked_list.o -L. lib_linkedlist.a

linked_list.o : linked_list.c
		gcc -c linked_list.c -o linked_list.o

lib_linkedlist.a: remove_last.o
		 ar rcs lib_linkedlist.a remove_last.o

remove_last.o : remove_last.c
		gcc -c remove_last.c
		

clean :
	rm -f *.o
	rm -f linked
	rm -f lib_linkedlist.a
