def palindrome(n,number):
	n=str(n)
	rev=n[::-1]
	n=int(n)
	rev=int(rev)
	if rev==n and rev>number:
		return True
	else:
		return False


t=int(raw_input())
while t:
	n=int(raw_input())
	number = n
	while palindrome(n,number)==False:
		number=n
		n+=1
	print n
	t-=1