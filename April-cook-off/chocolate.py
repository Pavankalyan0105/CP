





def solve():
    n , x = map(int , input().split())
    # arr = [];
    arr = set(map(int , input().split()))
    
    for_bro = n - len(arr)
    if(for_bro >= x):
        print(len(arr))
    else:
        print(len(arr)-(x - for_bro))











T = int(input())
while T>=1:
    solve()
    T-=1