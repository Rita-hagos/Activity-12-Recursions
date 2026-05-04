#include <iostream>
#include <vector>
#include <any>

using namespace std;

void printNumbers(const vector<any>& arr) {
  for (const auto& element : arr) {
    if( element .type() == typeid(int)) {
      cout << any_cast<int>(element) << endl;
    }
else if (element.type() == typeid(vector<any)) {
    printNumbers( any_cast<vector<any>>(element));
} 
  }
}

int main() {
  vector<any> array = {
1 ,2,3,
vector<any>{4,5,6},
7,
vector<any>{
  8,
vector<any> {
    9,10,11,
vector<any>{12,13,14}
      }
   }
};

printNumbers(array);
 return 0;
}
