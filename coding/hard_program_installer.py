import datetime

def activation():
	print("program activation")
	activationNumbers = int(input("input code: "))
	return activationNumbers

def calcumalations(code):
	now = datetime.datetime.now()
	a1 = now.second
	a2 = (now.minute*60) + a1
	a3 = (now.hour*60) + a2
	a4 = (now.day*24) + a3

	firstCode = ( (code > a2) and (code < a2 + 10) )
	secondCode = ( (code > a3) and (code < a3 + 10) )
	thirdCode = ( (code > a4) and (code < a4 + 10) )

	if(firstCode or secondCode or thirdCode):
		print("congrats... =_=")
	else:
		print("get out of here, pirates are not welcomed    >:( ")

activationCodes = activation()
calcumalations(activationCodes)


# try to enter the correct number...
# or atleast give us an explanation of how this code works
# no need to be specific if you have a clue where this goes just answer it anyway
