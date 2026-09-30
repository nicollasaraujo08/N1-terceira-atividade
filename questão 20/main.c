a = float(input("Primeiro número: "))
b = float(input("Segundo número: "))
op = input("Operação (+, -, *, /): ")

if op == '+': res = a + b
elif op == '-': res = a - b
elif op == '*': res = a * b
elif op == '/': res = a / b if b != 0 else "Erro: Divisão por zero"
else: res = "Operação inválida"

print("Resultado:", res)