# Define os valores da lista ordenada
lista = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]

# Imprime na tela os valores da lista
print("Valores da lista: ", lista)

# Recebe um valor para a busca binária
valor = input("Digite um valor da lista para retornar a posição: ")

# Define as posições do algoritmo de busca binária
esquerda = 0                        # define o início do lado esquerdo em 0
direita = len(lista) - 1            # indíces em Python começam em 0, por isso o -1 do total de índices
meio = (esquerda + direita) // 2    # // = divisão inteira para não deixar resto

# Inicia o algoritmo de busca binária
while esquerda <= direita
    if lista[meio] == valor           
        print("Posição do valor digitado é: ", meio)
    elif lista[meio] < valor
        esquerda = meio +1 




