.NOTPARALLEL:

BUILD_TOOL = g++
ARCHIVE_TOOL = ar

COMPILE_FLAGS = -c -Wall -Werror -fPIC
BUILD_SHARED_LIBRARY_FLAGS = -shared -fPIC

EXE_NAME = simpleExample
LIB_NAME = sharedLib
SOURCES_DIR = ./lib/

OBJ_DIR = ./obj/

EXE_SOURCES = $(wildcard $(SOURCES_DIR)*.cpp)
EXE_OBJECTS = $(subst $(SOURCES_DIR),$(OBJ_DIR),$(EXE_SOURCES:%.cpp=%.o))
EXE_FILENAMES = $(subst $(SOURCES_DIR),,$(EXE_SOURCES:%.cpp=%))

all: clean shared_lib executable run

.PHONY: all shared_lib executable clean run

clean:
	rm -r -f $(OBJ_DIR)
	mkdir $(OBJ_DIR)

shared_lib: $(EXE_FILENAMES) build_shared_lib

$(EXE_FILENAMES):
	$(BUILD_TOOL) $(COMPILE_FLAGS) -o $(OBJ_DIR)$@.o $(SOURCES_DIR)$@.cpp

build_shared_lib:
	$(BUILD_TOOL) $(BUILD_SHARED_LIBRARY_FLAGS) -o $(OBJ_DIR)lib$(LIB_NAME).so $(EXE_OBJECTS)

executable:
	$(BUILD_TOOL) -fPIC -o $(OBJ_DIR)$(EXE_NAME) main.cpp -ldl
                   
run:
	$(OBJ_DIR)$(EXE_NAME)
	
	#LD_LIBRARY_PATH=/var/fpwork/bakhvalov/linker/SharedLibraryDynamicLinkage/obj/              
	#export LD_LIBRARY_PATH  