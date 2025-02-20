def is_palindrome(num):
    return str(num) == str(num)[::-1]

if __name__ == "__main__":
    num = int(input("Enter a number: "))
    if is_palindrome(num):
        print(f"{num} is a palindrome.")
    else:
        print(f"{num} is not a palindrome.")
