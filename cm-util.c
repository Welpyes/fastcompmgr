
#include <stdio.h>
#include <stdbool.h>

#include "cm-util.h"

time_t _program_start_secs = 0;

bool parse_hex_color(const char *str, double *r, double *g, double *b) {
  unsigned int ir, ig, ib;
  if (str[0] == '#') str++;

  if (sscanf(str, "%02x%02x%02x", &ir, &ig, &ib) == 3) {
    *r = ir / 255.0;
    *g = ig / 255.0;
    *b = ib / 255.0;
    return true;
  }
  return false;
}
