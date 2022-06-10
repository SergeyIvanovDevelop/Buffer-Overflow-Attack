default: simple_programm
	
simple_programm: simple_programm.c
	gcc -c -O0 -no-pie simple_programm.c -o simple_programm.o
	gcc -O0 -no-pie simple_programm.o -o simple_programm
	
clean:
	rm simple_programm.o | true
	rm simple_programm | true
