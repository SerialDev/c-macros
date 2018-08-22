
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

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


UNIMPLEMENTED (lsh_loop);
UNIMPLEMENTED (test);

int main(){

    // Load config files if any
    int i = 8;
    int l = 2;
    int u = 8;

    int z = l < i && i < u;

    // int h = IS_BETWEEN(i, l, u);
    bool h = IS_EVEN(i);

    printf("%d \n", z);
    printf("%d \n", h);

    // Run command loop
    lsh_loop();
    test();

    // Perform any shutdown/cleanup

    return EXIT_SUCCESS;
}
