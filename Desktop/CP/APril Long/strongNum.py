# cook your dish here

def solve(exp , k):
    N = len(exp)
    
    i , cnt = 0,0
    
    while i<N:
        cnt = 0
        
        while i<N and exp[i]=='*':
            i+=1
            cnt+=1
            
        i+=1
        
        if cnt==k:
            return "YES"
    return "NO"
    
    
T = int(input())

while T>0:
    N , k = map(int , input().split())
    exp = input()
    print(solve(exp , k))
    T-=1
    