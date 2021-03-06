#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "include/strlcpy.h"
#include "include/strlcat.h"
#include "lxc/string_utils.h"

extern int LLVMFuzzerTestOneInput(const uint8_t *buf, size_t len) {
    
    const char* needle = "o";
    const char* haystack = "hello i am a testing string";
    const char* replacement = (char*)buf;

    lxc_string_replace(needle, replacement, haystack);
	return 0;
}