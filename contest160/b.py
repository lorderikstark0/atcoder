'''
find the golden coins 
'''

import sys 
p=sys.stdin.readline()

def happinessPoints(p):
	count=0
	while(p>0):
		if(p<500):
			count=count+p%5
		elif(p>500):
			count=count+p%