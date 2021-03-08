// https://github.com/silentbicycle/greatest
#include "ext/greatest.h"
#include "liste_inlantuite.h"
#include "stive.h"
#include "cozi.h"
#include "arbori.h"
#include "grafuri.h"

/* Add definitions that need to be in the test runner's main file. */
GREATEST_MAIN_DEFS();

int main(int argc, char **argv) {
    GREATEST_MAIN_BEGIN();      /* command-line options, initialization. */
    RUN_SUITE(teste_liste_inlantuite);
    RUN_SUITE(teste_stive);
    RUN_SUITE(teste_cozi);
    RUN_SUITE(teste_arbori);
    RUN_SUITE(teste_grafuri);
    GREATEST_MAIN_END();        /* display results */
}
