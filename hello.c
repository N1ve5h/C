#include <stdio.h>

void main() {
    // \b backspace, \t tab, \" double quotes \\ single backslash
    printf("\"hello\b\",\\ world\n");
    printf("Audible or visual alert. \a\n");
    printf("Form feed. \f\n");
    printf("This escape, \r, moves the active position to the initial position of the current line.\n");
    printf("Vertical tab \v is tricky, as its behaviour is unspecified under certain conditions.\n");
}