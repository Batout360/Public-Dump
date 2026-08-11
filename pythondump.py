# Program to calculate the area of a circle

radius = float(input("Enter the radius of the circle: "))

area = 3.14159 * radius * radius

print("Area of the circle =", area)








# Program to check whether a number is positive, negative, or zero

num = float(input("Enter a number: "))

if num > 0:
    print("The number is positive.")
elif num < 0:
    print("The number is negative.")
else:
    print("The number is zero.")



# Program to display the first n Fibonacci numbers

n = int(input("Enter the number of terms: "))

a = 0
b = 1

print("Fibonacci Series:")

for i in range(n):
    print(a, end=" ")
    a, b = b, a + b




