#include "lnib.h"
#include <stdlib.h>

nibble nibble_init(nibble this) 
{
    this = malloc(sizeof(nibble_t));
    this->data = 0;

    return this;
}