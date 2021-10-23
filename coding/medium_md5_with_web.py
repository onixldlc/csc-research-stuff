import requests
import base64

def whatDoesThisDo(text):
	res = requests.get(((base64.b64decode("aHR0cHM6Ly9tZDVjYWxjLmNvbS9oYXNoL21kNS8=")).decode('ascii'))+str(text))
	pos = res.text.find("&quot;</h1>")
	return res[pos-32:pos]

print(whatDoesThisDo(1))


# how does this works and what does it do ? 
# no need to be specific if you have a clue where this goes just answer it anyway
