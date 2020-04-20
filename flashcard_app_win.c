//
// Created by yuchao on 20/4/20.
//

#include "flashcard_app_win.h"

struct _FlashcardAppWindow {
    GtkApplicationWindow parent;
};

G_DEFINE_TYPE(FlashcardAppWindow, flashcard_app_window, GTK_TYPE_APPLICATION_WINDOW);

static void
flashcard_app_window_init(FlashcardAppWindow *app) {

}

static void
flashcard_app_window_class_init(FlashcardAppWindowClass *class) {

}

FlashcardAppWindow *
flashcard_app_window_new(FlashcardApp *app) {
    return g_object_new(FLASHCARD_APP_WINDOW_TYPE, "application", app, NULL);
}

