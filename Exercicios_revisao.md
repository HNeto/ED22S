# Exercícios de revisão

## Estruturas de decisão:
1) Números palíndromos são números que se lidos da esquerda para a direita ou da direita para esquerda, tem o mesmo 
valor. Exemplos:
- 1992 - Não palíndromo
- 2323 - Não palíndromo
- 123 - Não palíndromo
- 1991 - Palíndromo
- 3223 - Palíndromo
- 259952 - Palíndromo

Com base nisso, escreva um programa que leia um número inteiro e valide se o número tem 4 dígitos. Se o número tiver 4 
dígitos, o programa deve apresentar uma mensagem informando se o número é palíndromo ou não. Se o número não possuir 4 
dígitos, o programa deve apresentar uma mensagem informando que o número é inválido. 

Dica: quebre o número em duas metades, por exemplo: 1991 → 19 e 91. Depois, inverta a segunda metade e você terá: 19 e 
19. Compare as duas metades.

___

2) Leia três valores inteiros que representam os lados de um triângulo (A, B e C). Verifique se os 3 lados formam um 
triângulo válido. Para isso, A < (B + C), B < (A + C) e C < (A + B).
Se os lados informados formarem um triângulo válido, apresente uma mensagem informado o tipo do triângulo:
- Equilátero: quando 3 lados forem iguais;
- Isósceles: quando apenas 2 lados forem iguais;
- Escaleno: quando todos os lados forem diferentes.

Se os lados não formarem um triângulo válido, apresente uma mensagem informando que os lados não formam um triângulo 
válido.

___

3) Escreva um programa que leia um caractere qualquer. Se o caractere for uma letra, o programa deve informar se ela é 
uma vogal ou uma consoante. Se não, o programa deve informar que o caractere não é uma letra. Dica: Para verificar se 
um caracter é uma letra minúscula, valide se ele está entre ‘a’ e ‘z’, para verificar se é uma letra maiúscula, valide 
se ele está entre ‘A’ e ‘Z’.

___

4) A primeira Copa do Mundo aconteceu no ano de 1930. Desde então a Copa do Mundo vem acontecendo de 4 em 4 anos, exceto 
em 1942 e 1946, devido à 2ª Guerra Mundial. Seu programa deverá ler um ano e mostrar uma mensagem informativa sobre a 
copa:
- Se o ano for menor que 1930, apresente a mensagem: “Não houve copa - a primeira copa foi em 1930”.
- Se o ano for 1942 ou 1946, apresente a mensagem: “Não houve copa - segunda guerra mundial”.
- Se for qualquer outro ano, valide se o ano informado é um ano de copa do mundo ou não, e apresente uma das seguintes 
mensagens: “Neste ano houve/haverá copa.” ou “Nesse ano não houve/haverá copa.”.

___

## Estruturas de repetição:
5) Escreva um programa que leia um número inteiro qualquer. Seu programa deve identificar se esse número é primo. 

___

6) Um número natural N, sendo N > 1, pode ser classificado como um número deficiente, perfeito ou abundante. 

*Número deficiente*: quando a soma de todos os seus divisores naturais, exceto o próprio N, for menor do que N. Por 
exemplo, o número 4:
- Divisores de 4: 1 e 2
- Soma dos divisores = 3
- 3 < 4: número deficiente

*Número perfeito*: quando a soma de todos os seus divisores  naturais, exceto o próprio N, for igual a N. Por exemplo, 
o número 6:
- Divisores de 6: 1, 2 e 3
- Soma dos divisores = 6
- 6 = 6: número perfeito

*Número abundante*: quando a soma de todos os divisores  naturais, exceto o próprio N, for maior que do que N. Por 
exemplo, o número 30:
- Divisores de 30: 1, 2, 3, 5, 6, 10 e 15
- Soma dos divisores = 42
- 42 > 30: número abundante

Escreva um programa que leia um número inteiro o classifique como deficiente, perfeito ou abundante.

___

7) Uma pessoa aplicou R$ 100,00 em uma aplicação que rende 0,5% ao mês. Escreva um programa que calcule quantos meses serão 
necessários para que a pessoa consiga ter mais que R$ 200,00. 

___

8) Considere o seguinte cenário:
- Uma cidade A tem 80.000 habitantes e sua taxa anual de crescimento é de 3,0%
- Uma cidade B tem 200.000 habitantes e sua taxa anual de crescimento é de 1,5%.

Com base nos fatos apresentados, escreva um programa que retorne o número de anos necessários para que a população da cidade A 
ultrapasse ou se iguale à população da cidade B, considerando que a taxa de crescimento é constante.

___

## Vetores:
9) Escrever um programa que mostre todos os números pares em um vetor com 20 elementos do tipo inteiro. 
Exemplo:
Vetor:
```diff
22    12    9    6    19    26    88    97    75    10
93    55    38    14    25    90    7    43    68    99
```
Saída: 
```diff
22    12    6    26    88    10    38    14    90    68
```

