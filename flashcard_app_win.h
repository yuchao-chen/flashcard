//
// Created by yuchao on 20/4/20.
//

#ifndef APP_FLASHCARD_APP_WIN_H
#define APP_FLASHCARD_APP_WIN_H
#include <gtk/gtk.h>
#include "flashcard_app.h"

#define FLASHCARD_APP_WINDOW_TYPE (flashcard_app_window_get_type())
G_DECLARE_FINAL_TYPE(FlashcardAppWindow, flashcard_app_window, FLASHCARD, APP_WINDOW, GtkApplicationWindow)

FlashcardAppWindow *flashcard_app_window_new(FlashcardApp *app);

#endif //
