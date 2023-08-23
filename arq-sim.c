#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>

#include "lib.h"

const char* get_reg_name_str (uint16_t reg)
{
	static const char *str[] = {
		"r0",
		"r1",
		"r2",
		"r3",
		"r4",
		"r5",
		"r6",
		"r7"
	};

	return str[reg];
}

int main (int argc, char **argv)
{
	if (argc != 2) {
		printf("usage: %s [bin_name]\n", argv[0]);
		exit(1);
	}

	return 0;
}