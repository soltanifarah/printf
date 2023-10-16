Printf Project
The Printf project is a collaborative project in C programming, aimed at re-implementing the printf function found in the standard C library. The printf function is used to format and print data to the standard output. This project will help you gain a better understanding of formatting, parsing, and printing output in C
Group Members: Farah Soltani, Jlili Chouaib
Task Descriptions
Task 0: I'm not going anywhere.
In this task, we create a custom printf function that handles the following conversion specifiers: c, s, and %. We do not need to handle flag characters, field width, precision, or length modifiers.

Task 1: Education is when you read the fine print.
Task 1 builds upon Task 0 by adding support for conversion specifiers d and i. Similar to Task 0, we do not need to handle flag characters, field width, precision, or length modifiers.

Task 2: With a face like mine, I do better in print (Advanced)
This advanced task introduces a custom conversion specifier %b, which converts an unsigned integer to binary.

Task 3: What one has not experienced, one will never understand in print (Advanced)
In this advanced task, we handle conversion specifiers u, o, x, and X. Just like in previous tasks, flag characters, field width, precision, and length modifiers are not required.

Task 4: Nothing in fine print is ever good news (Advanced)
Task 4 focuses on optimizing the code by using a local buffer to minimize calls to the write function.

Task 5: My weakness is wearing too much leopard print (Advanced)
In this task, we implement a custom conversion specifier %S for printing strings, with special handling for non-printable characters.

Task 6: How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print (Advanced)
Task 6 introduces the p conversion specifier, which prints the address of a pointer.

Task 7: The big print gives and the small print takes away (Advanced)
This task involves handling flag characters, such as +, space, and #, for non-custom conversion specifiers.

Task 8: Sarcasm is lost in print (Advanced)
Task 8 addresses length modifiers, specifically l and h, for conversion specifiers d, i, u, o, x, and X.

Task 9: Print some money and give it to us for the rain forests (Advanced)
This task is about handling field width for non-custom conversion specifiers.

Task 10: The negative is the equivalent of the composer's score, and the print the performance (Advanced)
Task 10 involves handling precision for non-custom conversion specifiers.

Task 11: It's depressing when you're still around and your albums are out of print (Advanced)
In this task, we implement the 0 flag character for non-custom conversion specifiers.

Task 12: Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection (Advanced)
Task 12 focuses on handling the - flag character for non-custom conversion specifiers.

Task 13: Print is the sharpest and the strongest weapon of our party (Advanced)
Task 13 introduces a custom conversion specifier %r, which prints a reversed string.

Task 14: The flood of print has turned reading into a process of gulping rather than savoring (Advanced)
In Task 14, we implement the custom conversion specifier %R, which performs the ROT13 encoding on a string.

Task 15: *
The final task involves ensuring that all the above options work well together.

Project Requirements
Environment: All code will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
File Structure: All files should end with a newline, and a README.md file at the root of the project is mandatory.
Coding Style: Code should follow the Betty style, and betty-style.pl and betty-doc.pl will be used for checks.
Global Variables: Global variables are not allowed.
Function Limit: No more than 5 functions per file.
Header File: Prototypes of all functions should be included in a header file named main.h.
Header Guard: All header files should use include guards.
Compile Flags: The code will be compiled using gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c.
External Functions: You are allowed to use functions like write, malloc, free, va_start, va_end, va_copy, and va_arg.
Compilation and Usage
For compiling your code, you can use the following command:

bash
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
Ensure you do not include a main function in your C files used for testing. You can create separate test files if needed.
.
