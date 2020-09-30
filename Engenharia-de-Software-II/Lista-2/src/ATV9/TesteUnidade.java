package ATV9;

import static org.junit.jupiter.api.Assertions.*;
import org.junit.Before;
import org.junit.jupiter.api.Test;


class Testes {
	private Aluno alunoT;
	
	@Before
	void init() {
		alunoT = Mockito.mock(Aluno.class);
		when(alunoT.getNota()).thenReturn(50);
	}
	
	@Test
	void testAlunoAprovado() {
		boolean ok = false;
		ok = Atividade9.alunoAprovado(alunoT.getNota());
		assertTrue(ok);
	}

}
