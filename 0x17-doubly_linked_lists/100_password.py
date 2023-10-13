import subprocess
import os

# Function to test a password


def test_password(password):
    # Specify the full path to the "crackme4" executable
    crackme4_path = os.path.join(os.path.dirname(
        os.path.abspath(__file__)), "crackme4")
    command = [crackme4_path, password]

    result = subprocess.run(command, stdout=subprocess.PIPE,
                            stderr=subprocess.PIPE, text=True)
    return "OK" in result.stdout


# Get the directory of the current script
script_directory = os.path.dirname(os.path.abspath(__file__))

# Iterate through different characters to find the correct password
correct_password = ""
characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

for char in characters:
    test_password_result = test_password(correct_password + char)
    if test_password_result:
        correct_password += char
        if correct_password == "OK":
            break

# Determine the path for the "100-password" file in the script directory
result_file_path = os.path.join(script_directory, "100-password")

# Save the correct password to the "100-password" file in the same directory as the script
with open(result_file_path, "w") as file:
    file.write(correct_password)
