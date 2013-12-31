from string import*
import sys

text = sys.argv[1]

print text.split()

print " ".join(text.split()[::-1])
print " ".join(reversed(text.split()))
