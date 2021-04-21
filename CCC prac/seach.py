
def binarySearch(arr , ele):
    
    left = 0
    right = len(arr)-1
    
    while left<=right:
        mid = (left+right)//2
        
        if arr[mid] == ele:
            return True
            
        elif arr[mid] > ele:
                right = mid-1
        else:
                left = mid+1
        
        
    return False
    
    
arr = [1,2,3,4,34,45,56,67,67,67,433,9]
print(binarySearch(arr , 34))

s = '3434'
print(len(s))