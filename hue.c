#include <stdio.h>
#include "hue.h"

void base16_to_hue(struct hue_t *color, const char *base16_str) {
	sscanf(base16_str, "#%2hhx%2hhx%2hhx", &color->r, &color->g, &color->b);
}

void base16_to_hue_alpha(struct hue_alpha_t *color, const char *base16_str) {
	sscanf(base16_str, "#%2hhx%2hhx%2hhx%2hhx", &color->r, &color->g,
	       &color->b, &color->a);
}