___

10) Escrever um programa que dado um vetor de tamanho 30, com números inteiros variando entre 0 e 100, e um número entre 0 e 100 
que é informado pelo usuário, informe se o número informado está ou não dentro do vetor.
Exemplo 1:
Vetor:
```diff
94    71    75     12    55    2    50    62    50    42
92     1    27    69    89     29    97    99    47    3
33    28    41    52    65    86    24    9    65    81
```
Número informado:
```diff
19
```
Saída: 
```diff
O número 19 não está no vetor.
```

Exemplo 2:
```diff
94    71    75     12    55    2    50    62    50    42
92     1    27    69    89     29    97    99    47    3
33    28    41    52    65    86    24    9    65    81
```
Número informado:
```diff
12
```
Saída: 
```diff
O número 12 está no vetor.
```
___

11) Leia um vetor com 10 elementos formados por números inteiros (positivos e negativos). Para cada elemento do vetor encontre 
seu módulo, como no exemplo abaixo:
Entrada: 
```diff
19, -3, 2, 6, -9, -8, 11, 20, -22, 1
```
Saída: 
```diff
19, 3, 2, 6, 9, 8, 11, 20, 22, 1
```
___

## Strings:
12) Escrever um programa que leia uma string qualquer e informe a quantidade de caracteres da string (sem usar a função strlen).

___

13) Escrever um programa que leia uma string qualquer e conte o número de espaços que aparecem na string.

___

14) Escrever um programa que leia uma string com tamanho máximo igual a 10. O programa deve verificar se a string forma um número 
binário. Números binários são formados exclusivamente por 0s e 1s, por exemplo:
- 1010
- 00010
- 1001010

Se qualquer caractere diferente de 0 ou 1 estiver na string, a string não representa um número binário. Como saída, o programa 
deve apresentar uma mensagem dizendo se a string informada representa ou não um número binário. Exemplos:

| Entrada  | Saída                                      |
| ---------| -------------------------------------------|
| 101010   | A string representa um número binário.     |      
| 010      | A string representa um número binário.     |
| 12100    | A string não representa um número binário. |
| 1 010100 | A string não representa um número binário. |

___

15) Uma das formas mais simples de codificar uma mensagem de texto é substituir cada letra da mensagem original pela letra 
seguinte do alfabeto. No caso da letra “Z”, que é a última do alfabeto, pode-se considerar que a letra seguinte é a letra “A”. 
Por exemplo:
- Mensagem original: LINGUAGEM C
- Mensagem codificada: MJOHVBHFN D

ou:
- Mensagem original: ZEBRA
- Mensagem codificada: AFCSB

Seu objetivo será ler uma mensagem codificada e traduzi-la para a mensagem original. Para isso você deve fazer o processo inverso: 
substituir cada letra da mensagem codificada pela letra anterior do alfabeto. 

Neste exercício considere que a mensagem é formada apenas por letras (sem acento) e espaços. Não se preocupe em tratar números e 
caracteres especiais. Sendo assim, considere que:
- Se o caractere for a letra “A”, substituir pela letra “Z”;
- Se o caractere for um espaço, manter o espaço;
- Se o caractere for qualquer coisa diferente da letra “A” ou diferente de espaço, substituir pela letra anterior. Para saber 
qual é a letra anterior basta fazer a seguinte operação:
```diff
letra_anterior = letra_atual - 1;
```

Exemplo 1:
- Mensagem codificada: B SBQJEB SBQPTB NBSSPN QVMB TPCSF P DBP QSFHVJDPTP
- Mensagem original: A RAPIDA RAPOSA MARROM PULA SOBRE O CAO PREGUICOSO

Exemplo 2:
- Mensagem codificada: P SBUP SPFV B SPVQB EP SFJ EF SPNB
- Mensagem original: O RATO ROEU A ROUPA DO REI DE ROMA

___

## Funções: 
Resolver todos os exercícios abaixo utilizando funções. Fazer um programa principal (função main) e do mesmo chamar 
as funções correspondentes aos exercícios.

16) Escrever uma função que imprima a soma dos números pares entre dois valores, que representam o limite superior e o inferior 
de um intervalo, informados pelo usuário. Passar esses dois valores como parâmetro para uma função.

___

17) Escrever uma função que retorna o fatorial de um número passado por parâmetro.

___

18) Escrever uma função que recebe como parâmetro 3 notas e retorna a média das 3 notas.

___

19) Escrever uma função para encontrar a hipotenusa de um triângulo retângulo (a<sup>2</sup> = b<sup>2</sup> + c<sup>2</sup>). 
Ela recebe como valor os lados do triângulo e retorna a hipotenusa calculada.

___

20) Escrever uma função que recebe um número inteiro e retorna 0 se ele não é primo ou 1 se ele é primo.
