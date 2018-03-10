#include <Rcpp.h>

double fun(std::map<std::string, double> x){
  return x["cow"];
}

// [[Rcpp::export]]
double fun2(){
  std::map<std::string, double> map;
  map["cow"] = 2;
  return fun(map);
} 

/*** R
fun2()
*/
