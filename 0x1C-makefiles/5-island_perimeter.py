#!/usr/bin/python3
"""perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    p = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for x, s in enumerate(grid):
        for y, m in enumerate(s):
            if m == 1:
                if x == 0 or grid[x - 1][y] != 1:
                    p += 1
                if y == 0 or grid[x][y - 1] != 1:
                    p += 1
                if y == width or grid[x][y + 1] != 1:
                    p += 1
                if x == length or grid[x + 1][y] != 1:
                    p += 1
    return p
