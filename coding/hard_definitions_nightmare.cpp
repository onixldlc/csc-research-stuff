#include "bits/stdc++.h"
#define FOREACHMACRO(_1, _2, _3, _4, NAME, ...) NAME

#define EXPAN_(x,y) x##y
#define EXPAN(x,y) EXPAN_(x,y)
#define UNIQUENAME(prefix) EXPAN(prefix,__LINE__)

#define foreach1(start, end) for(int UNIQUENAME(AJQl12AC3) = start; UNIQUENAME(AJQl12AC3) < end; UNIQUENAME(AJQl12AC3)++)
#define foreach2(i, start, end) for(int i = start;i < end; i++)
#define foreach3(i, start, end, step) for(int i = start;i < end; i+=step)
#define foreach(...) FOREACHMACRO(__VA_ARGS__, foreach3, foreach2, foreach1)(__VA_ARGS__)

using namespace std;

int main(){
	int i=0;
	foreach(0,10){
		cout << "test" << i << endl;
	}
	cout << endl;

	foreach(i,0,10){
		cout << "test" << i << endl;
	}
	cout << endl;
	
	foreach(i,0,10,2){
		cout << "test" << i << endl;
	}
	cout << endl;

}


// why does each foreach have a different output ?
// shouldn't one function name only corespond with one function ?
// bonus question: how does the UNIQUENAME thing works ? i genuinely dont expect anyone to get this one specific question is but if you want to learn or study it... feel free to do so nor ask (muhammad rafi)
// no need to be specific if you have a clue where this goes just answer it anyway