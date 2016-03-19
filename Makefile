ODIR = obj
SUBDIRS = src

.PHONY: all clean

all:
	@for i in $(SUBDIRS); do \
		echo "make all in $$i..."; \
		cd $$i; \
		make all; \
	done

clean:
	rm -f $(ODIR)/*.o