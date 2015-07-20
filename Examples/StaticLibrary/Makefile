.NOTPARALLEL:

BUILD_TOOL = g++
ARCHIVE_TOOL = ar

COMPILE_FLAGS = -c -Wall -Werror

EXE_NAME = simpleExample
LIB_NAME = Staticlib
SOURCES_DIR = ./lib/

OBJ_DIR = ./obj/

EXE_SOURCES = $(wildcard $(SOURCES_DIR)*.cpp)
EXE_OBJECTS = $(subst $(SOURCES_DIR),$(OBJ_DIR),$(EXE_SOURCES:%.cpp=%.o))
EXE_FILENAMES = $(subst $(SOURCES_DIR),,$(EXE_SOURCES:%.cpp=%))

all: clean static_lib executable run

.PHONY: all static_lib executable clean run

clean:
	rm -r -f $(OBJ_DIR)
	mkdir $(OBJ_DIR)

static_lib: $(EXE_FILENAMES) build_static_lib

$(EXE_FILENAMES):
	$(BUILD_TOOL) $(COMPILE_FLAGS) -o $(OBJ_DIR)$@.o $(SOURCES_DIR)$@.cpp

build_static_lib:
	$(ARCHIVE_TOOL) rcs $(OBJ_DIR)lib$(LIB_NAME).a $(EXE_OBJECTS)

executable:
	#$(BUILD_TOOL) -I$(SOURCES_DIR) -o $(OBJ_DIR)$(EXE_NAME) main.cpp -L$(OBJ_DIR) -l$(LIB_NAME) ./obj/A.o
	$(BUILD_TOOL) -I$(SOURCES_DIR) -o $(OBJ_DIR)$(EXE_NAME) main.cpp -L$(OBJ_DIR) -l$(LIB_NAME)
                   
run:
	$(OBJ_DIR)$(EXE_NAME)