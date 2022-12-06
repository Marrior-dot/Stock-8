#include "date.h"

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

Date::Date(int d, int m, int a) 
{
    if ( m > 0 && m <= 12 ) // validate the month
        mes = m;
    
    if ( a < 0 )
        ano = 1900;
    else
        ano = a;
   
    dia = VerificaDia(d);

}
void Date::arrive(int diaPerson, int mesPerson, int ano){
    if (diaPerson < dia && mesPerson < mes){
        cout << "A encomenda chegará em: " << dia - diaPerson 
        << " dias e " << mes - mesPerson << " meses"; 
        return;
    }
    
    cout << "A encomenda chegará em: " << diaPerson - dia 
    << " dias e " << mesPerson - mes << " meses";        
    return;
    
}
int Date::VerificaDia(int diaTeste) const
{
    static const int diasPorMes[ 13 ] = 
       { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    if ( diaTeste > 0 && diaTeste <= diasPorMes[ mes ] )
        return diaTeste;
    
    if ( mes == 2 && diaTeste == 29 && ( ano % 400 == 0 ||
            ( ano % 4 == 0 && ano % 100 != 0 ) ) )
        return diaTeste;
    
    cout << "Dia invalido (" << diaTeste << ") configurado para 1.\n";
    return 1; 

    
}