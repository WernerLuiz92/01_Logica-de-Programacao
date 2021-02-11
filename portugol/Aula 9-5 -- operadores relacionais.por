programa
//Aula 9 - 5 -- Operadores Relacionais
{
	
	funcao inicio()
	{
		inteiro num1, num2
		
		escreva("Informe o primeiro número: ")
		leia(num1)
		escreva("Informe o segundo número: ")
		leia(num2)

		se (num1 > num2) {
			escreva("O número " + num1 +" é maior que o número " + num2 + "\n")
			escreva(num1 + " > " + num2)
		} senao se (num1 < num2) {
			escreva("O número " + num1 +" é menor que o número " + num2 + "\n")
			escreva(num1 + " < " + num2)
		} senao {
			escreva("Os números são iguais \n")
			escreva(num1 + " = " + num2)	
		}
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 47; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */