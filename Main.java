import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int N, Pmaior;
	    double maior;
		
	    System.out.print("Quantos numeros voce vai digitar? ");
	    N = sc.nextInt();
	    
	    double[] vet = new double[N];
	    
	    for (int i = 0; i < N; i++) {
	    	 System.out.print("Digite um numero: ");
	    	 vet[i] = sc.nextDouble();
	     }
	    
	    maior = vet[0];
	    Pmaior = 0;
	    
	    System.out.println();
	    for (int i = 1; i < N; i++) {
            if (vet[i] > maior) {
            maior = vet[i];
            Pmaior = i;
            }
       }
	    
	    System.out.println("MAIOR VALOR = " + String.format("%.1f", maior));
	    System.out.println("POSICAO DO MAIOR VALOR = " + Pmaior);
	    
	    sc.close();
	    
	}

}
