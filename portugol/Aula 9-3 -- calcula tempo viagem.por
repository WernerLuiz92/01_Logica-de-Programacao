programa 
//Aula 9 - 3 -- Calcula Tempo de Viagem
{
	
	funcao inicio()
	{
		real distanciaTotal
		real distanciaPercorrida
		real velocidadeAtual
		
		escreva("Informe a distancia total do trajeto (KM): ")
		leia(distanciaTotal)
		escreva("Informe a distancia já percorrida (KM): ")
		leia(distanciaPercorrida)
		escreva("Informe a velocidade atual (KM/H): ")
		leia(velocidadeAtual)

		real tempo = calculaTempo(distanciaTotal, distanciaPercorrida, velocidadeAtual)

		escreva("O tempo até a conclusão do trajeto é de: " + tempo)
	}

	funcao real calculaTempo (real distanciaTotal, real distanciaPercorrida, real velocidadeAtual)
	{
		
		real tempo = (distanciaTotal - distanciaPercorrida) / velocidadeAtual

		retorne tempo
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 49; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */