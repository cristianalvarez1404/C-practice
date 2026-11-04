#include <stdio.h>

#define FOO(x, y) printf("%s + %s = %d\n", #x, #y, (x) + (y))
#define PREFIX(var_name) new_##var_name
#define GENERIC_ADD_FUNC(type)          \
    type add_##type(type x, type y) {   \
        return x + y;                   \
    }

/*
GENERIC_ADD_FUNC(int)
    int add_int(int x, int y) {  
        return x + y;                   \
    }
*/
GENERIC_ADD_FUNC(int)  
GENERIC_ADD_FUNC(float)
GENERIC_ADD_FUNC(long)

int main(void)
{
    int PREFIX(foo) = 123;
    printf("%d\n", new_foo);
    /*
    int first = 123;
    int second = 3245;
    FOO(first, second);
    */

    printf("%d\n", add_int(1, 2));
    printf("%.3f\n", add_float(1.12, 2.34));    
    printf("%ld\n", add_long(1L, 2214645L));

    return 0;
}