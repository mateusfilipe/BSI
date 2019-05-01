import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.Iterator;

/**
 * A simple model of an auction.
 * The auction maintains a list of lots of arbitrary length.
 *
 * @author David J. Barnes and Michael Kolling.
 * @version 2008.03.30
 */
public class Auction
{
    // The list of Lots in this auction.
    private ArrayList<Lot> lots;
    // The number that will be given to the next lot entered
    // into this auction.
    private int nextLotNumber;

    /**
     * Create a new auction.
     */
    public Auction()
    {
        lots = new ArrayList<Lot>();
        nextLotNumber = 1;
    }

    /**
     * Enter a new lot into the auction.
     * @param description A description of the lot.
     */
    public void enterLot(String description)
    {
        lots.add(new Lot(nextLotNumber, description));
        nextLotNumber++;
    }

    /**
     * Show the full list of lots in this auction.
     */
    public void showLots()
    {
        for(Lot lot : lots) {
            System.out.println(lot.toString());
        }
    }
    
    /**
     * Bid for a lot.
     * A message indicating whether the bid is successful or not
     * is printed.
     * @param number The lot number being bid for.
     * @param bidder The person bidding for the lot.
     * @param value  The value of the bid.
     */
    public void bidFor(int lotNumber, Person bidder, long value)
    {
        Lot selectedLot = getLot(lotNumber);
        if(selectedLot != null) {
            boolean successful = selectedLot.bidFor(new Bid(bidder, value));
            if(successful) {
                System.out.println("The bid for lot number " +
                                   lotNumber + " was successful.");
            }
            else {
                // Report which bid is higher.
                Bid highestBid = selectedLot.getHighestBid();
                System.out.println("Lot number: " + lotNumber +
                                   " already has a bid of: " +
                                   highestBid.getValue());
            }
        }
    }
    
    /**
     * Return the lot with the given number. Return null
     * if a lot with this number does not exist.
     * @param lotNumber The number of the lot to return.
     */
    public Lot getLot(int lotNumber)
    {
         Iterator<Lot> iterador = lots.iterator();
         Lot retornaLot = null;
         boolean achou = false;
         while(iterador.hasNext() && !achou){
             Lot lot = iterador.next();
             if(lot.getNumber() == lotNumber){
                 retornaLot = lot;
                 achou = true;
             }
         }
         return retornaLot;
    }
    
    /**
     * Um método que fecha o leilão, imprimindo aqueles que foram vendidos e seus devidos compradores
     *
     */
    public void close()
    {
        for(Lot lot : lots){
            if(lot.getHighestBid() != null){
                System.out.println(lot.toString());
                System.out.println("Vendido para: "+(lot.getHighestBid().getBidder()).getName());
            }else{
                System.out.println(lot.toString());
                System.out.println("Não vendido.");
            }
        }                                  
    }
    
    /**
     * Identifica aqueles lots que não foram vendidos e os retorna;
     * 
     * @return    unsold
     */
    public ArrayList<Lot> getUnsold()
    {
         Iterator<Lot> iterador = lots.iterator();
         ArrayList unsold =  new ArrayList<Lot>();
         while(iterador.hasNext()){
             Lot lot = iterador.next();
             if(lot.getHighestBid() == null){
                 unsold.add(lot);
             }
         }
         return unsold;
    }
    
    /**
     * Remove o lote com o número de lote dado.
     * @param number O número do lote a ser removido.
     * @return O Lote com o número dado ou null se
     * não houver esse lote.
     */
    public Lot removeLot(int number){
       Iterator<Lot> iterador = lots.iterator();
       Lot lotAchado = null;
       boolean achou = false;
       while(iterador.hasNext() && !achou){
           Lot lot = iterador.next();
           if(lot.getNumber() == number){
               lotAchado = lot;
               iterador.remove();
               achou = true;
            }
       }
       if(!achou){
           return null;
       }
       return lotAchado;       
    }
}
