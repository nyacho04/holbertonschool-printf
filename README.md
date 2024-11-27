# holbertonschool-printf

*Project creatd by Ignacio Devita and Rodrigo Ferrer.*

• **What it is?** 

This `_printf` function is a simplified implementation of the standard `printf` function in C. this can be able to interpret and display text in the console based on the provided arguments.


##  **How it works?** ⋮ 📝

```c
int _printf(const char *format, ...);
```
· · It initializates the `va_list` to obtain the arguments of the `variadic function` printf.

· · The function checks if the chain format char is a `%`, in that case, it advances to check the next character after `%` to obtain the type of data we want to print. 

· · We made a few functions to print characters, `strings`, `numbers`, `integers`, and the `percent`.

• This project we use the function `write(2),` conditional `switch` in order to reduce the length of the code instead of using the `if else` function. 
We don't implement `structures`, `functions pointers` because the complexity required was too much for the mandatory tasks xD.

##  **This _printf implementation can handle the following formats** ⋮ ⛓️‍💥

- `%c`: prints a character
- `%d`: prints an integer
- `%s`: prints a character strings
- `%%`: prints the character %
- `%i`: prints a number

*(the function must return the number of characters printed)*

`format`: the string of characters that specifies the output.

`...`: variable arguments to be printed according to the placeholder.
