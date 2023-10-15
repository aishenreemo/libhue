#include <stdio.h>
#include <ansi.h>
#include <hue.h>

int main() {
	struct hue_t colors[3];
	const char *colors_base16[3] =
		{ HUE_KIZU_RED, HUE_KIZU_BLUE, HUE_KIZU_CYAN };

	for (int i = 0; i < 3; i++) {
		base16_to_hue(colors + i, colors_base16[i]);
		printf("Hex: %s\nColor {r: %d, g: %d, b: %d}\n\n",
		       colors_base16[i], HUE_TO_ARGS(colors[i]));
	}
}
