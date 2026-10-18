#include <stdio.h>

// | 4 bits | 4 bits | 1 bit | 7 bits |
struct foo
{
    int first_4 : 4;
    int next_4  : 4;
    int alone   : 1;
    int rest    : 7;
};

int main(void)
{
    printf("%zu\n", sizeof(struct foo));

    struct foo f;
    f.first_4 = 2;
    f.next_4 = 4;
    f.alone = 1;

    int fd = open();
    read(fd, f, sizeof f);

    return 0;
}