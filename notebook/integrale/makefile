default: integrale.exe integrale-random.exe integrale_ptr.exe

integrale.exe : integrale.c
	gcc -g -Wall -o integrale.exe integrale.c

integrale_ptr.exe : integrale_ptr.c
	gcc -g -Wall -o integrale_ptr.exe integrale_ptr.c

integrale-random.exe : integrale-random.c
	gcc -g -Wall -o integrale-random.exe integrale-random.c

clean:
	rm -f *.exe *.o *~