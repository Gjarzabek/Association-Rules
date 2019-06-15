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
    2. Twórc

--------------------------------------------------
*/

namespace AssociationRules {

template <typename T, typename N>
class Apriori {

    private:
        // generuje zbiory częste 
        static void apriori_gen(const T & data, const double & conf, const double & acc);
        // z wygenerowanych zbiorów częstych generuje reguły asocjacyjne,
        // wybiera te z porządanymi parametrami conf/acc
        static void rule_gen();
        Apriori() = delete;
        Apriori(const Apriori & a) = delete;
        ~Apriori();

    public:
        // argument - kontener danych, parametry
        // zwracana_wartosc - kontener danych zawierających reguły
        // postać reguły - para kontenerów N (obie strony implikacji)
        static void calculate(const T & data, const double & conf, const double & acc) {
            train_data = data;

        };
};

}