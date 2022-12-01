def selectionsort(v):
    min_ = 0
    idx_ = 0
    tmp_ = 0

    for i in range(len(v)):
        min_ = v[i]
        idx_ = i 
        
        for j in range(i+1, len(v)):
            if v[j] < min_:
                min_ = v[j]
                idx_ = j

        tmp_ = v[i]
        v[i] = min_
        v[idx_] = tmp_

a = [5,4,3,2,1]
selectionsort(a)
print(a)