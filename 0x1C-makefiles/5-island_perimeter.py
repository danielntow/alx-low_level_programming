#!/usr/bin/python3
"""
python module
"""


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in the given grid.

    Args:
    - grid (list of list of integers): Represents the grid with 0 as water zone and 1 as land zone.

    Returns:
    - int: Perimeter of the island.

    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
