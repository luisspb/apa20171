# Reference:

MAIN = main

# Sorting default
SORT = NONE

CC = g++
STD = -std=c++11
CFLAGS = $(STD) -Wall -Wextra -Wpedantic
SOURCES = $(wildcard *.cpp) $(wildcard ../selection_sort/*.cpp) $(wildcard ../insertion_sort/*.cpp)
VPATH = . ../selection_sort ../insertion_sort

$(MAIN): $(notdir $(SOURCES:.cpp=.d)) $(notdir $(SOURCES:.cpp=.o))
	$(CC) $(CFLAGS) -o $@ $(notdir $(SOURCES:.cpp=.o)) $(VPATH:%=-I%)

%.d: %.cpp
	$(CC) $(CFLAGS) $< -MM -MT '$(@F:.d=.o) $(@F)' -MP -MD $(VPATH:%=-I%)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $(@F) $(VPATH:%=-I%) -D$(SORT)

.PHONY: clean

debug: CFLAGS += -ggdb -DDEBUG
debug: clean $(MAIN)

clean:
	-rm -f *.d *.o *.gch *.txt $(MAIN)

ifneq ($(MAKECMDGOALS), clean)
      -include $(SOURCES:.cpp=.d)
endif
