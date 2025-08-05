#include <stdio.h>
#include <ctype.h>

struct question {
	char question[200];
	char optionA[100];
	char optionB[100];
	char optionC[100];
	char optionD[100];
	char correctOption;
};

int main() {
	struct Quation questions[5] = {
	{
	  "what is the capital of india?",
	  "A. mumbai", "B. delhi", "C. kolkata", "D. chennai", 'B'
	},
	{
	  "which data type is used to store text?",
	  "A. string", "B. int", "C. float", "D. char", 'D'
	},
	{
	  "which keyword is used to define a function in C?",
	  "A. def", "B. function", "C. void", "D. fun", 'C'
	},
	{
	  "what symbol is used to end a statment in C?",
	  "A. .", "B. ;", "C. :", "D. !", 'B'







