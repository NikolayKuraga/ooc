CK := cc
KFLAGOJ := -std=c89 -pedantic -Wshadow -Wall -Wextra -Wno-incompatible-pointer-types -Wno-unused-parameter -Wno-unused-variable

PAKOJ := pakoj
KONSTRUO := konstruo
OBJDOSUJO := $(KONSTRUO)/objektoj
INKLUDATA :=
BINARO := $(KONSTRUO)/saluto.elf

KONDICXOJ := \
$(OBJDOSUJO)/tabelo_de_charoj.o \
$(OBJDOSUJO)/saluto.o

cxio: $(BINARO)

include $(PAKOJ)/*/Makefile

$(BINARO): $(KONDICXOJ) | $(KONSTRUO)
	$(CK) $(KFLAGOJ) $(INKLUDATA) cxefa.c $(KONDICXOJ) -o $(BINARO)

$(KONSTRUO) $(OBJDOSUJO):
	mkdir -p $@

clean:
	rm -rf $(KONSTRUO)/*
