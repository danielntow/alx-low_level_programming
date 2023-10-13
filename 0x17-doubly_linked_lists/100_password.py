import subprocess
import os

# Get the current working directory
current_dir = os.path.dirname(os.path.abspath(__file__))

# Function to test a password


def test_password(password):
    crackme_path = os.path.join(current_dir, "crackme4.pyc")
    command = ["python3", crackme_path, password]
    try:
        result = subprocess.run(
            command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, check=True)
        return "OK" in result.stdout
    except subprocess.CalledProcessError:
        return False


# Flag to track whether the password was found
password_found = False

# Loop to find the correct password
for char in range(32, 127):  # ASCII characters from space to tilde (~)
    char = chr(char)
    if test_password(char):
        with open("100-password", "w") as file:
            file.write(char)
        print(f"Password found: {char}")
        password_found = True
        break

if not password_found:
    print("Password not found.")

# import subprocess
# import os

# # Get the current directory where the Python script is located
# current_dir = os.path.dirname(os.path.abspath(__file__))
# crackme4_path = os.path.join(current_dir, "crackme4")


# def test_password(password):
#     command = [crackme4_path, password]
#     result = subprocess.run(command, stdout=subprocess.PIPE,
#                             stderr=subprocess.PIPE, text=True)
#     return result.stdout.strip() == "OK"


# def find_password():
#     charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
#     password = ""

#     for char in charset:
#         test_password_result = test_password(password + char)
#         if test_password_result:
#             password += char
#         else:
#             return None

#     return password


# password = find_password()

# if password is not None:
#     with open("100-password", "w") as file:
#         file.write(password)
# else:
#     print("Password not found.")
