from main import *

def reverse(arr):
    start,end = 0,len(arr)-1

    while start<end:
        arr[start],arr[end] = arr[end],arr[start]
        start+=1
        end-=1
    print(arr)



i = i1()
a = arr()
reverse(a)