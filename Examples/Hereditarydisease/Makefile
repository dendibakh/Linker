.NOTPARALLEL:

BUILD_TOOL = g++
ARCHIVE_TOOL = ar

COMPILE_FLAGS = -c -Wall -Werror

EXE_NAME = simpleExample
SOURCES_DIR = ./

OBJ_DIR = ./obj/

EXE_SOURCES = $(wildcard $(SOURCES_DIR)*.cpp)
EXE_OBJECTS = $(subst $(SOURCES_DIR),$(OBJ_DIR),$(EXE_SOURCES:%.cpp=%.o))
EXE_FILENAMES = $(subst $(SOURCES_DIR),,$(EXE_SOURCES:%.cpp=%))

all: clean executable run

.PHONY: all executable clean run

clean:
	rm -r -f $(OBJ_DIR)
	mkdir $(OBJ_DIR)

executable: $(EXE_FILENAMES) build_executable

$(EXE_FILENAMES):
	$(BUILD_TOOL) $(COMPILE_FLAGS) -o $(OBJ_DIR)$@.o $(SOURCES_DIR)$@.cpp

build_executable:
	$(BUILD_TOOL) -o $(OBJ_DIR)$(EXE_NAME) $(EXE_OBJECTS)

run:
	$(OBJ_DIR)$(EXE_NAME)