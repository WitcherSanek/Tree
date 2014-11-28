#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define CHECKEXISTANCE(N)  assert(N);\
                        assert(N->current);

int WORDLENGTH=100;
typedef char* data_t;
enum constants
{
    OK,
    NO_TREE,
    CANT_GO,
    WRONG
};

struct TreeElem_t
{
    data_t data;
    TreeElem_t* last;
    TreeElem_t* left;
    TreeElem_t* right;
};

struct Tree
{
    TreeElem_t* current;
    TreeElem_t* first;
    int amount;
};

int tree_ctor(Tree* T);

int tree_dtor(TreeElem_t* elem);

int tree_ok(Tree* T);

int tree_add_left(Tree* T,data_t data);

int tree_add_right(Tree* T,data_t data);

int dumptree(TreeElem_t* elem);

int gotofirst(Tree* T);

int gotolast(Tree* T);

int gotoleft(Tree* T);

int gotoright(Tree* T);

int readfromfile(Tree* T,char* fname);



