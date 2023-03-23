#!/usr/bin/python3
"""Island perimeter module"""

def island_perimeter(grid):
    """Function calculated the perimeter of an island in grid"""
    height = len(grid)
    width = len(grid[0])
    perimeter = 0

    for row in range(height):
        for col in range(width):
            if grid[row][col] == 1:
                # check North
                if (row == 0) or (row > 0 and grid[row - 1][col] == 0):
                    perimeter += 1
                # check South
                if (row == height) or (row < height and grid[row + 1][col] == 0):
                    perimeter += 1
                # check West
                if (col == 0) or (col > 0 and grid[row][col - 1] == 0):
                    perimeter += 1
                # check East
                if (col == width) or (col < height and grid[row][col + 1] == 0):
                    perimeter += 1
    return perimeter
