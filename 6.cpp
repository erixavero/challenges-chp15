#include<iostream>

using namespace std;

class GradedActivity
{
protected:
double score; // To hold the numeric score
public:
// Default constructor
GradedActivity()
{ score = 0.0; }

// Constructor
GradedActivity(double s)
{ score = s; }

// Mutator function
void setScore(double s)
{ score = s; }

// Accessor functions
double getScore() const
{ return score; }

char getLetterGrade() const;
};

class Essay : public GradedActivity{
	double grammar;
	double spelling;
	double length;
	double content;
	
public:
	Essay(){
		grammar= 0;
		spelling= 0;
		length= 0;
		content= 0;
	}
	
	Essay(double g, double s, double len, double con){
		if(g<0 || g>30 || s<0 || s>20 || len<0 || len>20 || con<0 || con>30){
			cout<<"INVALID INPUT"; exit(0);
		}
		else{
		this->grammar = g;
		this->spelling = s;
		this->length = len;
		this->content = con;
		}
	}
	
	double getGrammar(){
		return grammar;
	}
	
	double getSpelling(){
		return spelling;
	}
	
	double getLength(){
		return length;
	}
	
	double getContent(){
		return content;
	}
	
	double getEssay(){
		score= grammar+spelling+length+content;
		return score;
	}
};

int main(){
	
	Essay score(22, 20, 18, 12);
	cout<<"Grammar: " <<score.getGrammar()<<endl
		<<"Spelling: " <<score.getSpelling() <<endl
		<<"Length: " <<score.getLength() <<endl
		<<"Content: " <<score.getContent()<<endl
		<<"Essay total score: " <<score.getEssay();
	
	return 0;
}
