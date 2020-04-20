#include <stdio.h>
#include "flashcard_app.h"

int
main(int argc, char **argv) {
    g_application_run(G_APPLICATION(flashcard_app_new()), argc, argv);
    return 0;
}
