#include <stdio.h>

int main() {
    printf("Compiler: %s\n", 
    #ifdef __clang__
        "Clang/LLVM"
    #elif defined(__GNUC__) || defined(__GNUG__)
        "GCC"
    #elif defined(_MSC_VER)
        "MSVC"
    #else
        "Unknown"
    #endif
    );

    printf("Compiler version: ");
    #ifdef __clang__
        printf("%d.%d.%d\n", __clang_major__, __clang_minor__, __clang_patchlevel__);
    #elif defined(__GNUC__) || defined(__GNUG__)
        printf("%d.%d.%d\n", __GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__);
    #elif defined(_MSC_VER)
        printf("%d\n", _MSC_VER);
    #else
        printf("Unknown\n");
    #endif

    return 0;
}