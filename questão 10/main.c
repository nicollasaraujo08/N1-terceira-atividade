produto = input("Nome do produto: ")
qtd = int(input("Quantidade: "))
preco = float(input("Preço unitário: "))
print(f"Valor total da compra de {produto}: R$ {qtd * preco:.2f}")