#!/usr/bin/python3
"""Returns the perimeter of the island described in grid:"""


def island_perimeter(grid):
    """Define island_perimeter"""
    land_zone = 1
    perimeter = 0

    for row in range(1, len(grid)):
        for col in range(len(grid[row])):
            if col > 0:
                if grid[row][col] == land_zone:
                    env_list = [grid[row - 1][col], grid[row]
                                [col + 1], grid[row + 1][col], grid[row][col - 1]]
                    count = 0
                    print(env_list)
                    for i in env_list:
                        if i == 0:
                            count += 1
                    if count == 4:
                        return 4
                    elif count == 3:
                        perimeter += 3
                    elif count == 2:
                        perimeter += 2
                    elif count == 1:
                        perimeter += 1
                    else:
                        pass

    return perimeter
