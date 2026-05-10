#pragma once

#include <stdbool.h>

#include <X11/Xlib.h>
#include <X11/extensions/Xrender.h>

extern Window root;
extern Picture root_picture;
extern Picture root_buffer;
extern int root_width;
extern int root_height;
extern const char *root_background_props[];
extern bool pseudo_transparency;
extern double pseudo_blur_radius;


bool root_init();
Picture root_create_tile(double blur_radius);
