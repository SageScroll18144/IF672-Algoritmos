public class bubblesort{

    public void algorithm(int[] v){
        for(int i=0;i<v.length;i++){
            for(int j=1;j<v.length;j++){
                if(v[j-1]>v[j]){
                    v[j-1] += v[j];
                    v[j] = v[j-1] - v[j];
                    v[j-1] -= v[j];
                }
            }
        }
    }
    public static void main(String[] args) {
        int[] a = {5,4,3,2,1};
        new bubblesort().algorithm(a);
        for(int i=0;i<a.length;i++) System.out.print(a[i]+" ");
        System.out.println();
    }
}