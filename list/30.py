def rotate_left(lst, positions):
    if len(lst) == 0:
        return lst  
    
    positions %= len(lst)  #
    return lst[positions:] + lst[:positions]


my_list = [1, 2, 3, 4, 5]
rotated_list = rotate_left(my_list, 2)
print(rotated_list)  # Output: [3, 4, 5, 1, 2]

