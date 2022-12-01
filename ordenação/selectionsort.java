public class selectionsort {
    public void algorithm(int[] v){
        int min, idx_min, tmp;
        for (int i = 0; i < v.length; i++) {
            min = v[i];
            idx_min = i;
            for (int j = i+1; j < v.length; j++) {
                if(v[j]<min){
                    min = v[j];
                    idx_min = j;
                }
            }
            tmp = v[i];
            v[i] = min;
            v[idx_min] = tmp;
        }
    }
    public static void main(String[] args) {
        int[] a = {5,4,3,2,1};
        new selectionsort().algorithm(a);
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i]+" ");
        }
        System.out.println();
    }
    
}