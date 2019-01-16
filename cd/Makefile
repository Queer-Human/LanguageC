C_APPS= argument

all: ${C_APPS}

%: %.c
	gcc -lm -O2 -Wall -o $@ $<
clean:
	rm -f ${C_APPS}
