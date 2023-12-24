#INKLUDATA := $(INKLUDATA) -I pakoj/saluto

$(OBJDOSUJO)saluto.o: \
$(PAKOJ)saluto/saluto.h \
$(PAKOJ)saluto/saluto.tuta.h \
$(PAKOJ)saluto/saluto.tuta.c \
| $(OBJDOSUJO)
	$(CK) $(KFLAGOJ) -c $(PAKOJ)saluto/saluto.tuta.c -o $@
