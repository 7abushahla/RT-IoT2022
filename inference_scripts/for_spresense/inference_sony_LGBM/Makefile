lgbm.so: main.o tu0.o tu1.o tu2.o
	gcc -shared -O3 -o lgbm.so main.o tu0.o tu1.o tu2.o -std=c99 
main.o: main.c
	gcc -c -O3 -o main.o main.c -fPIC -std=c99 
tu0.o: tu0.c
	gcc -c -O3 -o tu0.o tu0.c -fPIC -std=c99 
tu1.o: tu1.c
	gcc -c -O3 -o tu1.o tu1.c -fPIC -std=c99 
tu2.o: tu2.c
	gcc -c -O3 -o tu2.o tu2.c -fPIC -std=c99 
