CMAKE_MINIMUM_REQUIRED(VERSION 3.16)

SET(appname flashcard)

PROJECT(${appname} C)

SET(CMAKE_C_STANDARD 99)

# configuration of GTK+
# Use the package PkgConfig to detect GTK+ headers/library files
FIND_PACKAGE(PkgConfig REQUIRED)
PKG_CHECK_MODULES(GTK3 REQUIRED gtk+-3.0)

# Setup CMake to use GTK+, tell the compiler where to look for headers
# and to the linker where to look for libraries
INCLUDE_DIRECTORIES(${GTK3_INCLUDE_DIRS})
LINK_DIRECTORIES(${GTK3_LIBRARY_DIRS})

# Add other flags to the compiler
ADD_DEFINITIONS(${GTK3_CFLAGS_OTHER})

ADD_EXECUTABLE(${appname} main.c flashcard_app.h flashcard_app.c flashcard_app_win.h flashcard_app_win.c)

# Link the target to the GTK+ libraries
TARGET_LINK_LIBRARIES(${appname} ${GTK3_LIBRARIES})