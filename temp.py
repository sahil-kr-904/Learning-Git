def factorial(n):
    if n==1:
        return 1
    return n*factorial(n-1)

print("Hello World!")
n = int(input("Enter Number:"))
print("Factorial of ",n," is: ",factorial(n))