package ATV9;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.Test;

class TesteIntegração {

	@Test
	void testAlunoAprovado() {
		Aluno a = new Aluno ("Mateus", 60.1, 101);
		boolean ok ;
		double nota = a.getNota();
		ok = Atividade9.alunoAprovado(nota);
		assertTrue(ok);
	}

}
