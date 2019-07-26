TARGET := main.exe
SOURCES := $(wildcard ./*.cpp)
OBJECTS := $(subst .cpp,.o, $(SOURCES))
STATIC_LIB := libmylib.a

all : $(TARGET)
	@echo "All is done perfectly"

$(TARGET) : $(OBJECTS) $(STATIC_LIB)
	@echo "linking the " $@
	@g++ $(OBJECTS) -o $@ -L. -lmylib 

$(STATIC_LIB) : $(OBJECTS)
	@echo "generating static lib"
	@ar rsv $@ $(OBJECTS)

%.o : %.cpp
	@echo "generating" $@
	@g++ -c $< -o $@ 

.PHONY: clean

clean: 
	@echo "remove all .o files"
	@rm -f $(OBJECTS)
