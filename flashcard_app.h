// // Created by yuchao on 20/4/20.
//

#ifndef APP_FLASHCARD_APP_H
#define APP_FLASHCARD_APP_H
#include <gtk/gtk.h>
#define FLASHCARD_APP_TYPE (flashcard_app_get_type())
G_DECLARE_FINAL_TYPE(FlashcardApp, flashcard_app, FLASHCARD, APP, GtkApplication)
FlashcardApp *flashcard_app_new (void);
#endif //APP_FLASHCARD_APP_H
