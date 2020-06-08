

def main():
	import sys 
	input=sys.stdin.readline 

	money=100
	x=int(input())

	for i in range(1,4000):
		money *=0.01 
		money=int(money)

		if money >=x:
			print(i)
			exit()

if __name__=='__main__':
	main()
	