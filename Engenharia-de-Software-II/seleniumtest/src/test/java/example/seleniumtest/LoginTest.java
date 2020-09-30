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

public class LoginTest {

	WebDriver driver;

	@Before
	public void setUp() {
		// Indica onde está o drive do Chrome
		System.setProperty("webdriver.chrome.driver", "C:\\drivers\\chromedriver.exe");
		driver = new ChromeDriver();
	}

	@Test
	public void test() {
		// instrui o driver para "navegar" pelo site The Internet para teste de login
		driver.navigate().to("http://the-internet.herokuapp.com/login");

		// obtém um campo de entrada de dados, de nome "username"
		WebElement elementLogin = driver.findElement(By.id("username"));

		// preenche esse campo com as palavras "tomsmith"
		elementLogin.sendKeys("tomsmith");
		
		// obtém um campo de entrada de dados, de nome "password"
		WebElement elementPassword = driver.findElement(By.id("password"));
		
		// preenche esse campo com as palavras "SuperSecretPassword!"
		elementPassword.sendKeys("SuperSecretPassword!");
		
		// dando um ENTER para logar no site de forma rápida hehe
		elementPassword.sendKeys(Keys.ENTER);
		
		// verificando se o site está com a URL correta para o site
		WebDriverWait wait = new WebDriverWait(driver,10);
	    wait.until(ExpectedConditions.urlToBe("http://the-internet.herokuapp.com/secure"));

	    System.out.println("URL: " + driver.getCurrentUrl());

	    assertTrue("Erro - Página não retornou valor esperado.", driver.getCurrentUrl()
	    															.toLowerCase()
	    															.startsWith("http://the-internet.herokuapp.com/secure"));
	}
	
	@After
	public void closing() throws Exception{
		// Espera 5 segundos e fecha a janela do browser
	    Thread.sleep(5000);
		driver.quit();
	}

}
