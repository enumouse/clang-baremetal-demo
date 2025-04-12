#define TEXT_COLOUR 0x07

// Kernel entry point
void kmain(void)
{
    char *output = (char*)0xb8000;
    const char *message = "I was made with clang!";

    // Clear screen
    for(int i = 0; i<25*80; i++)
        output[2*i] = 0;

    // Write text
    for(int i = 0; message[i] != '\0'; i++) {
        output[2*i] = message[i];
        output[(2*i) + 1] = TEXT_COLOUR;
    }
}
