MAIN = main

CC = g++
STD = -std=c++11
CFLAGS = $(STD) -Wall -Wextra -Wpedantic
SOURCES = $(wildcard *.cpp) $(wildcard ../selection_sort/*.cpp) $(wildcard ../insertion_sort/*.cpp)
INC_DIRS = . ../selection_sort ../insertion_sort

$(MAIN): $(SOURCES:.cpp=.d) $(SOURCES:.cpp=.o)
	$(CC) $(CFLAGS) -o $@ $(notdir $(SOURCES:.cpp=.o)) $(INC_DIRS:%=-I%)

%.d: %.cpp
	$(CC) $(CFLAGS) $< -MM -MT '$(@F:.d=.o) $(@F)' -MP -MD $(INC_DIRS:%=-I%)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $(@F) $(INC_DIRS:%=-I%)

.PHONY: clean

debug: CFLAGS += -ggdb
debug: clean $(MAIN)

clean:
	-rm -f *.d *.o *.gch $(MAIN)

ifneq ($(MAKECMDGOALS), clean)
      -include $(SOURCES:.cpp=.d)
endif
