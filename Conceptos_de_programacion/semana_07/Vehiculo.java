
public class Vehiculo {
    // Atributos de la clase
    private String marca;
    private String modelo;
    private String color;
    private String placa;
    private double tarifa;

    // Constructor vacío
    public Vehiculo() {
        // Se pueden inicializar los atributos con valores predeterminados si se desea
        this.marca = "";
        this.modelo = "";
        this.color = "";
        this.placa = "";
        this.tarifa = 0.0;
    }

    // Constructor con parámetros
    public Vehiculo(String marca, String modelo, String color, String placa, double tarifa) {
        this.marca = marca;
        this.modelo = modelo;
        this.color = color;
        this.placa = placa;
        this.tarifa = tarifa;
    }

    // Métodos para mostrar los atributos (Getters)
    public String getMarca() {
        return marca;
    }

    public String getModelo() {
        return modelo;
    }

    public String getColor() {
        return color;
    }

    public String getPlaca() {
        return placa;
    }

    public double getTarifa() {
        return tarifa;
    }

    // Método main para instanciar objetos
    public static void main(String[] args) {
        // Creación de objeto usando el constructor vacío
        Vehiculo vehiculo1 = new Vehiculo();

        // Creación de objeto usando el constructor con parámetros
        Vehiculo vehiculo2 = new Vehiculo("Toyota", "Corolla", "Rojo", "ABC123", 150.0);

        // Mostrar los valores de los atributos del objeto vehiculo2
        System.out.println("Marca: " + vehiculo2.getMarca());
        System.out.println("Modelo: " + vehiculo2.getModelo());
        System.out.println("Color: " + vehiculo2.getColor());
        System.out.println("Placa: " + vehiculo2.getPlaca());
        System.out.println("Tarifa: " + vehiculo2.getTarifa());
    }
}
