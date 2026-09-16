public class OneD_to_2D {

    public static int[][] construct2DArray(int[] original, int m, int n) {

        int[][] arr = new int[m][n];

        int ptrofOneD = 0;

        for(int i =0; i<m; i++){

            for(int j = 0 ; j<n; j++){

                arr[i][j] = original[ptrofOneD];
                ptrofOneD++;
            }
        }

        return arr;
    }

    public static void printMatrix(int[][] mat){

        for(int i = 0 ; i<mat.length; i++){

            for(int j = 0; j<mat[i].length; j++){

                System.out.print(mat[i][j] + " ");
            }

            System.out.println();
        }
    }

    public static void main(String[] args) {
        
        //int[] arr = {1 , 2 , 3 , 4};
        int[] arr = {1 , 2 ,3};
        int m = 1;
        int n = 3;

        int[][] mat = construct2DArray(arr , m , n);
        printMatrix(mat);
    }
    
}
