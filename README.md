This project is pretty straightforward, you have to recode printf. 

You will learn what is and how to implement variadic functions. 
The `ft_printf()` function doesn't implement all the conversions, only the following ones: cspdiuxX%

## Clone

```bash
git clone https://github.com/pemiguel-dca/ft_printf.git
```
When you have cloned the repo, you just need to run ```make``` inside of the 'src' directory.

## Instalation

In this project the `ft_printf()` function will be in the 'libftprintf.a' library, so if you wanna try it you have to add this flag while compiling.

```bash
cc main.c -L. libftprintf.a
```
