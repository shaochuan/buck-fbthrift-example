#include <thrift/lib/cpp2/server/ThriftServer.h>
#include "CalculatorService.h"

using namespace apache::thrift;

int main(int argc, char *argv[]) {

  std::shared_ptr<ServerInterface> s = std::make_shared<CalculatorService>();
  auto server = folly::make_unique<ThriftServer>();
  server->setInterface(s);
  server->setPort(9090);
  server->serve();

  return 0;
}
