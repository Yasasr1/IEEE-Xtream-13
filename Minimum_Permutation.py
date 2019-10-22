x,y=input().split()
n=int(x)
m=int(y)
list_n=[]
list_m=[]
list_n=list(map(int, input().split())) 
list_m=list(map(int, input().split()))
    
list_m.sort()
for k in range(len(list_m)):
    for l in range(len(list_n)):
        if list_m[k]<list_n[l]:
            list_n.insert(l,list_m[k])
            break
        elif list_m[k]>list_n[l] and l==len(list_n)-1:
            list_n.insert(l+1,list_m[k])
            break
            
for i in range(len(list_n)):
    print(list_n[i], end=" ")