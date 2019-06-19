#include "Apriori.hpp"
#include <unordered_map>

namespace AssociationRules {

template <typename T, typename N, typename H>
void Apriori<T, N, H>::apriori_gen() {
    
    std::unordered_map<H, int, hasher> frequent_set;
    std::unordered_map<
    for (N record: data) {

    }
}

}
