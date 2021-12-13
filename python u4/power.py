def power(x,y):
    temp = 0
    if( y == 0):
        return 1
    temp = power(x, int(y / 2))
    if (y % 2 == 0):
        return temp * temp
    else:
        return x * temp * temp
print(power(2,3))        