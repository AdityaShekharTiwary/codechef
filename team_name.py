def solve(l1,l2):
	s=len(set(l1+l2))
	return s
for t in range(int(input)):
	n=int(input())
	l=input().split()
	arr={}
	for i in l:
		p=i[1:]
		if p in arr:
			arr[p].append(i[0])
		else:
			arr[p]=[i[0]]
	b=list(arr.keys())
	s=0
	for i in range(len(arr)):
		for j in range(i+1,len(arr)):
			temp=solve(arr[b[i]],arr[b[j]])
			s+=(temp-len(arr[b[i]]))*(temp-len(arr[b[j]]))
	print(2*s)