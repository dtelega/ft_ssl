#ifndef MD5_H
# define MD5_H

#include <stdio.h>


#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>

#include "../libft/libft.h"
#include "get_next_line.h"

typedef struct		s_args
{
    unsigned char   command;

    unsigned char   f_p;
    unsigned char   f_q;
    unsigned char   f_r;
    unsigned char   f_s;

    char            **files;
    char            *fd_file;
    unsigned char   fd;
    int             file_count;


}                   t_args;


int     pars_input(int ac, char **av, t_args *ag);
void    read_fd(t_args *ag);

#endif