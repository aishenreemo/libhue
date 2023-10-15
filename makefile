FMT := indent
CC := gcc

FLAGS := -Wall -O3 -march=native
LIBS := -lhue

all: shared/libhue.so

shared dist:
	mkdir -p $@

shared/libhue.so: hue.c | shared
	$(CC) -shared -o $@ $^ $(FLAGS)

install:
	cp ansi.h /usr/include
	cp hue.h /usr/include
	cp shared/libhue.so /usr/lib

uninstall:
	rm /usr/include/ansi.h
	rm /usr/include/hue.h
	rm /usr/lib/libhue.so

format:
	find . -name "*.c" -exec $(FMT) {} \;
	find . -name "*.h" -exec $(FMT) {} \;

test: test.c | dist
	gcc $^ -o dist/test $(FLAGS) $(LIBS)

clean:
	rm -rf *~ shared dist

.PHONY: format clean install uninstall test
