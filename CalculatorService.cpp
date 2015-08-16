#include "CalculatorService.h"

using namespace apache::thrift;

void CalculatorService::async_tm_add(
    std::unique_ptr<HandlerCallback<int64_t>> callback,
    int32_t num1,
    int32_t num2) {
  callback->result(num1 + num2);
}

