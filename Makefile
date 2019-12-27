run: a.cpp 
	g++ -std=c++17 -Wshadow -Wall -o run a.cpp -O2 -Wno-unused-result 

test: a.cpp 
	g++ -std=c++17 -Wshadow -Wall -o test a.cpp -g -fsanitize=address 

clean: 
	rm -rf test run
gen:
	g++ -o gen gen.cpp

.PHONY: test clean run gen