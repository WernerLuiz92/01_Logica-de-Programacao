programa
//Aula 9 - 4 -- Operações Aritméticas
{
	
	funcao inicio()
	{
		real numero1, numero2
		escreva("Informe o primeiro número: ")
		leia(numero1)
		escreva("Informe o segundo número: ")
		leia(numero2)

		escreva("O resultado das operações aritmeticas é:\n")
		real soma = funcSoma(numero1, numero2)
		real subt = funcSubt(numero1, numero2)
		real mult = funcMult(numero1, numero2)
		real divi = funcDivi(numero1, numero2)
		
		escreva(numero1 + " + " + numero2 + " = " + soma +"\n")
		escreva(numero1 + " - " + numero2 + " = " + subt +"\n")
		escreva(numero1 + " * " + numero2 + " = " + mult +"\n")
		escreva(numero1 + " / " + numero2 + " = " + divi +"\n")
		
	}

	funcao real funcSoma (real numero1, real numero2)
	{
		real soma = numero1 + numero2

		retorne soma
	}
	
	funcao real funcSubt (real numero1, real numero2)
	{
		real subt = numero1 - numero2

		retorne subt
	}
	
	funcao real funcMult (real numero1, real numero2)
	{
		real mult = numero1 * numero2

		retorne mult
	}

	funcao real funcDivi (real numero1, real numero2)
	{
		real divi = numero1 / numero2

		retorne divi
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 46; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */