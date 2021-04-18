

a = "abcdefghijklmnopqrstuwxyz"


n = 5
a = a[:n]


a = a[n-1::-1] #reversing 
rev = n-1
count , i = 0 , 0
while i>=0:
    
    count+=1
    res = '-'.join(a[:i]+a[i::-1])
    print(res.center((4*n)-3, '-'))
    if(count >= (n)):
        i-=1
    else:
        i+=1


   



