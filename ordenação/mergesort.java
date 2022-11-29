import java.util.*;

public class mergesort {

    final int inf = 100000007;

    void algorithm(ArrayList<Integer> v){
        if(v.size()==1) return;

        ArrayList<Integer> u1 = new ArrayList<>();
        ArrayList<Integer> u2 = new ArrayList<>();

        for(int i=0;i<v.size();i++){
            if(i<v.size()/2) u1.add(v.get(i));
            else u2.add(v.get(i));
        }

        algorithm(u1);
        algorithm(u2);

        u1.add(inf);
        u2.add(inf);

        int pointer_1 = 0;
        int pointer_2 = 0;

        for(int i=0;i<v.size();i++){
            if(u1.get(pointer_1) < u2.get(pointer_2)){
                v.set(i, u1.get(pointer_1));
                pointer_1++;
            }else{
                v.set(i, u2.get(pointer_2));
                pointer_2++;
            }
        }

    }

    public static void main(String[] args) {
        ArrayList<Integer> a = new ArrayList<>();
        a.add(5);
        a.add(4);
        a.add(3);
        a.add(2);
        a.add(1);

        new mergesort().algorithm(a);
        for(int i=0;i<a.size();i++) System.out.print(a.get(i)+" ");
        System.out.println();
    }
}
