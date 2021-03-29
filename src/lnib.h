
typedef struct nibble_t 
{
    char data;
} nibble_t;

typedef nibble_t* nibble;

nibble nibble_init(nibble this);
nibble nadd(nibble a, nibble b);
nibble nsub(nibble a, nibble b);
nibble nmul(nibble a, nibble b);
nibble ndiv(nibble a, nibble b);
void nfree(nibble this);
nibble noverflow(nibble this);
nibble nset(nibble this, char inp);
