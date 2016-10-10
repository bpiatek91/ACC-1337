x=0 
for i in range (3): 
	guess = int(input("guess a number"))
	x+=1
	if (guess == 2):
		print ("This is working")
		break
	print("Failed login attempt: "+str(x))
	if (x==3): 
		print("Login failed. Try again later.")
		break