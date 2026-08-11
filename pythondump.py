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




# Program to calculate the grade of a student

score = float(input("Enter the student's score: "))

if score >= 90 and score <= 100:
    print("Grade: A")
elif score >= 80:
    print("Grade: B")
elif score >= 70:
    print("Grade: C")
elif score >= 60:
    print("Grade: D")
elif score >= 0:
    print("Grade: F")
else:
    print("Invalid score.")


# Program to perform string operations

sentence = input("Enter a sentence: ")

# String concatenation
extra = input("Enter another string to concatenate: ")

concatenated = sentence + " " + extra

print("Concatenated string:", concatenated)

# String slicing
start = int(input("Enter starting index for slicing: "))
end = int(input("Enter ending index for slicing: "))

print("Sliced string:", sentence[start:end])

# Check for a specific word
word = input("Enter a word to search: ")

if word in sentence:
    print("The word is present in the sentence.")
else:
    print("The word is not present in the sentence.")