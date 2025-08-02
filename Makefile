NAME = sort

SORT_DIR = src/sort/
INC_DIR = inc/

SORT = $(SORT_DIR)insertion_sort.cpp \
	   $(SORT_DIR)merge_sort.cpp \
	   $(SORT_DIR)heap_sort.cpp \
	   $(SORT_DIR)priority_queue.cpp \
	   $(SORT_DIR)utils.cpp

SRC = main.cpp

all:
	g++ $(SORT) $(SRC) -I$(INC_DIR) -o $(NAME)

clean:
	rm -rf $(NAME)