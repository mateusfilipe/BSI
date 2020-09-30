package example.seleniumtest;

import static org.junit.Assert.*;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.Keys;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

public class IfmgTest {

	WebDriver driver;

	@Before
	public void setUp() {
		// Indica onde está o drive do Chrome
		System.setProperty("webdriver.chrome.driver", "C:\\drivers\\chromedriver.exe");
		driver = new ChromeDriver();
	}
	
	//Testes com o botão de pesquisa do site do IFMG Sabará

	@Test
	public void testSearchButton() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

		// obtém um campo de entrada de dados, de nome "SearchableText"
		WebElement element = driver.findElement(By.name("SearchableText"));

		// pesquisando pelo nome do professor "Carlos Alberto"
		element.sendKeys("Carlos Alberto");

		element.sendKeys(Keys.ENTER);	
		
		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Busca — Instituto Federal de Educação, Ciência e Tecnologia de Minas Gerais Campus Sabará"));

	    System.out.println("Título: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("busca — instituto federal de educação, ciência e tecnologia de minas gerais campus sabará"));
	}
	//Dúvida
	//TODO Verificar pesquisa por linha.
	@Test
	public void testSearchResult() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

		// obtém um campo de entrada de dados, de nome "SearchableText"
		WebElement element = driver.findElement(By.name("SearchableText"));

		// pesquisando pelo nome do professor "Carlos Alberto"
		element.sendKeys("Carlos Alberto");

		element.sendKeys(Keys.ENTER);
		
		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.urlToBe("https://www.ifmg.edu.br/sabara/@@busca?SearchableText=Carlos+Alberto"));

	    System.out.println("Text: " + driver.getCurrentUrl());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getCurrentUrl()
	    															.toLowerCase()
	    															.startsWith("https://www.ifmg.edu.br/sabara/@@busca?searchabletext=carlos+alberto"));
	}
	
	//Testes de todos os botões do site do IFMG Sabará
	
	@Test
	public void testBtnMeuIFMG() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("Meu IFMG")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("RM Portal"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("rm portal"));
	}
	
	@Test
	public void testBtnCPA() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("CPA")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Comissão Própria de Avaliação"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("comissão própria de avaliação - cpa"));
	}

	@Test
	public void testBtnWebmail() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("Webmail")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Gmail"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("gmail"));
	}
	@Test
	public void testBtnContato() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("Contato")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Contato — Instituto Federal de Educação, Ciência e Tecnologia de Minas Gerais Campus Sabará"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("contato — instituto federal de educação"));
	}
	
	@Test
	public void testBtnExAlunos() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("Ex-Alunos")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Formulário Contato Ex alunos — Instituto Federal de Educação, Ciência e Tecnologia de Minas Gerais Campus Sabará"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("formulário contato ex alunos — instituto federal de educação"));
	}
	
	@Test
	public void testBtnAcessoSistemas() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("Acesso a Sistemas")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Acesso a Sistemas — Instituto Federal de Educação, Ciência e Tecnologia de Minas Gerais IFMG"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("acesso a sistemas — instituto federal de educação"));
	}
	
	@Test
	public void testBtnFacebook() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("https://www.ifmg.edu.br/sabara");

	    driver.findElement(By.linkText("Facebook")).click();

		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("IFMG Campus Sabará - Página inicial"));

	    System.out.println("Title: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("ifmg campus sabará - página inicial"));
	}
	
	@After
	public void closing() throws Exception{
		// Espera 0,1 segundos e fecha a janela do browser
	    Thread.sleep(100);
		driver.quit();
	}

}
