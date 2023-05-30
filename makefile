#Makefile complex

testcmp: testcmp.o mycomplex.o
	g++ -o bin\testcmp.exe bin\obj\testcmp.o bin\obj\mycomplex.o
	
testcmp.o: testcmp.cpp mycomplex.h
	mkdir bin\obj
	g++ -c testcmp.cpp -o bin\obj\testcmp.o
	
mycomplex.o: mycomplex.cpp mycomplex.h
	g++ -c mycomplex.cpp -o bin\obj\mycomplex.o
	
clean:
	rmdir /S bin 