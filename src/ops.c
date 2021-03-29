#include "lnib.h"
#include <stdlib.h>

//Initizalizes nibble to 0 and allocates memory
nibble nibble_init(nibble this) 
{
    this = malloc(sizeof(nibble_t));
    this->data = 0;

    return this;
}

//Arithmetic operations on nibbles
nibble nadd(nibble a, nibble b)
{
    char tmp = a->data & 00001111;
    tmp = tmp + (b->data & 00001111);
    return tmp;   
}


nibble nsub(nibble a, nibble b)
{
    char tmp = a->data & 00001111;
    tmp = tmp - (b->data & 00001111);
    return tmp;   
}


nibble nmul(nibble a, nibble b)
{
    char tmp = a->data & 00001111;
    tmp = tmp * (b->data & 00001111);
    return tmp;
}

nibble ndiv(nibble a, nibble b)
{
    char tmp = a->data & 00001111;
    tmp = tmp / (b->data & 00001111);
    return tmp;
}

//Free and get overflow functions
void nfree(nibble this)
{
    free(this);
}

nibble noverflow(nibble this)
{
    nibble tmp;
    nibble_init(tmp);
    tmp->data = this->data & 11110000;
    return tmp;
}

//Set operation on nibbles
nibble nset(nibble this, char inp)
{
    this->data = inp;
}