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

// T - data container, 
// N - single record (also container), 
// H - elements from N container

template <typename T, typename N, typename H>
class Apriori {

    private:
        // generuje zbiory częste 
        void apriori_gen();
        // z wygenerowanych zbiorów częstych generuje reguły asocjacyjne,
        // wybiera te z porządanymi parametrami conf/acc
        void rule_gen();
        Apriori() = delete;
        Apriori(const Apriori & a) = delete;
        T & data;
        size_t (*hasher)(H);
        double suuport;
        double confidence;

    public:
        // argument - kontener danych, parametry
        // zwracana_wartosc - kontener danych zawierających reguły
        // postać reguły - para kontenerów N (obie strony implikacji)
        Apriori(const T & train_data, size_t (*hash)(H), const double & conf = 0.7, const double & supp = 0.3 )
            : data(train_data), hasher(hash), support(supp), confidence(cond)
        {

        }
        //N operator();
        ~Apriori();
};

}