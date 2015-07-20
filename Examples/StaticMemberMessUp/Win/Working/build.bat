g++ -I./sharedLib/ -c -Wall -o ./obj/counter.o   ./sharedLib/counter.cpp
g++ -I./sharedLib/ -c -Wall -o ./obj/main_DLL.o  ./sharedLib/main_DLL.cpp
g++ -I./sharedLib/ -c -Wall -o ./obj/dummy_DLL.o ./sharedLib/dummy_DLL.cpp
g++ -shared -Wl,--out-implib=./obj/libsharedLib.a -o ./obj/libsharedLib.so ./obj/main_DLL.o ./obj/dummy_DLL.o ./obj/counter.o
g++ -I./sharedLib/ -o ./obj/simpleExample main.cpp -L./obj/ -lsharedLib