



def solve():
    N , r = map(int , input().split())

    arr1 = []
    arr2 = []
 
    arr1 = list(map(int , input().split()))
    arr2 = list(map(int , input().split()))

    ans , sm = 0 , 0

    for i in range(N):
        sm+=arr2[i]
        ans = max(sm , ans)

        if i<N-1:
            sm-=((arr1[i+1]-arr1[i])*r)

    print(sm)




T = int(input())
while T>=1:
    solve()
    T-=1