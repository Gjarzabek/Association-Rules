/*
--------------------------------------------------
    Zadania klasy:

    oczekiwanie dane na wejsciu:
    ____________________
    | id  |   values   |
    --------------------
    | 1.  | o,f,k,d    |
    | 2.  | o,s,k,g,v,c|
    | 3.  |  a,b,c,d   |
    | 4.  |  p,q,x     |
    | 5.  |  k,l,d     |
    | 6.  |  a,b,f     |
    | 7.  |  b,s,d     |
    | 8.  |  a,g,d,c   |
    --------------------

    1. Generacja Zbiorów częstych


    przetworzyć go i wygenerować reguły.
--------------------------------------------------
*/

#include <vector>

namespace AssociationRules {

template <typename T>
class Apriori
{
    private:
        T & train_data;
        void apriori_gen();
        void 

    public:
        Apriori(T t_data): train_data(t_data);
        ~Apriori();
};

}