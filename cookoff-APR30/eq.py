T = int(input())

eq = "EQUINOX"


while T>0:
    
    N , A , B = map(int , input().split())

    sart , anu = 0,0

    while N>0:

        st = input()
        if(eq.find(st[0]) != -1):
            sart+=A
        else:
            anu+=B
        N-=1

    if anu > sart:
        print("ANURADHA")
    elif anu < sart:
        print("SARTHAK")

    else :
        print("DRAW")
    
    T-=1