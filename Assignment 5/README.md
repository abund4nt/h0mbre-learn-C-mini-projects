A `convert()` function is created in order to perform the necessary calculations, four `int` type variables are defined, one called `seconds`, which will be the seconds entered by the user, and the other 3 `h` `m` `s`, which will be pointers. The calculations performed in the function are as follows.

- To calculate the hour divide the seconds by 3600.
- To calculate the minutes first subtract the seconds with the result of the multiplication of 3600 by the hours and this is divided by 60.
- To calculate the seconds first subtract the seconds with the result of the multiplication of 3600 by the hours and this is subtracted with the multiplication of the minutes by 60.

Finally we create a function `main()` which asks us for the number of seconds, calls the function `convert()` and using `printf()` plus the format specifier `%d` shows us how many hours, minutes and according to two are equivalent to those seconds entered by the user. Finally it returns the value 0.
