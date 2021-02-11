programa
//Aula 9 - 11 -- Números Primos
{
	
	funcao inicio()
	{
		inteiro numero, i
		inteiro divisores = 0

		escreva("Por favor informe um número: ")
		leia(numero)

		para (i = 1; i <= numero; i++) {
			se ((numero % i) == 0) {
				divisores ++	
			}	
		}

		se (divisores > 2) {
			escreva("O número não é primo!")	
		} senao {
			escreva("O número é primo!")	
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 362; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = {numero, 7, 10, 6}-{i, 7, 18, 1}-{divisores, 8, 10, 9};
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */