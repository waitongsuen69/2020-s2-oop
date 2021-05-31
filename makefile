c11:
	touch main-1-1.cpp function-1-1.cpp

c12:
	touch main-1-2.cpp function-1-2.cpp

c13:
	touch main-1-3.cpp function-1-3.cpp

c14:
	touch main-1-4.cpp function-1-4.cpp

c15:
	touch main-1-5.cpp function-1-5.cpp

c21:
	touch main-2-1.cpp function-2-1.cpp

c22:
	touch main-2-2.cpp function-2-2.cpp

c23:
	touch main-2-3.cpp function-2-3.cpp

c24:
	touch main-2-4.cpp function-2-4.cpp

c25:
	touch main-2-5.cpp function-2-5.cpp

c31:
	touch main-3-1.cpp function-3-1.cpp

c32:
	touch main-3-2.cpp function-3-2.cpp

c33:
	touch main-3-3.cpp function-3-3.cpp

c34:
	touch main-3-4.cpp function-3-4.cpp

c35:
	touch main-3-5.cpp function-3-5.cpp

o11: main-1-1.cpp function-1-1.cpp
	g++ main-1-1.cpp function-1-1.cpp -o 1.1

o12: main-1-2.cpp function-1-2.cpp
	g++ main-1-2.cpp function-1-2.cpp -o 1.2
o13: main-1-3.cpp function-1-3.cpp
	g++ main-1-3.cpp function-1-3.cpp -o 1.3
o14: main-1-4.cpp function-1-4.cpp
	g++ main-1-4.cpp function-1-4.cpp -o 1.4
o15: main-1-5.cpp function-1-5.cpp
	g++ main-1-5.cpp function-1-5.cpp -o 1.5
o21: main-2-1.cpp function-2-1.cpp
	g++ main-2-1.cpp function-2-1.cpp -o 2.1
o22: main-2-2.cpp function-2-2.cpp
	g++ main-2-2.cpp function-2-2.cpp -o 2.2
o23: main-2-3.cpp function-2-3.cpp
	g++ main-2-3.cpp function-2-3.cpp -o 2.3
o24: main-2-4.cpp function-2-4.cpp
	g++ main-2-4.cpp function-2-4.cpp -o 2.4
o25: main-2-5.cpp function-2-5.cpp
	g++ main-2-5.cpp function-2-5.cpp -o 2.5
o31: main-3-1.cpp function-3-1.cpp
	g++ main-3-1.cpp function-3-1.cpp -o 3.1
o32: main-3-2.cpp function-3-2.cpp
	g++ main-3-2.cpp function-3-2.cpp -o 3.2
o33: main-3-3.cpp function-3-3.cpp
	g++ main-3-3.cpp function-3-3.cpp -o 3.3
o34: main-3-4.cpp function-3-4.cpp
	g++ main-3-4.cpp function-3-4.cpp -o 3.4
o35: main-3-5.cpp function-3-5.cpp
	g++ main-3-5.cpp function-3-5.cpp -o 3.5

