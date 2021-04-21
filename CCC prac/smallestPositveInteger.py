def smallestPositiveInteger(arr , n):
    ans = 1
    for i in arr:
        if i > ans: 
            return ans 

        ans+=i

    return ans
    


arr = [1,2,3,4,5,6]
print(smallestPositiveInteger(arr , len(arr)))
    
        