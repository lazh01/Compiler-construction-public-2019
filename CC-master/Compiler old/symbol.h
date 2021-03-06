#ifndef __symbol_h
#define __symbol_h

#define HashSize 317

/* SYMBOL will be extended later.
   Function calls will take more parameters later.
*/

typedef struct SYMBOL {
  char *name;
  void *value;
  struct SYMBOL *next;
} SYMBOL;

typedef struct SymbolTable {
    SYMBOL *table[HashSize];
    struct SymbolTable *next;
} SymbolTable;

int Hash(char *str);

SymbolTable *initSymbolTable();

SymbolTable *scopeSymbolTable(SymbolTable *t);

SYMBOL *putSymbol(SymbolTable *t, char *name, void *value);

SYMBOL *getSymbol(SymbolTable *t, char *name);

void dumpSymbolTable(SymbolTable *t);

#endif