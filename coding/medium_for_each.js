function main(tempText){
	textArr = tempText.split("")
	finalText = ""
	textArr.forEach(letters => {
		finalText += "||" + letters + "||"
	})
	return finalText
}



// what does this do ? 
// no need to be specific if you have a clue where this goes just answer it anyway
