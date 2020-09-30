package example.seleniumtest;

import static org.junit.Assert.*;

import java.util.List;

import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.ExpectedConditions;
import org.openqa.selenium.support.ui.WebDriverWait;

public class GoogleClickTest {

	WebDriver driver;

	@Before
	public void setUp() {
		// Indica onde está o drive do Chrome
		System.setProperty("webdriver.chrome.driver", "C:\\drivers\\chromedriver.exe");
		driver = new ChromeDriver();
	}

	@Test
	public void test() {
		// instrui o driver para "navegar" pelo Google
		driver.navigate().to("http://www.google.com");

		// obtém um campo de entrada de dados, de nome "q"
		WebElement element = driver.findElement(By.name("q"));

		// preenche esse campo com as palavras ""
		element.sendKeys("");

		List<WebElement> elementName = driver.findElements(By.name("btnI"));
	    elementName.get(1).click();		
		
		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.titleContains("Google Doodles"));

	    System.out.println("Título: " + driver.getTitle());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getTitle()
	    															.toLowerCase()
	    															.startsWith("google doodles"));
	}
	
	@After
	public void closing() throws Exception{
		// Espera 5 segundos e fecha a janela do browser
	    Thread.sleep(5000);
		driver.quit();
	}

}
