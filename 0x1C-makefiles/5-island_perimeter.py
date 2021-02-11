#!/usr/bin/python3


""" Module 5-island_perimeter"""


def island_perimeter(grid):
    """ function island_perimeter """
    hg = len(grid)
    wd = len(grid[0])
    island = 0
    edges = 0

    for i in range(hg):
        for j in range(wd):
            if grid[i][j] == 1:
                island += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges = edges + 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges = edges + 1
    return (island * 4) - (edges * 2)
