CC := gcc
TARGET := main.exe
C_FLAGS := -fPIC
LD_FLAGS := -shared
SOURCES := $(wildcard ./lib/*.cpp)
OBJECTS := $(subst .cpp,.o, $(SOURCES))
SHARED_LIB := libmylib.so

all : $(TARGET)
	@echo "All is done perfectly"

$(TARGET) : $(OBJECTS) $(SHARED_LIB) main.o
	@echo "linking the " $@
	@$(CC) -L. -Wl,-rpath=. -Wall -o $@ main.o -lmylib -lstdc++ 

main.o: main.cpp
	@echo "generating " $@
	@$(CC) -c main.cpp 


$(SHARED_LIB) : $(OBJECTS)
	@echo "generating shared lib"
	@$(CC) $(LD_FLAGS) -o $@ $(OBJECTS) 

%.o : %.cpp
	@echo "generating" $@
	@$(CC) -c -Wall $(C_FLAGS) -o $@ $<

.PHONY: clean

clean: 
	@echo "remove all .o files"
	@rm -f  $(TARGET) $(OBJECTS) *.o
