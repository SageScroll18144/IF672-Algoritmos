def bubblesort(v):
    for i in range(len(v)):
        for j in range(1, len(v)):
            if v[j-1] > v[j]:
                v[j-1] += v[j]
                v[j] = v[j-1] - v[j]
                v[j-1] -= v[j]

a = [5,4,3,2,1]
bubblesort(a)
print(a)