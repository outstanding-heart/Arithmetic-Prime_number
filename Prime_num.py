# Author: Lee.HJ

# Create time: 11/19/2014 19:55

# Topic: Calculate the prime number between min 
# and max and put them into the file

from sys import argv

script, filename = argv

def Prime_number(Min, Max):
	word = []
	for i in range(Min, Max):
		count = 0
		for j in range(2, (i/2)+1):
			if i%j == 0:
				count = 1
				break
		if count == 0:
			word.append(i)
			#print "%d" % i
	return word

Min = int(raw_input("The min number is :"))
Max = int(raw_input("The max number is :"))

word = Prime_number(Min, Max)

File = open(filename, 'w')

for i in word:
	File.writelines(str(i) + ',')

File.writelines('\n')

File.close()
