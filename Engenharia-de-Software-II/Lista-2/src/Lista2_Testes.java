import static org.junit.jupiter.api.Assertions.*;

import java.util.List;
import java.util.ArrayList;
import java.util.EmptyStackException;
import java.util.Stack;

import org.junit.jupiter.api.Test;

class Lista2_Testes {
	//Questão 1
	/*
	*	Letra E
	*/
	
	//Questão 2
	/*
	 * Ler: Engenharia de Software Moderna, cápitulo 8
	 */
	
	// Questão 3
	@Test
	void testaFibonacci() {
		fibonacci fib = new fibonacci();
		int resultadoFib = fib.calcula_fibonacci(7);
		assertEquals(13, resultadoFib);
	}

	// Questão 4
	@Test
	public void testEmptyStackException() {
		boolean sucesso = false;
		try {
			Stack<Integer> s = new Stack<Integer>();
			s.pop();
		} catch (EmptyStackException e) {
			sucesso = true;
		}
		assertTrue(sucesso);
	}

	// Questão 5
	/*
	 * Teste 1 - Testando se a ArrayList está vazia!
	 */
	@Test
	public void testaArrayVazia() {
		List<Integer> s = new ArrayList<Integer>();
		assertTrue(s.isEmpty());
	}

	/*
	 * Teste 2 - Testando se a ArrayList possui algum valor!
	 */
	@Test
	public void testaArrayComValor() {
		List<Integer> s = new ArrayList<Integer>();
		s.add(1);
		assertFalse(s.isEmpty());
	}

	/*
	 * Teste 3 - Testando se a ArrayList tem o tamanho certo, e os valores
	 * correspondem!
	 */
	@Test
	public void testaArrayTamanhoEValores() {
		List<Integer> s = new ArrayList<Integer>();
		s.add(1);
		s.add(2);
		s.add(3);
		assertEquals(3, s.size());
		assertEquals(1, s.get(0));
		assertEquals(2, s.get(1));
		assertEquals(3, s.get(2));
	}

	/*
	 * Teste 4 - Testando se a ArrayList teve um valor removido!
	 */
	@Test
	public void testaArrayElementoRemovido() {
		List<Integer> s = new ArrayList<Integer>();
		s.add(1);
		s.add(2);
		s.add(3);
		int elem = s.remove(2);
		assertFalse(s.contains(elem));
		assertEquals(1, s.get(0));
		assertEquals(2, s.get(1));
	}

	/*
	 * Teste 5 - Testando se a ArrayList está vazia e tem 0 valores!
	 */
	@Test
	public void testaArrayVazioEDeTamanhoZero() {
		List<Integer> s = new ArrayList<Integer>();
		s.add(1);
		s.remove(0);
		assertEquals(0, s.size());
		assertTrue(s.isEmpty());
	}

	/*
	 * Teste 6 - Testando se a ArrayList teve um valor removido!
	 */
	@Test
	public void testaArrayRemoverPosicaoAlem() {
		List<Integer> s = new ArrayList<Integer>();
		boolean sucesso = false;
		try {
			s = new ArrayList<Integer>();
			s.add(1);
			s.add(2);
			s.remove(2);
		} catch (IndexOutOfBoundsException e) {
			sucesso = true;
		}
		assertTrue(sucesso);
	}

	// Questão 6
	/*
	 * f(0,0): CC: 25% CB: 25%
	 * 
	 * f(1,1): CC: 100% CB: 50%
	 * 
	 * f(0,0) && f(1,1): CC: 100% CB: 75%
	 * 
	 */

	// Questão 7
	/*
	 * a) Sim, quando a nota do aluno for igual a 90 ou o fato dele não receber com
	 * casas decimais;
	 * 
	 * b) Cobertura de Comandos: 100% Cobertura de Branches: 100%
	 * 
	 * c) Falsa, 100% da cobertura de comandos não é o mesmo de funcionamento pleno
	 * do código, pode ocorrer de alguma linha possuir algo incorreto e ainda assim
	 * ser executado, ou pode-se ter a falta de alguma condicional na qual se deixa
	 * passar algum erro, como uma de divisão por zero.
	 *
	 */

	// Questão 8
	/*
	public void test1() {
		LinkedList list = mock(LinkedList.class);
		when(list.size()).thenReturn(10);
		assertEquals(10, list.size());
	}

	public void test2() {
		LinkedList list = mock(LinkedList.class);
		when(list.get(0)).thenReturn("Engenharia");
		when(list.get(1)).thenReturn("Software");
		String result = list.get(0) + " " + list.get(1);
		assertEquals("Engenharia Software", result);
	}
	*/

	
	
}
