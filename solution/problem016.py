# 2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
# What is the sum of the digits of the number 2^1000?

sumDigits = 0

for x in str(pow(2, 1000)):
	sumDigits += int(x)

print(f"Answer: {sumDigits}")

