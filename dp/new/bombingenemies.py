def Kill_Enemy(s, row, col):
	for i in range(row):
		for j in range(col):
			if (s[i][j] == 'B'):
				for x in range(row):
					if (s[x][j] != 'B'):
						s[x][j] = 'X'
				for y in range(col):
					if (s[i][y] != 'B'):
						s[i][y] = 'X'
	for i in range(row):
		for j in range(col):
			if (s[i][j] == 'E'):
				return 0
	return 1
s = [['X','X','E','X'],
    ['X','B','X','X'],
    ['X','E','X','X'],
    ['X','X','B','X']]

row = len(s)
col = len(s[0])
if (Kill_Enemy(s, row, col) == 1):
    print("Yes")
else:
    print("No")

