# printf
Writing our own `printf` function. This is an ALX C Programming group project.

## printf working principle
- `printf` takes multiple arguments using `va_arg` function.
- User supplies a string and input arguments. Example:
```c
    printf("Hello, my name is %s having an id %d", name, id);
```
- `printf` creates an internal buffer for constructing output string.
- Now `printf` iterates through each characters of user string and copies the character to the output string. `printf` only stops at `%`. `%` means there is an argument to convert. Arguments are in the form of `char`, `int`, `long`, `float`, `double` or `string`. It converts it to string and appends to output buffer. If the argument is string then it does a string copy.
- Finally `printf` may reach at the end of user string and it copies the entire buffer to the stdout file.

## Authorized functions and macros
`write` (`man 2 write`)  
`malloc` (`man 3 malloc`)  
`free` (`man 3 free`)  
`va_start` (`man 3 va_start`)  
`va_end` (`man 3 va_end`)  
`va_copy` (`man 3 va_copy`)  
`va_arg` (`man 3 va_arg`)  

- The `test` directory contains all main files used to test our code.
- The prototypes of all your functions are included in our header file `main.h`.

## Authors
- Ajisafe Oluwapelumi [@ajipelumi](https://github.com/ajipelumi)
- Henry Danso [@25dark](https://github.com/25dark)
