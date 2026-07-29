//Prompt the user to enter a sentence and then performs a series of operations on the
//sentence. The program should handle the following exceptions:
//         If the input string is null or empty, the program should display an appropriate
//           error message.
//         If the input string contains less than two words, the program should display an
//          appropriate error message.
//Your program should use try-catch blocks to handle the exceptions. If the input and
//operation are valid, display the modified sentence to the user.

package ExceptionHandling;

import java.util.*;

class SentenceProcessor {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a sentence: ");
        String sentence = sc.nextLine();

        if (sentence == null || sentence.trim().isEmpty()) {
            System.out.println("Error: Input is null or empty.");
            return;
        }

        try {
                        // Split sentence into words
            String[] words = sentence.trim().split("\\s+");

            if (words.length < 2) {
                throw new Exception("Sentence must contain at least two words.");
            }
            // StringBuilder is used for efficient string manipulation (mutable and faster than String in loops)
            //Mostly used when we need:
            //* concatenate strings in loops
            //* build text step by step
            //* reverse strings

            StringBuilder result = new StringBuilder();
            for (int i = words.length - 1; i >= 0; i--) {
                result.append(words[i]).append(" ");
            }

            System.out.println("Modified sentence: " + result.toString().trim());

        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
