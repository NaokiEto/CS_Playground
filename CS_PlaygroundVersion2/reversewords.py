from string import*

def reverse1(text):
    return " ".join(text.split()[::-1])

def reverse2(text):
    return " ".join(reversed(text.split()))
