def solve(arr):
    arr.sort()
    n = len(arr)

    odds  = arr[0:(len(arr)//2)+(len(arr)%2)]
    evens = arr[len(odds):]
    odds.sort(reverse = True)


    i  , j = 0 ,0
    while i<n and j<len(odds):
        arr[i] = odds[j]
        i+=2
        j+=1

    i , j = 1,0
    while i<n and j<len(evens):
        arr[i] = evens[j]
        i+=2
        j+=1
    
    print(arr)



# arr = [1,2,3,4,5,6,7]
arr = [1,2,1,4,5,6,8,8]
solve(arr)