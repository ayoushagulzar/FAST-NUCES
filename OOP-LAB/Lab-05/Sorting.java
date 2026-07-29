// sorting of array of string (Amna , Ali , kinza , Hamza Jutt, Babar azam)

import java.util.Arrays;

    class Sorting {
        public static void main(String[] args) {
            String[] names = {"Amna", "Ali", "kinza", "Hamza Jutt", "Babar azam"};

            Arrays.sort(names);

            // Print sorted array
            System.out.println("Sorted Names:");
            for (String name : names) {
                System.out.println(name);
            }
        }
    }
