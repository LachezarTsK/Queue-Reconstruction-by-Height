
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution {

    public int[][] reconstructQueue(int[][] people) {
        Arrays.sort(people, (x, y) -> (x[0] == y[0]) ? (x[1] - y[1]) : (y[0] - x[0]));
        List<int[]> reconstructedQueue = new ArrayList<>();
        for (int[] person : people) {
            reconstructedQueue.add(person[1], person);
        }
        return reconstructedQueue.toArray(people);
    }
}
