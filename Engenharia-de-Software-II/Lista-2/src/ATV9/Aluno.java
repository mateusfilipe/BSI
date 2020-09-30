package ATV9;

public class Aluno {
	String nome;
	double nota;
	int turma;

	public Aluno(String nome, double d, int turma) {
		this.nome = nome;
		this.nota = d;
		this.turma = turma;
	}

	public String getNome() {
		return nome;
	}

	public double getNota() {
		return nota;
	}

	public int getTurma() {
		return turma;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public void setNota(float nota) {
		this.nota = nota;
	}

	public void setTurma(int turma) {
		this.turma = turma;
	}
}
