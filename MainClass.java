package simpleCalculator;

public class MainClass extends Calc {

	public static void main(String[] args) {
		
		Calc calculator = new Calc();
		
		int a = calculator.sum(14, 21);
		
		System.out.print(a);

	}

}
