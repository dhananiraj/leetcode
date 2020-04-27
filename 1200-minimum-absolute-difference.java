class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr);
        List<List<Integer>> output = new LinkedList<>();
        List<Integer> temp;
        int MIN_DIFF = Integer.MAX_VALUE;
        for(int i = 0; i < arr.length - 1; i++){
          MIN_DIFF = Math.min(MIN_DIFF, arr[i+1]-arr[i]);
        }
        for(int i = 0; i < arr.length - 1; i++){
          if(arr[i+1]-arr[i] == MIN_DIFF){
            temp = new ArrayList<>();
            temp.add(arr[i]);
            temp.add(arr[i+1]);
            output.add(temp);
          }
        }
        return output;
    }
}