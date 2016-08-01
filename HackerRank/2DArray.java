// https://www.hackerrank.com/challenges/2d-array
import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class 2DArray {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[][] = new int[6][6];
        for(int arr_i=0; arr_i < 6; arr_i++){
            for(int arr_j=0; arr_j < 6; arr_j++){
                arr[arr_i][arr_j] = in.nextInt();
            }
        }
        int max=0, sum=0, i, j;
        for(i=1; i<5; i++){
            for(j=1; j<5; j++){
                if(true){
                    sum = arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1]+arr[i][j];
                    if(i==1 && j==1){
                        max = sum;
                    }
                    else if(sum>max){
                        max = sum;
                    }
                }
            }
        }
        System.out.print(max);
    }
}
