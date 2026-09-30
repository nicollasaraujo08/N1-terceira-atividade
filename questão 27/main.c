aprovados = reprovados = 0
for i in range(10):
    nota = float(input(f"Nota do aluno {i+1}: "))
    if nota >= 7: aprovados += 1
    else: reprovados += 1
print(f"Aprovados: {aprovados}")
print(f"Reprovados: {reprovados}")
print(f"Percentual de aprovação: {(aprovados / 10) * 100}%")