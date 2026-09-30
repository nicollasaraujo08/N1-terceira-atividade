saldo = float(input("Informe o saldo inicial: "))
while True:
    print("\n--- CAIXA ELETRÔNICO ---")
    print("1. Consultar saldo\n2. Depositar\n3. Sacar\n4. Sair")
    opcao = input("Escolha uma opção: ")
    
    if opcao == '1':
        print(f"Saldo atual: R$ {saldo:.2f}")
    elif opcao == '2':
        saldo += float(input("Valor do depósito: "))
        print("Depósito realizado com sucesso!")
    elif opcao == '3':
        saque = float(input("Valor do saque: "))
        if saque <= saldo:
            saldo -= saque
            print("Saque realizado com sucesso!")
        else:
            print("Saldo insuficiente!")
    elif opcao == '4':
        print("Saindo...")
        break
    else:
        print("Opção inválida.")