Str = input()

sub_str = input()

i,j,count = 0,0,0
N , n = len(Str) , len(sub_str)

while i<N:
    j =0 
    while i<N and j<n and Str[i]==sub_str[j]:
        i+=1
        j+=1
    if j==n:
        count+=1
        i-=n
    i+=1
        

print(count)
        
    