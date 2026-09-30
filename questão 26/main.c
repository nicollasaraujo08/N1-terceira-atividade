qtd = int(input("Quantidade de alunos: "))
soma_notas = 0
for i in range(qtd):
    soma_notas += float(input(f"Nota do aluno {i+1}: "))
media = soma_notas / qtd if qtd > 0 else 0
print(f"Média geral da turma: {media:.2f}")