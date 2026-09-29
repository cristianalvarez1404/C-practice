
char code[] = 
  "\xe9\x1e\x00\x00\x00"  // jmp (relative) <MESSAGE>
  "\xb8\x04\x00\x00\x00"  // mov $0x4,%eax
  "\xb8\x04\x00\x00\x00"  // mov $0x1,%ebx
  "\x59"                  // pop %ecx
  "\xba\x0f\x00\x00\x00"  // mov $0xf,%edx
  "\xcb\x80"              // int $0x80
  "\xb8\x01\x00\x00\x00"  // mov $0x1,%eax
  "\xbb\x00\x00\x00\x00"  // mov $0x0,%ebx
  "\xcd\x80"              // int $0x80
  "\xe8\xdd\xff\xff\xff"  // call (relative)
  "Hello world!\r\n";

int main(int argc, char **argv)
{
  (*(void(*)())code)();

  return 0;
}