def binary_search(v, left, right, find):
    while left<=right:
        mid = int((left+right)/2)
        
        if v[mid] == find:
            return mid
        elif v[mid] < find:
            left = mid + 1
        else:
            right = mid - 1
    return -1

a = [1,2,3,4,5]
print(binary_search(a, 0, 4, 3))