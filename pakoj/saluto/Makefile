INKLUDATA := $(INKLUDATA) -I pakoj/saluto

$(OBJDOSUJO)/saluto.o: \
pakoj/saluto/saluto.h \
pakoj/saluto/saluto.tuta.h \
pakoj/saluto/saluto.tuta.c \
| $(OBJDOSUJO)
	$(CK) $(KFLAGOJ) -c pakoj/saluto/saluto.tuta.c -o $@
