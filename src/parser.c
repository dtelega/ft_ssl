//
// Created by root on 11/12/18.
//

#include "../include/md5.h"

int    pars_input(int ac, char **av, t_args *ag)
{
    int i = 1;

    ag->command = 0;
    ag->f_p = 0;
    ag->f_q = 0;
    ag->f_r = 0;
    ag->f_s = 0;

    (!ft_strcmp(av[1], "md5")) ? (ag->command = 1) : (ag->command = 2);

    while (++i < ac)
        if (av[i][0] == '-')
        {
            if (ft_strlen(av[i]) != 2)
                return 0;
            if (av[i][1] == 'p')
                ag->f_p = 1;
            else if (av[i][1] == 'q')
                ag->f_q = 1;
            else if (av[i][1] == 'r')
                ag->f_r = 1;
            else if (av[i][1] == 's')
                ag->f_s = 1;
            else
                return (0);
        }
        else
            break ;
    ag->file_count = ac - i;
    ag->files = (char **)malloc(sizeof(char **) * ag->file_count);
    int k = 0;
    while (i < ac)
        ag->files[k++] = av[i++];


//    read_fd(ag);


    return (1);
}

void    read_fd(t_args *ag)
{
    char    buffer[1];

    char    *line;

    printf("test %ld\n", read(0, buffer, 1));
    while (read(0, buffer, 1) > 0)
    {
        printf("buffer: %s\n", buffer);
        line = ft_strjoin(line, buffer);
    }
    line = ft_strjoin(line, '\0');
    printf("read line : %s", line);
}
