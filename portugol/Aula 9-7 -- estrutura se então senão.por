programa
//Aula 9 - 7 -- Estrutura Se Então Senão
{
	funcao inicio ()
	{
		inteiro idade
		escreva("Informe a sua idade: ")
		leia(idade)
		
		se (idade >= 18) {
			escreva("Você é maior de idade! \n")
			escreva("Pode tirar sua CNH.")
		} senao {
			escreva("Você ainda é menor de idade \n")
			escreva("Ainda não pode tirar a CNH")
		}
	}
}
