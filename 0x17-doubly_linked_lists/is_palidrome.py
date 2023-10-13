# Function to check if a number is a palindrome
import os


# Get the current working directory
current_directory = os.getcwd()
result_file_path = os.path.join(current_directory, "102-result")

# Rest of the code remains the same


def is_palindrome(num):
    return str(num) == str(num)[::-1]


largest_palindrome = 0

# Loop through all 3-digit numbers
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result to a file (without newline or extra space)
with open("100-result", "w") as file:
    file.write(str(largest_palindrome))
    print(str(largest_palindrome))


# Get the current directory
current_directory = os.path.dirname(os.path.abspath(__file__))
result_file_path = os.path.join(current_directory, "102-result")

# Function to check if a number is a palindrome


def is_palindrome(num):
    return str(num) == str(num)[::-1]


largest_palindrome = 0

# Loop through all 3-digit numbers
for i in range(100, 1000):
    for j in range(i, 1000):
        product = i * j
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product

# Save the result to the "102-result" file in the current directory
with open(result_file_path, "w") as file:
    file.write(str(largest_palindrome))
