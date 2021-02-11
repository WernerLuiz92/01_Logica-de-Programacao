programa
//Aula 9 - 10 -- Estrutura Enquanto
{
	
	funcao inicio()
	{
		cadeia nome = ""

		enquanto (nome != "PARE") {
			escreva("Informe o seu nome: ")
			leia(nome)
			
			se (nome != "PARE") {
				escreva("Olá," + nome + " \n")
				escreva("Seja bem-vindo! \n")	
			}
		}
		escreva("Até logo!!")
	}
}
/* $$$ Portugol Studio $$$ 
 * 
 * Esta seção do arquivo guarda informações do Portugol Studio.
 * Você pode apagá-la se estiver utilizando outro editor.
 * 
 * @POSICAO-CURSOR = 271; 
 * @PONTOS-DE-PARADA = ;
 * @SIMBOLOS-INSPECIONADOS = ;
 * @FILTRO-ARVORE-TIPOS-DE-DADO = inteiro, real, logico, cadeia, caracter, vazio;
 * @FILTRO-ARVORE-TIPOS-DE-SIMBOLO = variavel, vetor, matriz, funcao;
 */