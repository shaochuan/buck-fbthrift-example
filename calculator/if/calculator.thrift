
// Defines a service with name Calculator
service Calculator {
  // Add a function with name add in the Calculator service.
  // This has two argument num1 and num2 of type i32 and return
  // a value of type i64
  i64 add(1:i32 num1, 2:i32 num2);
}
