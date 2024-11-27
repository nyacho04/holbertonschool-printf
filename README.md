# holbertonschool-printf

*Project creatd by Ignacio Devita and Rodrigo Ferrer*

• **What it is?**

This `_printf` function is a custom implementation of the standard `printf` function in C. this can be able to interpret and display text in the console based on the provided arguments.


• **How it works?**


```c
int _printf(const char *format, ...);
```
Our _printf implementation can handle the following formats:

- `%c`: prints a character
- `%d`: prints an integer
- `%s`: prints a character strings
- `%%`: prints the character %

*(the function must return the number of characters printed)*

`format`: the string of characters that specifies the output.

`...`: variable arguments to be printed according to the placeholder.
