import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

 class Result 
 {

    /*
     * Complete the 'insertionSort1' function below.
     *
     * The function accepts following parameters:
     *  1. INTEGER n
     *  2. INTEGER_ARRAY arr
     */

    public static void insertionSort1(int n, List<Integer> arr) 
    {
    // Write your code here
      
      int sizOfArr = n;
        int lastInd = sizOfArr - 1;
        Integer num = arr.get(lastInd);
        boolean isSorted = false;
//1,2,3,5,4
        for (int i = lastInd; i > 0; i--) {
            if (!(isSorted)) {
                if (!(num > arr.get(i - 1))) {
                    Integer temp = arr.get(i - 1);
                    arr.set(i, temp);
                } else if (num > arr.get(i - 1)) {
                    arr.set(i, num);
                    isSorted = true;
                }


                for (int j = 0; j < (sizOfArr); j++) {

                    System.out.print(arr.get(j) + " ");
                }

                System.out.println("");


            }
        }
        // for the zero index purpuse.
        if(!(isSorted)){
            arr.set(0, num);
            for (int j = 0; j < (sizOfArr); j++) {

                System.out.print(arr.get(j) + " ");
            }
        }
 }
}

public class Solution 
{
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        Result.insertionSort1(n, arr);

        bufferedReader.close();
    }
}

