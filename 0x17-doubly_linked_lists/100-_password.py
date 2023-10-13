import py_compile  # Import the py_compile module
import subprocess
import os


import subprocess
import os

# Function to test a password


def test_password(password):
    # Use "python" to run the Python script directly
    command = ["python", "crackme4", password]
    result = subprocess.run(command, stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE, text=True)
    return "OK" in result.stdout


# Iterate through different characters to find the correct password
correct_password = ""
characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

for char in characters:
    test_password_result = test_password(correct_password + char)
    if test_password_result:
        correct_password += char
        if correct_password == "OK":
            break

# Determine the directory of the Python script
script_directory = os.path.dirname(os.path.abspath(__file__))

# Save the correct password to the "100-pass" file in the same directory as the script
result_file_path = os.path.join(script_directory, "100-password")
with open(result_file_path, "w") as file:
    file.write(correct_password)

# # Function to test a password


# def test_password(password):
#     command = [os.path.join(os.path.dirname(
#         os.path.abspath(__file__)), "crackme4"), password]
#     result = subprocess.run(command, stdout=subprocess.PIPE,
#                             stderr=subprocess.PIPE, text=True)
#     return "OK" in result.stdout


# # Iterate through different characters to find the correct password
# correct_password = ""
# characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

# for char in characters:
#     test_password_result = test_password(correct_password + char)
#     if test_password_result:
#         correct_password += char
#         if correct_password == "OK":
#             break

# # Determine the directory of the Python script
# script_directory = os.path.dirname(os.path.abspath(__file__))

# # Save the correct password to the "100-pass" file in the same directory as the script
# result_file_path = os.path.join(script_directory, "100-password")
# with open(result_file_path, "w") as file:
#     file.write(correct_password)


# # Compile the Python bytecode file
# py_compile.compile("crackme4")

# # Specify the path to the bytecode file
# bytecode_file = "crackme4.pyc"

# # Function to test a password


# def test_password(password):
#     command = ["/usr/bin/env", "python", bytecode_file,
#                password]  # Use "python" to run the bytecode
#     result = subprocess.run(command, stdout=subprocess.PIPE,
#                             stderr=subprocess.PIPE, text=True)
#     return "OK" in result.stdout


# # Iterate through different characters to find the correct password
# correct_password = ""
# characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

# for char in characters:
#     test_password_result = test_password(correct_password + char)
#     if test_password_result:
#         correct_password += char
#         if correct_password == "OK":
#             break

# # Determine the directory of the Python script
# script_directory = os.path.dirname(os.path.abspath(__file__))

# # Save the correct password to the "100-pass" file in the same directory as the script
# result_file_path = os.path.join(script_directory, "100-pass")
# with open(result_file_path, "w") as file:
#     file.write(correct_password)
