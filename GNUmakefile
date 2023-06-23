# Install
BIN = demo

# Flags
CFLAGS += -std=c89 -Wall -Wextra -pedantic -O2

SRC = src/main.c
OBJ = $(SRC:.c=.o)

UNAME_S := $(shell uname -s)
GLFW3 := $(shell pkg-config --libs glfw3)
ifeq ($(UNAME_S),Darwin)
	LIBS := $(GLFW3) -framework OpenGL -framework Cocoa -framework IOKit -framework CoreVideo -lm -lGLEW -L/usr/local/lib
else
	LIBS = $(GLFW3) -lGL -lm -lGLU -lGLEW
endif

$(BIN):
	@mkdir -p bin
	rm -f bin/$(BIN) $(OBJS)
	$(CC) $(SRC) $(CFLAGS) -o bin/$(BIN) $(LIBS)
