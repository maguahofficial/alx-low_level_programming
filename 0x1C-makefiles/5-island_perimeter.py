#!/usr/bin/python3
"""Code Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Code Returns the perimiter of an island.

    grid represents water by 0 and land by 1.

    Args:
        grid (list):  list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    widthvrble = len(grid[0])
    heightvrble = len(grid)
    edgesvrble = 0
    sizevrble = 0

    for i in range(heightvrble):
        for j in range(widthvrble):
            if grid[i][j] == 1:
                sizevrble += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edgesvrble += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edgesvrble += 1
    return sizevrble * 4 - edgesvrble * 2
