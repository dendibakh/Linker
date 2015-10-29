.NOTPARALLEL:

BUILD_TOOL = g++
ARCHIVE_TOOL = ar

COMPILE_FLAGS = -c -Wall -Werror -fPIC
BUILD_SHARED_LIBRARY_FLAGS = -shared

EXE_NAME = simpleExample
SHARED_LIB_NAME = sharedLib
SHARED_DIR = ./sharedLib/

OBJ_DIR = ./obj/

SHARED_SOURCES = $(wildcard $(SHARED_DIR)*.cpp)
SHARED_OBJECTS = $(subst $(SHARED_DIR),$(OBJ_DIR),$(SHARED_SOURCES:%.cpp=%.o))
SHARED_FILENAMES = $(subst $(SHARED_DIR),,$(SHARED_SOURCES:%.cpp=%))

all: clean shared_lib executable run

.PHONY: all shared_lib executable clean run

clean:
	rm -r -f $(OBJ_DIR)
	mkdir $(OBJ_DIR)

shared_lib: $(SHARED_FILENAMES) build_shared_lib

$(SHARED_FILENAMES):
	$(BUILD_TOOL) -I./ $(COMPILE_FLAGS) -o $(OBJ_DIR)$@.o $(SHARED_DIR)$@.cpp

build_shared_lib:
	$(BUILD_TOOL) $(BUILD_SHARED_LIBRARY_FLAGS) -fPIC -o $(OBJ_DIR)lib$(SHARED_LIB_NAME).so $(SHARED_OBJECTS)

executable:
	$(BUILD_TOOL) -I./ $(COMPILE_FLAGS) -o $(OBJ_DIR)main.o main.cpp
	$(BUILD_TOOL) -I./ -Wall -Werror -o $(OBJ_DIR)$(EXE_NAME) $(OBJ_DIR)main.o -L$(OBJ_DIR) -l$(SHARED_LIB_NAME)
                   
run:
	$(OBJ_DIR)$(EXE_NAME)

#LD_LIBRARY_PATH=/var/fpwork/bakhvalov/linker/SharedLibraryMechanism/obj/
#export LD_LIBRARY_PATH

