// Exercise 1-2. Experiment to find out what happens when prints's argument string contains \
// \c, where c is some character not listed above.

#include <stdio.h>

void main() {
    printf("Hello, World!\n===============================\n");
    printf("Hello,\a a!\n===============================\n");
    printf("Hello,\b b!\n===============================\n");
    // printf("Hello,\c c!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\d d!\n===============================\n"); // Uknown escape sequence
    printf("Hello,\e e!\n===============================\n");
    printf("Hello,\f f!\n===============================\n");
    // printf("Hello,\g g!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\h h!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\i i!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\j j!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\k k!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\l l!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\m m!\n===============================\n"); // Uknown escape sequence
    printf("Hello,\n n!\n===============================\n");
    // printf("Hello,\o o!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\p p!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\q q!\n===============================\n"); // Uknown escape sequence
    printf("Hello,\r r!\n===============================\n");
    // printf("Hello,\s s!\n===============================\n"); // Uknown escape sequence
    printf("Hello,\t t!\n===============================\n");
    printf("Hello,\u21ff u21ff!\n===============================\n");
    printf("Hello,\v v!\n===============================\n");
    // printf("Hello,\w w!\n===============================\n"); // Uknown escape sequence
    printf("Hello,\x40 x40!\n===============================\n");
    // printf("Hello,\y y!\n===============================\n"); // Uknown escape sequence
    // printf("Hello,\z z!\n===============================\n"); // Uknown escape sequence
}