def toString(List):
	return ''.join(List)
def permute(a, l, r):
	if l==r:
		print(toString(a))
	else:
		for i in range(l,r+1):
			a[l], a[i] = a[i], a[l]
			permute(a, l+1, r)
			a[l], a[i] = a[i], a[l] # backtrack

string=['a','b','c']
n = len(string)
permute(string, 0, n-1)

# alternative solution
"""
def permutation(lst):
	if len(lst) == 0:
		return []
	if len(lst) == 1:
		return [lst]
	l = [] 
	for i in range(len(lst)):
	m = lst[i]
	remLst = lst[:i] + lst[i+1:]
	for p in permutation(remLst):
		l.append([m] + p)
	return l

data = list('123')
for p in permutation(data):
	print p

"""