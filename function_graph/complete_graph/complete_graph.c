/*
** EPITECH PROJECT, 2018
** Untitled (Workspace)
** File description:
** complete_graph.c
*/

#include "utils_lem_in.h"

int check_nb_ant(char *nb_ant)
{
    for (int i = 0; nb_ant[i] != '\0'; i += 1) {
        if (nb_ant[i] < '0' || nb_ant[i] > '9') {
            return (-1);
        }
    }
    return (my_getnbr(nb_ant));
}

int complete_graph(graph_t *graph, char **script_tab)
{
    int i = 1;

    if ((graph->nb_ants = check_nb_ant(script_tab[0])) == -1)
        return (-1);
    my_printf("#number_of_ants\n%d\n", graph->nb_ants);
    if (complete_vertex(graph, script_tab, &i) == -1)
        return (-1);
    if (complete_node(graph, script_tab, &i) == -1)
        return (-1);
    if (script_tab[i] != NULL)
        return (-1);

    return (1);
}