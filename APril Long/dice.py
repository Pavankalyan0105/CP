li = [0 , 20 , 36 , 51 , 60]
re = {1:16 , 2:12 , 3:11 , 0:5}


def solve(N):
    base_sum = li[4]
    if N<=4: return li[N]
        

    sum = base_sum
    r = N%4

    while r>0: sum-=re[r]; r-=1;

    sum+=(((N//4)-1)*44)

    return sum

   

T =  int(input())
while T>0:
    n = int(input())
    print(solve(n))
    T-=1