#ifndef DATE_H
#define	DATE_H

class Date 
{
public:
    
    Date( int, int, int = 2022);
    void arrive(int, int, int = 2022);

private:
    
    int mes;
    int dia;
    int ano;
    
    int VerificaDia( int ) const;


};

#endif	