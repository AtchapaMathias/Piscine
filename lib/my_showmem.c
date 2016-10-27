/*
** my_showmem.c for  in /home/Tamsi/mylib/lib/my
** 
** Made by Tamsi Besson
** Login   <Tamsi@epitech.net>
** 
** Started on  Sun Oct 16 19:01:33 2016 Tamsi Besson
** Last update Mon Oct 17 23:35:54 2016 Tamsi Besson
*/

#include <my.h>

void    show_line(char *str, int size)
{
  int   i;

  my_putptr_base(str, "0123456789ABCDEF");
  my_putstr(": ");
  i = 0;
  while (i < size)
    {
      if (str[i] < 16)
        my_putchar('0');
      my_putnbr_base(str[i], "0123456789ABCDEF");
      if (i % 2 == 1)
        my_putchar(' ');
      i = i + 1;
    }
  i = 0;
  while (i < size)
    {
      if (is_printable(str[i]))
        my_putchar(str[i]);
      else
        my_putchar('.');
      i = i + 1;
    }
  my_putchar('\n');
}

void    my_showmem(char *str, int size)
{
  int   i;

  i = 0;
  while (i < size)
    {
      show_line(str, 16);
      str = str + 16;
      i = i + 1;
    }
}
