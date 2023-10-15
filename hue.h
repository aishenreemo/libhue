#ifndef HUE_H
#define HUE_H

#include <stdint.h>

#define HUE_TO_ARGS(COLOR)		COLOR.r, COLOR.g, COLOR.b
#define HUE_ALPHA_TO_ARGS(COLOR)	HUE_TO_ARGS(COLOR), COLOR.a

#define HUE_KIZU_BACKGROUND		"#0B0F10"
#define HUE_KIZU_FOREGROUND		"#C5C8C9"

#define HUE_KIZU_BLACK			"#131718"
#define HUE_KIZU_RED			"#DF5B61"
#define HUE_KIZU_GREEN			"#87C7A1"
#define HUE_KIZU_YELLOW			"#DE8F78"
#define HUE_KIZU_BLUE			"#6791C9"
#define HUE_KIZU_PURPLE			"#BC83E3"
#define HUE_KIZU_CYAN			"#70B9CC"
#define HUE_KIZU_WHITE			"#C4C4C4"

#define HUE_KIZU_BRIGHT_BLACK		"#151A1C"
#define HUE_KIZU_BRIGHT_RED		"#EE6A70"
#define HUE_KIZU_BRIGHT_GREEN		"#96D6B0"
#define HUE_KIZU_BRIGHT_YELLOW		"#FFB29B"
#define HUE_KIZU_BRIGHT_BLUE		"#7BA5DD"
#define HUE_KIZU_BRIGHT_PURPLE		"#CB92F2"
#define HUE_KIZU_BRIGHT_CYAN		"#7FC8DB"
#define HUE_KIZU_BRIGHT_WHITE		"#CCCCCC"

struct hue_t {
	uint8_t r;
	uint8_t g;
	uint8_t b;
};

struct hue_alpha_t {
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t a;
};

void base16_to_hue(struct hue_t *, const char *);
void base16_to_hue_alpha(struct hue_alpha_t *, const char *);

#endif // HUE_H
