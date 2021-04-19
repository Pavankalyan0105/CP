def solve():
    am , bm , cm , tm , a , b ,c = map(int , input().split())

    c_score = a+b+c
    if a>=am and b>=bm and c>=cm and c_score>=tm:
        print("YES")
        return 

    print("NO")





T = int(input())
while T>=1:
    solve()
    T-=1