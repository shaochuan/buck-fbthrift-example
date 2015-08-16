#include "calculator/if/gen-cpp2/Calculator.h"

class CalculatorService: public cpp2::CalculatorSvIf {
 public:
  CalculatorService() {}
  virtual ~CalculatorService() {}
  void async_tm_add(
    std::unique_ptr<apache::thrift::HandlerCallback<int64_t>> callback,
    int32_t num1,
    int32_t num2) override;
};
