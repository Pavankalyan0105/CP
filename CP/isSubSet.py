def isSubset(arr,sum):
    rows = len(arr)
    cols = sum+1
    
    DP = [[False for j in range(cols)] for i in range(rows)]
    # arr = sorted(arr)
    for i in DP:
        print(i)
    
    DP[0][arr[0]] = True

    for i in range(rows):
        DP[i][0] = True

    for i in range(1 ,rows):
        for j in range(1 ,cols):
            if(arr[i] > j):
                DP[i][j] = DP[i-1][j]
            
            else:
                DP[i][j] = DP[i-1][j] or DP[i-1][j-arr[i]]
 

    print(" - - - - - - - - - - - - - ")
    print()
    print()

    for i in DP:
         print(i)
    


arr =  [3,4,5,2]   
sum =  6           
isSubset(arr , sum)