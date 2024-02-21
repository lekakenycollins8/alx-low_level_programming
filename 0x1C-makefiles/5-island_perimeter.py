#!/usr/bin/python3
"""calculates perimeter of island described in grid"""


def island_perimeter(grid):
    """calculates perimeter of grid
    grid: 
         a list of list of integers:
         0 represents a water zone
         1 represents a land zone
         One cell is a square with side length 1
         Grid cells are connected horizontally/vertically (not diagonally).
         Grid is rectangular, width and height don’t exceed 100
    """
    if not grid:
        return 0;

    perimeter = 0
    rows, colms = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(colms):
            if grid[i][j] == 1:
                perimeter += 4 #Each land cell contributes 4 sides
                #check adjacent cells and substract 1 for each land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2;
    return perimeter
