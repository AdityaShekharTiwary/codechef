import math
for t in range(int(input())):
	n=int(input())
	w=list(map(int,input().split()))
	l=list(map(int,input().split()))
	arr={}
	s=0;
	for i in range(1,n+1):
		arr[i]=w.index(i)
	for i in range(2,n+1):
		temp1=arr[i]
		temp2=arr[i-1]
		temp=0
		if temp1<=temp2:
			temp=(math.ceil((temp2+1-temp1)/l[temp1]))
		s+=temp
		arr[i]+=temp*(l[temp1])
	print(s)