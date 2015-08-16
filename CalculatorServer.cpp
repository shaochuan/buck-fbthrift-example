
#include "calculator/if/gen-cpp2/Calculator.h"

using namespace std;
using namespace apache::thrift;

class CalculatorSvc : public cpp2::CalculatorSvIf {
 public:
  virtual ~CalculatorSvc() {}
  void async_tm_add(
    std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback,
    int32_t num1,
    int32_t num2) {
    callback->result(num1 + num2);
  }
};
