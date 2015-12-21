divisible_by_nums = [11, 13, 14, 16, 17, 18, 19, 20]
# divisible_by_nums = range(1, 10)

def is_divisible_by_all(num):

	for n in divisible_by_nums:
		if not num % n == 0:
			return False

	return True


i = 2520

while True:

	if is_divisible_by_all(i):
		print i
		exit(0)

	i = i + 2520