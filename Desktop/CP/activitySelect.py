


def countMaxActivities(arr):
    i , j = 1 , 0
    activities = 1
    n = len(arr)
    while i<n:
        while i<n and arr[i][0]<arr[j][1]:
            i+=1
        if i<n:
              activities+=1

        j = i
        i+=1
       
    return activities








arr = [[5, 9], [1, 2], [3, 4], [0, 6],[5, 7], [8, 9]]



arr.sort(key = lambda x: x[1])
print(arr)
# print(countMaxActivities(arr))