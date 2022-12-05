public class binary_search{

    public int algorithm(int[] v, int left, int right, int find){
        int mid;
        while(left<=right){
            mid = (left+right)/2;

            if(v[mid] == find) return mid;
            else if(v[mid] < find) left = mid + 1;
            else right = mid - 1;
        }

        return -1;
    }

    public static void main(String[] args){
        int[] a = {1,2,3,4,5};
        System.out.println(new binary_search().algorithm(a, 0, 4, 3));
    }
}