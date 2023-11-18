CK := cc
KFLAGOJ := -ansi -pedantic -Wshadow -Wall -Wextra #-Wno-incompatible-pointer-types -Wno-unused-parameter -Wno-unused-variable

PAKOJ := pakoj
KONSTRUO := konstruo
OBJDOSUJO := $(KONSTRUO)/objektoj
BINARO := $(KONSTRUO)/saluto.run

KONDICXOJ := \
	$(OBJDOSUJO)/tabelo_de_charoj.o \
	$(OBJDOSUJO)/saluto.o \
	$(OBJDOSUJO)/objekto.o \
	$(OBJDOSUJO)/filo.o \
	$(OBJDOSUJO)/cxefo.o


cxio: $(BINARO)

include $(PAKOJ)/*/Makefile
-include $(PAKOJ)/*/*/Makefile

$(BINARO): $(KONDICXOJ) | $(KONSTRUO)
	$(CK) $(KFLAGOJ) $(KONDICXOJ) -o $(BINARO)

$(KONSTRUO) $(OBJDOSUJO):
	mkdir -p $@

clean:
	rm -rf $(KONSTRUO)/*
