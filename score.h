#ifndef __SCORE_H__
#define __SCORE_H__

#include <iostream>
#include <string>
class Score {
private:
long identifiantP;
std::string login;
long scoreObtenu;

public:

Score();
Score(long identifiantP,std::string login, long scoreObtenu);

void setIdentifiantP(long id);
void setLogin (std::string log);
void setScoreObtenu( long scOb);

 long getIdentifiantP() const {return this->identifiantP;}
 std::string getLogin ()const {return 
 	this->login;}
    
  long getScoreObtenu() const {return 
 	this->scoreObtenu;}
 
  void afficher();
   bool operator<(const Score& score_a_droite) const {
      if(this->scoreObtenu> score_a_droite.scoreObtenu) return true;
      return false;
    }
};
#endif