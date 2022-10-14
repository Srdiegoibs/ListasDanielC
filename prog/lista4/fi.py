def search(v, x):
    for i in range(len(v)):
        if v[i] == x:
            return i
    return -1

def remove(v,x):
    i = search(v, x)
    if i == -1:
        return -1
    else:
        for j in range (i, len(v)-1):
            v[j] = v[j+1]
        v.pop()

def main():
    v = [1,2,3,4,5,6,7,8,9,10]
    print(search(v, 5))
    print(search(v, 11))
    remove(v, 5)
    print(v)
    remove(v, 11)
    print(v)