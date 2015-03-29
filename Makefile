all: install

install:
	mkdir -p $(DESTDIR)///include
	cp -r include/psxtypes $(DESTDIR)///include
