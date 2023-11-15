# THE PRINTF PROJECT

TABLE OF CONTENTS:






/* LIST 0F PROTOTYPES OF CUSTOM PRINTF CALLED FUNCTION*/[https://github.com/Comfort99/myprintf/blob/main/main.h]

/ *
  * DESCRIPTION📝📝 - This custom ```printf``` functions prints out required strings to the standard output (as the original printf function).

  *  Custom conversion specifiers and length modifiers checked include :
  ```c , s, d, i, u, o, %, b, x, X, r, R, s, p, +, [space], #, l, h, ```

  *  Flag characters to be handled include :
  ``` -, 0, ```
### Further description:

  * ``b`` - an unsigned int argument converted to binary.

  * ```S``` - This prints a string,where non-printable characters (e.g \n,\0, \t) are printed as "\x (then the ASCII code of the non-printable character in UPPERCASE hexadecimal- 2 characters always)"
  For instance: \n = "\x0A"
  ```+, [space], #``` are for non-custom conversion specifiers
  * A local buffer of 1024 chars is used for the ```write``` function to be as little as possible.


