.NOTPARALLEL:

BUILD_TOOL = g++
ARCHIVE_TOOL = ar

COMPILE_FLAGS = -c -Wall -Werror -fPIC
BUILD_SHARED_LIBRARY_FLAGS = -shared -fPIC

EXE_NAME = simpleExample
STATIC_LIB_NAME = staticLib
SHARED_LIB_NAME = sharedLib
STATIC_DIR = ./staticLib/
SHARED_DIR = ./sharedLib/

OBJ_DIR = ./obj/

STATIC_SOURCES = $(wildcard $(STATIC_DIR)*.cpp)
STATIC_OBJECTS = $(subst $(STATIC_DIR),$(OBJ_DIR),$(STATIC_SOURCES:%.cpp=%.o))
STATIC_FILENAMES = $(subst $(STATIC_DIR),,$(STATIC_SOURCES:%.cpp=%))

SHARED_SOURCES = $(wildcard $(SHARED_DIR)*.cpp)
SHARED_OBJECTS = $(subst $(SHARED_DIR),$(OBJ_DIR),$(SHARED_SOURCES:%.cpp=%.o))
SHARED_FILENAMES = $(subst $(SHARED_DIR),,$(SHARED_SOURCES:%.cpp=%))

all: clean static_lib shared_lib executable run

.PHONY: all static_lib shared_lib executable clean run

clean:
	rm -r -f $(OBJ_DIR)
	mkdir $(OBJ_DIR)

static_lib: $(STATIC_FILENAMES) build_static_lib

$(STATIC_FILENAMES):
	$(BUILD_TOOL) $(COMPILE_FLAGS) -o $(OBJ_DIR)$@.o $(STATIC_DIR)$@.cpp

build_static_lib:
	$(ARCHIVE_TOOL) rcs $(OBJ_DIR)lib$(STATIC_LIB_NAME).a $(STATIC_OBJECTS)

shared_lib: $(SHARED_FILENAMES) build_shared_lib

$(SHARED_FILENAMES):
	$(BUILD_TOOL) -I$(STATIC_DIR) $(COMPILE_FLAGS) -o $(OBJ_DIR)$@.o $(SHARED_DIR)$@.cpp

build_shared_lib:
	$(BUILD_TOOL) $(BUILD_SHARED_LIBRARY_FLAGS) -o $(OBJ_DIR)lib$(SHARED_LIB_NAME).so $(SHARED_OBJECTS) -L$(OBJ_DIR) -l$(STATIC_LIB_NAME)

executable:
	$(BUILD_TOOL) -I$(STATIC_DIR) -o $(OBJ_DIR)$(EXE_NAME) main.cpp -L$(OBJ_DIR) -l$(STATIC_LIB_NAME) -l$(SHARED_LIB_NAME)
                   
run:
	$(OBJ_DIR)$(EXE_NAME)

#LD_LIBRARY_PATH=/var/fpwork/bakhvalov/linker/StaticMemberMessUp/obj/              
#export LD_LIBRARY_PATH  