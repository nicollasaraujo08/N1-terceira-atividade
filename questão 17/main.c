v = float(input("Valor da compra: "))
desc = 0.0 if v <= 100 else 0.05 if v <= 500 else 0.10
print(f"Valor original: R$ {v:.2f}")
print(f"Percentual de desconto: {desc * 100}%")
print(f"Valor do desconto: R$ {v * desc:.2f}")
print(f"Valor final: R$ {v * (1 - desc):.2f}")