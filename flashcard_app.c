//
// Created by yuchao on 20/4/20.
//

#include "flashcard_app.h"
#include "flashcard_app_win.h"

struct _FlashcardApp{
    GtkApplication parent;
};

G_DEFINE_TYPE(FlashcardApp, flashcard_app, GTK_TYPE_APPLICATION);

static void
flashcard_app_init(FlashcardApp *app) {

}

static void
flashcard_app_activate(GApplication *app) {
    FlashcardAppWindow *window = NULL;
    window = flashcard_app_window_new(FLASHCARD_APP(app));
    gtk_window_present(GTK_WINDOW(window));
}

static void
flashcard_app_class_init(FlashcardAppClass *class) {
    G_APPLICATION_CLASS(class)->activate = flashcard_app_activate;
//G_APPLICATION_CLASS(class)->open = e
}

FlashcardApp *
flashcard_app_new(void) {
    return g_object_new(FLASHCARD_APP_TYPE, "application-id", "yuchao.exampleapp", "flags", NULL, NULL);
}
