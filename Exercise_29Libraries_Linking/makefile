CFLAGS=-g -Wall -O2 -Wextra -Iinclude -rdynamic -DNDEBUG $(OPTFLAGS) 	
LIBS=-ldl $(OPTLIBS)

SOURCES=$(wildcard src/**/*.c src/*.c)	
OBJECTS=$(patsubst %.c, %.o, $(SOURCES))

TARGET=build/libYOUR_LIBRARY.a				
SO_TARGET=$(patsubst %.a,%.so,$(TARGET))

all: $(TARGET) $(SO_TARGET)