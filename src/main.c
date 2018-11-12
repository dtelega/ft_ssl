//
// Created by root on 11/12/18.
//

#include "../include/md5.h"


void    print_crypto(t_args *ag)
{
    int    i;

    i = -1;
    while (++i < ag->file_count)
    {
        printf("%s\n",ag->files[i]);
    }
}

void    go_md5(int ac, char **av, t_args *ag)
{
    ag->fd = 0;
    if (pars_input(ac, av, ag) == 0)
    {
        ft_putstr("Bad input!\n");
        return ;
    }

    printf("md5,sha256= %i\n",ag->command);
    printf("%i\n",ag->f_p);
    printf("%i\n",ag->f_q);
    printf("%i\n",ag->f_r);
    printf("%i\n",ag->f_s);

    printf("fd file %i\n", ag->fd);

    printf("file count= %i\n",ag->file_count);


    print_crypto(ag);



    free(ag->files);
}

int    main(int ac, char **av)
{
    t_args  ag;


    if (ac == 1) {
        ft_putstr("Bonus part\n");
        return (0);
    }
    else if (!ft_strcmp(av[1], "md5") || !ft_strcmp(av[1], "sha256"))
    {
        go_md5(ac, av, &ag);
    }
    else
    {
        ft_putstr("ERROR input\n");
    }
    return (0);
}