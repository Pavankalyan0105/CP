


def solve(S , sub_str):
    N  , n  , i , j= len(S) , len(sub_str) , 0 , 0

    while j<n and i<N:
        if S[i] == sub_str[j]:
            i+=1
            j+=1
        else:
            i+=1

    if j==n:
        print("Yes")
    else:
        print("No")

    









sub_str  = "Goodbye"

S = input()
solve(S , sub_str)
