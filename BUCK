
cxx_library(
  name = 'calculator_server',
  srcs = [
    'CalculatorServer.cpp',
  ],
  deps = [
    '//calculator/if:if#cpp2',
  ],
  force_static = True,
)

cxx_binary(
  name = 'main',
  srcs = [
    'main.cpp',
  ],
  deps = [
    ':calculator_server',
  ],
)
