import java.util.ArrayList;



public class Solution {



    // Recursive Tower of Hanoi function

    void towerOfHanoi(int n, char source, char auxiliary, char destination, ArrayList<String> result) {

        if (n == 1) {

            result.add("Move disk 1 from " + source + " to " + destination);

            return;

        }



        towerOfHanoi(n - 1, source, destination, auxiliary, result);

        result.add("Move disk " + n + " from " + source + " to " + destination);

        towerOfHanoi(n - 1, auxiliary, source, destination, result);

    }



    // Main method to run the code

    public static void main(String[] args) {

        int numDisks = 3;

        char source = 'A', auxiliary = 'B', destination = 'C';



        Solution sol = new Solution();

        ArrayList<String> result = new ArrayList<>();



        sol.towerOfHanoi(numDisks, source, auxiliary, destination, result);



        System.out.println("Steps to solve Tower of Hanoi with " + numDisks + " disks:");

        for (String step : result) {

            System.out.println(step);

        }

    }

}