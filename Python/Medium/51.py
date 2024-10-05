def factorial(n):
 if n == 0:
  return 1
 else:
  return n * factorial(n - 1)
def main():
#  since the input is -5, we will get an exception here 
 try:
  result = factorial(-5)
  print(f"Factorial: {result}")
 except RecursionError as e:
  print(f"RecursionError: {e}")
 finally: print(result)
main()