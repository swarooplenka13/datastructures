def gcd(a,b):
    dividend,divisor=0,0
    if a>=b:
        dividend=a
    else:
        dividend=b
    if a<=b:
        divisor=a
    else:
        divisor=b
    while divisor!=0:
        rem=dividend%divisor
        dividend=divisor
        divisor=rem
    return dividend
print(gcd(105,1))            