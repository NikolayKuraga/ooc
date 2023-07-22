INKLUDATA := $(INKLUDATA) -I pakoj/tabelo_de_charoj

$(OBJDOSUJO)/tabelo_de_charoj.o: \
pakoj/tabelo_de_charoj/tabelo_de_charoj.h \
pakoj/tabelo_de_charoj/tabelo_de_charoj.tuta.h \
pakoj/tabelo_de_charoj/tabelo_de_charoj.tuta.c \
| $(OBJDOSUJO)
	$(CK) $(KFLAGOJ) -c pakoj/tabelo_de_charoj/tabelo_de_charoj.tuta.c -o $@
