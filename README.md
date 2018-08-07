# apa20181

Repositório dos códigos dos exercícios e projetos da disciplina de Análise e Projeto de Algoritmos 2018.1.  
Aluno: Jorgeluis Guerra  
Professor: Gilberto de Sousa Filho  

Para rodar os testes basta dentro da pasta "main" executar o "make":  
$ make SORT=SORTING_TYPE  

Onde SORTING_TYPE é algum dos algoritmos de sorting já implementados e adicionados ao programa principal. O programa gerado deverá então ordenar o vetor de testes segundo o algoritmo escolhido no comando "make".  

Tipos de sorting:  
INSERTION  
SELECTION  
MERGE  
QUICK  

Para alternar entre os algoritmos, antes de uma nova compilação executar sempre um:  
$ make clean  

Sintaxe do main:  
$ ./main ../test_cases/arquivo_de_teste_escolhido.txt
