PAKOJ := pakoj/
KONSTRUO := konstruo/
OBJDOSUJO := $(KONSTRUO)objektoj/
BINARO := $(KONSTRUO)saluto.run

CK := cc
KFLAGOJ := -ansi -pedantic -Wshadow -Wall -Wextra -I$(PAKOJ)

KONDICXOJ := \
	$(OBJDOSUJO)tabelo_de_charoj.o \
	$(OBJDOSUJO)saluto.o \
	$(OBJDOSUJO)objekto.o \
	$(OBJDOSUJO)filo.o \
	$(OBJDOSUJO)cxefo.o


cxio: $(BINARO)

include $(PAKOJ)*/Makefile
-include $(PAKOJ)*/*/Makefile

# $(OBJDOSUJO)%.o: \
# $(PAKOJ)%/*.c \
# $(PAKOJ)%/*.h \
# | $(OBJDOSUJO)
# 	$(CK) $(KFLAGOJ) -c $< -o $@

$(BINARO): $(KONDICXOJ) | $(KONSTRUO)
	$(CK) $(KFLAGOJ) $(KONDICXOJ) -o $(BINARO)

$(KONSTRUO) $(OBJDOSUJO):
	mkdir -p $@

clean:
	$(RM) -rf $(KONSTRUO)*
