def ncr(n, r, p):
    num=den=1
    for i in range(r):
        num = (num * (n - i)) % p
        den = (den * (i + 1)) % p
    return (num * pow(den,p - 2, p)) % p
# p must be a prime
# greater than n
n, r, p = 10,2, 13
print("Value of nCr % p is", ncr(n, r, p))