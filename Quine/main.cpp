#include <iostream>

int main(int argc, const char * argv[]) {
    char quotationMark = 34;
    char newLine = 13;
    char comma = 44;
    const char *sourceCode[24] = {
        "#include <iostream>",
        "",
        "int main(int argc, const char * argv[]) {",
        "    char quotationMark = 34;",
        "    char newLine = 13;",
        "    char comma = 44;",
        "    const char *sourceCode[24] = {",
        "    };",
        "    ",
        "    // Print opening code",
        "    for (int i = 0; i < 7; i++)",
        "        std::cout << sourceCode[i] << newLine;",
        "    ",
        "    // Print the array of source code",
        "    int sourceSize = sizeof(sourceCode) / sizeof(*sourceCode);",
        "    for(int i = 0; i < sourceSize; i++)",
        "        std::cout << sourceCode[8] << sourceCode[8] << quotationMark << sourceCode[i] << quotationMark << comma << newLine;",
        "    ",
        "    // Print ending code",
        "    for (int i = 7; i < sourceSize; i++)",
        "        std::cout << sourceCode[i] << newLine;",
        "    ",
        "    return 0;",
        "}",
    };
    
    // Print opening code
    for (int i = 0; i < 7; i++)
        std::cout << sourceCode[i] << newLine;
    
    // Print the array of source code
    int sourceSize = sizeof(sourceCode) / sizeof(*sourceCode);
    for(int i = 0; i < sourceSize; i++)
        std::cout << sourceCode[8] << sourceCode[8] << quotationMark << sourceCode[i] << quotationMark << comma << newLine;
        
    // Print ending code
    for (int i = 7; i < sourceSize; i++)
        std::cout << sourceCode[i] << newLine;
    
    return 0;
}
