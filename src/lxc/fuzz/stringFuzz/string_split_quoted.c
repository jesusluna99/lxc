#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/strlcpy.h"
#include "include/strlcat.h"
#include "lxc/string_utils.h"

extern char* LLVMFuzzerTestOneInput(const uint8_t *buf, size_t len) {
   lxc_string_split_quoted((char*)buf);
	return 0;
}