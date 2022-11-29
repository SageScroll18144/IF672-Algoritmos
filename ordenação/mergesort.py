inf = 1000009

def mergesort(v):
    if len(v) == 1:
        return

    u1 = []
    u2 = []

    for i in range(len(v)):
        if i < len(v)/2:
            u1.append(v[i])
        else:
            u2.append(v[i])
    
    mergesort(u1)
    mergesort(u2)

    u1.append(inf)
    u2.append(inf)

    pointer_1 = 0
    pointer_2 = 0

    for i in range(len(v)):
        if u1[pointer_1] < u2[pointer_2]:
            v[i] = u1[pointer_1]
            pointer_1 += 1
        else:
            v[i] = u2[pointer_2]
            pointer_2 += 1

a = [5,4,3,2,1]
mergesort(a)
print(a)
