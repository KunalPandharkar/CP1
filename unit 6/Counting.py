
sol_space = {}
def counting(n):
  global sol_space

  if n < 1:
    return 1

  if n in sol_space:
    return sol_space[n]
  
  sol = 0
  if n >= 1:
    sol += 2 * counting(n - 1) 
  if n >= 2:
    sol += counting(n - 2)
  if n >= 3:
    sol += counting(n - 3)
  
  sol_space[n] = sol
  return sol

while True:
  try:
    number = int(input())
    print(counting(number))
  except EOFError:
    break