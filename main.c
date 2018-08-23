
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>

#define UNIMPLEMENTED(name) char* str_repr_##name = "\"" #name "\"";  int name(); int name() { printf("%s not implemented! at line number %d in file %s \n", str_repr_##name, __LINE__, __FILE__ ); return  EXIT_SUCCESS;}

#define AND       &&
#define OR        ||
#define NOT       !
#define NOTEQUALS !=
#define EQUALS    ==
#define IS        =

#define IS_BETWEEN(n, l, u) ((unsigned char )(l < i && i < u));
#define IS_ODD( num )       ((num) & 1)
#define IS_EVEN( num )      (!IS_ODD( (num) ))

#define LSSB(x) ((x) ^ ((x) - 1) & (x))   // least significant set bit
#define IMPLIES(x, y) (!(x) || (y))
#define COMPARE(x, y) (((x) > (y)) - ((x) < (y)))
#define SIGN(x) COMPARE(x, 0)
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*a))
#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))

UNIMPLEMENTED (lsh_loop);
UNIMPLEMENTED (test);

int main(){

    // Load config files if any
    int i = 8;
    int l = 2;
    int u = 8;

    int z = l < i && i < u;
    int array[100];
    int n = -7;
    assert(IMPLIES(n > 0, n > 0));

    // int h = IS_BETWEEN(i, l, u);
    bool h = IS_EVEN(i);

    printf("%d \n", z);
    printf("%d \n", ARRAY_SIZE(array));
    printf("%d \n", COUNT_OF(array));
    printf("%d \n", SIGN(n));
    printf("COMPARE %d \n", COMPARE(l, n));
    printf("%d \n", h);

    // Run command loop
    lsh_loop();
    test();

    // Perform any shutdown/cleanup

    return EXIT_SUCCESS;
}
