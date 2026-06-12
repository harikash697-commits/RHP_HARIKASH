import java.util.*;
public class MaximumSumOfElementsInEachRow {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.print("Enter no of rows:");
        int r=s.nextInt();
        System.out.print("Enter no of cols:");
        int c=s.nextInt();
int[][] arr=new int[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        System.out.print("Enter a element:");
        arr[i][j]=s.nextInt();
    }
}
int[][] a=new int[r][c];
for(int i=0;i<r;i++){
a[i][0]=arr[i][0];
}
for(int i=1;i<c;i++){
    int h_1=0;
    int h_2=0;
    for(int p=0;p<r;p++){
        if(a[p][i-1]>h_1){
            h_2=h_1;
            h_1=a[p][i-1];
        }
        else if(a[p][i-1]>h_2){
            h_2=a[p][i-1];
        }
    }
    for(int j=0;j<r;j++){
a[j][i]=arr[j][i]+(h_1==a[j][i-1]?h_2:h_1);
    }
}

int h=a[0][c-1];
for(int i=0;i<r;i++){
    if(h<a[i][c-1]){
        h=a[i][c-1];
    }
}
System.out.println("Maximum Value:"+h);
    }
}