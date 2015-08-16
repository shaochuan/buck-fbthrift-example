
cxx_library(
  name = 'calculator_service',
  srcs = [
    'CalculatorService.cpp',
  ],
  exported_headers = [
    'CalculatorService.h',
  ],
  deps = [
    '//calculator/if:if#cpp2',
  ],
)

cxx_binary(
  name = 'main',
  srcs = [
    'Main.cpp',
  ],
  deps = [
    ':calculator_service',
  ],
)

