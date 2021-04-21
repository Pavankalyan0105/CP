

def solve():
    r,c,k = map(int , input().split()) 
    arr = [[0]*(c) for i in range(r)]
    
    #Reading array
    for i in range(r):
        arr[i] = list(map(int , input().split()))
   

    #Inserting zeros in first row and first column
    arr.insert(0, [0]*c)
    for i in arr:
        i.insert(0,0)

    #setting p 
    p = [[0]*(c+1) for i in range(r+1)]
    for i in range(1,r+1):
        for j in range(1,c+1):
            p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + arr[i][j]

    #print(p)   

    #calculating sums
    count = 0
    n = min(r , c)
    for i in range(1 , n+1):
        
        for x in range(1,r-i+2):
            for y in range(1,c-i+2):
                sm = p[x+i-1][y+i-1] - p[x+i-1][y-1] - p[x-1][y+i-1] + p[x-1][y-1]
               # print("Sums" ,sm)
                if ((sm)//(i*i))>=k:
                    count += 1


    print(count)









T = int(input())


while T>0: 
    solve()
    T-=1