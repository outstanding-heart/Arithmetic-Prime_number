# Auther: Lee.HJ
# Create time: 11/9/2014 00:32
# Instruction: A way from www.zhihu.com to solve the problem that print the prime number between 0 to 100
# Ps: Python !

#!/usr/bin

print filter( lambda x: len(filter(lambda y: x%y == 0,range(2,x-1))) == 0 , range(2,101) )
