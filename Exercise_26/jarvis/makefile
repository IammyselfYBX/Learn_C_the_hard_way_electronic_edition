PREFIX?=/usr/local
# ?= 语法,它表示“如果之前没有定义,就将 PREFIX 设置为该值”。
CFLAGS=-g -Wall -I${PREFIX}/apr/include/apr-1 -I${PREFIX}/apr/include/apr-util-1
LDFLAGS=-L${PREFIX}/apr/lib -lapr-1 -pthread -laprutil-1

all: devpkg
devpkg: bstrlib.o db.o shell.o commands.o

install: all
	install -d $(DESTDIR)/$(PREFIX)/bin/
	install devpkg $(DESTDIR)/$(PREFIX)/bin/
clean:
	rm -f *.o
	rm -f devpkg
	rm -rf *.dSYM