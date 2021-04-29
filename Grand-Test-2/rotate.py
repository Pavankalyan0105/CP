s = input()

def rotate(s):
    n = len(s)
    print(s)
    ans = (s[1:n]+s[0])
    return ans


print(s)
for i in range(len(s)-1):
    s = rotate(s)