//An online store stores order amounts dynamically.
//Requirements:
//        1. Add multiple order values.
//        2. Remove all orders below 500.
//        3. Apply 10% discount to orders above 5000.
//        4. Calculate total revenue after modifications.
//        5. Display sorted order list (ascending).

import java.util.ArrayList;
import java.util.Collections;
class Store{
    public static void main(String[] args){
        ArrayList<Integer> orderList = new ArrayList<>();
        //add orders
        orderList.add(5999);
        orderList.add(5100);
        orderList.add(1000);
        orderList.add(510);
        orderList.add(120);
        orderList.add(253);
        orderList.add(199);
        orderList.add(699);
        orderList.add(6250);
        //remover orders
        for(int i = 0; i < orderList.size(); i++){
            if(orderList.get(i) < 500){
                orderList.remove(i);
                i--;
            }
        }
        //apply discount
        for(int i = 0; i < orderList.size(); i++){
            if(orderList.get(i) > 5000){
              double discount = orderList.get(i) - (orderList.get(i) * 0.1);
              orderList.set(i , (int)discount);
            }
        }
        //total revenue
        int total = 0;
        for (int amount: orderList){
            total+=amount;
        }
        System.out.println("Total Revenue: " + total);

        //Sorting in ascending
        Collections.sort(orderList);
        System.out.println(orderList);
    }
}
