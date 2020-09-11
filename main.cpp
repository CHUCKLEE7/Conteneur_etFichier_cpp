
/*
 * Auteur : MAJID LAWALI 2023927
 * PROF : Mathieu Lavallée
 * Cours : C/C++
 * TP2:  Conteneurs et Fichiers
 * Référence utilisé: Note de cours,vidéo du cours,exercice du cours.
 * lien  replit: https://repl.it/@majic79/tp2cpp#main.cpp
 */



#include <iostream>
#include <fstream>
#include <set>

#include "score.h"

int main() {
    std::set<Score> arbre;
    long identi_lue;
    std::string login_lue;
    long scoreObtenu_lue;

    std::ifstream lecteur("hiscore.txt");

    while(lecteur.eof() == false) {
  
    lecteur >> identi_lue;
    lecteur >> login_lue;
    lecteur >> scoreObtenu_lue;

    if (lecteur.eof() == false) {
      Score score_lue(identi_lue,login_lue,scoreObtenu_lue);
      arbre.insert(score_lue);
    }
  }

    lecteur.close();
    std::set<Score>::iterator iterateur = arbre.begin();
    for(int i=0 ; i<arbre.size() ; i++) {
    
      std::ofstream ecriture("Asterostorm.txt", std::ios::app);

      ecriture  <<  iterateur->getLogin()<<'\n'<<iterateur->getIdentifiantP()<< '\n'<< "Asterostorm="<<iterateur->getScoreObtenu()<<  std::endl;
      iterateur++;
      ecriture.close(); 
     }   
}



