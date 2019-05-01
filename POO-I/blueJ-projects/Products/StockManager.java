import java.util.ArrayList;
import java.util.Iterator;

/**
 * Manage the stock in a business.
 * The stock is described by zero or more Products.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class StockManager
{
    // A list of the products.
    private ArrayList<Product> stock;

    /**
     * Initialise the stock manager.
     */
    public StockManager(int valor)
    {
        stock = new ArrayList<Product>();
        Iterator<Product> iterador = stock.iterator();
        Product pro = null;
        while(iterador.hasNext()){
            pro = iterador.next();
            if(pro.getQuantity() <= valor){
                pro.toString();
            } 
        } 
    }

    /**
     * Add a product to the list.
     * @param item The item to be added.
     */
    public void addProduct(Product item)
    {
        Product pro = findProduct(item.getID());
        if(pro != null){
            System.out.println("ID já cadastrado.");
        }else{
            stock.add(item);
        }
    }
    
    /**
     * Receive a delivery of a particular product.
     * Increase the quantity of the product by the given amount.
     * @param id The ID of the product.
     * @param amount The amount to increase the quantity by.
     */
    public void delivery(int id, int amount)
    {
        Product pro = findProduct(id);
        if(pro == null){
            System.out.println("Produto não foi encontrado.");
        }else{
            pro.increaseQuantity(amount);
        }
    }   
    
    /**
     * Try to find a product in the stock with the given id.
     * @return The identified product, or null if there is none
     *         with a matching ID.
     */
    public Product findProduct(int id)
    {
        for(Product pro : stock){
            if(pro.getID() == id){
                return pro;
            }
        }
        return null;
    }
    
    /**
     * Try to find a product in the stock with the given id.
     * @return The identified product, or null if there is none
     *         with a matching ID.
     */
    public Product findProduct(String name)
    {
        Iterator<Product> iterador = stock.iterator();
        Product pro = null;
        boolean achou = false;
        while(iterador.hasNext() && !achou){
            pro = iterador.next();
            if(name.equals(pro.getName())){
                achou = true;
                return pro;
            }
        }
        return null;
    }
    
    /**
     * Locate a product with the given ID, and return how
     * many of this item are in stock. If the ID does not
     * match any product, return zero.
     * @param id The ID of the product.
     * @return The quantity of the given product in stock.
     */
    public int numberInStock(int id)
    {
        Product pro = findProduct(id);
        if(pro == null){
            System.out.println("Produto não foi encontrado.");
            return 0;
        }else{
            return pro.getQuantity();
        }
    }

    /**
     * Print details of all the products.
     */
    public void printProductDetails()
    {
        for(Product pro : stock){
            System.out.println(pro.toString());
        }
    }
    
    /**
     * Print details of all the products.
     */
    public void printProduct(int amount)
    {
        for(Product pro : stock){
            if(pro.getQuantity() < amount){
                System.out.println(pro.toString());
            }
        }
    }
}
