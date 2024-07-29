# C_UnsignedCharToHex
You can use this header to convert unsigned char* to HEX, or If you're sensible, just use std::hex

**Usage example**
```
#include "uc2hex.h"
int main() {
  unsigned char* in = (unsigned char*)malloc(5); // 4 bytes + 1 byte end of string
  strcpy((char*)in, "help");
  char* out = (char*)malloc(9); // 4 bytes of text * 2 + 1 byte end of string
  uc2hex(in, out);
  printf("%s\n", out);
  free(out);
  free(in);
  return 0;
}```
