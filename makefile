objects=*.cpp
all:
	g++ $(objects) -o easyLook

clean:
	rm *.o;
	rm *.exe;
	rm easyLook;
