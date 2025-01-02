#include <iostream>

using namespace std;

void building_christmas_tree(int base_lenght, int no_levels) {
  int rows = (base_lenght / 2) + 1;  // Licze ilość pięter w cześci choinki
  for(int i = 0;i < no_levels;i++) {
       int x_number = 1;   
       while(x_number <= base_lenght) {  //dopoki ilość x nie przekracza ilości x w podstawie
        int spaces_numbers = (base_lenght - x_number) / 2; 
        for(int j = 0; j < spaces_numbers; j++) {  //ilość spacji
         cout << " ";
        }
        for(int j = 0; j < x_number; j++) {   //ilość x w wierszu
         cout << "X";
        }
        cout << endl;
        x_number = x_number + 2;   //zmiana w warunku przy kolejnym przejściu pętli
      }
  }    
  int log_widht;  //zaczynam robić zaleznosść szerokości pnia z x od długości podstawy choinki
  if(base_lenght <= 5) {
   log_widht = 1;
  }
  else {
   log_widht = 3;
  }
  for(int i = 0;i < (base_lenght - log_widht) / 2;i++) {
  	cout << " ";
  }
	for(int i = 0;i < log_widht;i++) {
		cout << "X";
	}
	cout << endl;
}


int main() {
    
  int height, base_lenght, no_levels;
  cout << "Podaj ilość x w podstawie: ";
  cin >> base_lenght;
    if((base_lenght % 2) == 1) {
      if(base_lenght > 2) {
        cout << "Podaj ilość pięter drzewka: ";
        cin >> no_levels;
          if(no_levels > 0) {
            building_christmas_tree(base_lenght, no_levels);   //wywołuje funkcę
          }
          else {
          cout << "Aby powstało drzewo musi być jakieś piętro!" << endl;
          }
          }
      else {
        cout << "Dla estetyki drzewa jego podstawa powinna byc troche wieksza niz 2!" << endl;
      }
    }
    else {
      cout << "Podstawa musi być nieparzysta aby powstało ładne drzewo" << endl;
    }
return 0;
}


/*
Do zrobienia: 
 - Zrobić tak, zeby ilość x w kazdym trojkącie ponizej tego na samej gorze była troche mniejsza
*/
