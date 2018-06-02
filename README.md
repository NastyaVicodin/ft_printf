# FT_PRINTF

Regardless of the programming language considered, the printf function,(or its equivalents) is always highly useful. The main reason is the ease of its formatting, and the support of diverse types in variable numbers. Some variations even propose to be able to write the resulting string of characters either in a file descriptor or in a particular stream. Some also propose to recall this string without printing it.

# Allowed functions

* write
* malloc
* free
* exit
* The functions of man 3 stdarg

# Mandatory part

* You have to recode the libc’s printf function.
* Your function will be called ft_printf and will be prototyped similarly to printf. • You won’t do the buffer management in the printf function.
* You have to manage the following conversions: sSpdDioOuUxXcC
* You must manage %%
* You must manage the flags #0-+ and space
* You must manage the minimum field-width
* You must manage the precision
* You must manage the flags hh, h, l, ll, j, et z.

# Bonus part

* More detailed flags management: *
* Non-existing flags management: %b to print in binary
