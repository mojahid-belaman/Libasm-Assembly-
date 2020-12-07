#ifndef LIBASM_H
# define LIBASM_H
#include <unistd.h>

size_t  ft_strlen(const char *str);
char    *stpcpy(char *dst, const char *src);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);

#endif