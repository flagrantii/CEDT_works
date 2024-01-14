import java.util.HashSet;

public class Garage {
	Car[] cars = new Car[6];

	public Garage() {
		Car a = new Car(111, "Honda");
		Car b = new Car(112, "Toyota");
		Car c = new Car(111, "Honda");
		Car d = new Car(113, "Nissan");
		Car e = new Car(112, "Toyota");
		Car f = new Car(111, "Honda");

		cars[0] = a;
		cars[1] = b;
		cars[2] = c;
		cars[3] = d;
		cars[4] = e;
		cars[5] = f;
	}

	public void removeDup() {
		HashSet<Car> uniqueCars = new HashSet<>();
		for (Car car : cars) {
			uniqueCars.add(car);
		}
		cars = uniqueCars.toArray(new Car[uniqueCars.size()]);
	}

	public void print() {
		for (Car car : cars) {
			System.out.println(car);
		}
	}
}
