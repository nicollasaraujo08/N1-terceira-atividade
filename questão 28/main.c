maior = float('-inf')
for i in range(10):
    num = float(input(f"Digite o {i+1}º número: "))
    if num > maior: maior = num
print(f"O maior número informado foi: {maior}")