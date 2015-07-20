g++ -I./ -c -Wall -Werror -o ./obj/main_DLL.o ./sharedLib/main_DLL.cpp
g++ -I./ -c -Wall -Werror -o ./obj/dummy_DLL.o ./sharedLib/dummy_DLL.cpp
g++ -shared -Wl,--out-implib=./obj/libsharedLib.a -o ./obj/libsharedLib.so ./obj/main_DLL.o ./obj/dummy_DLL.o -L./obj/
g++ -I./ -Wall -Werror -o ./obj/simpleExample main.cpp -L./obj/ -lsharedLib