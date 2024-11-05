
public class Vehiculo {
    
    private String marca;
    private String modelo;
    private String color;
    private String placa;
    private double tarifa;

    
    public Vehiculo() {
        
        this.marca = "";
        this.modelo = "";
        this.color = "";
        this.placa = "";
        this.tarifa = 0.0;
    }

    
    public Vehiculo(String marca, String modelo, String color, String placa, double tarifa) {
        this.marca = marca;
        this.modelo = modelo;
        this.color = color;
        this.placa = placa;
        this.tarifa = tarifa;
    }

    
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

    
    public static void main(String[] args) {
        
        Vehiculo vehiculo1 = new Vehiculo();

        
        Vehiculo vehiculo2 = new Vehiculo("Toyota", "Corolla", "Rojo", "ABC123", 150.0);

        
        System.out.println("Marca: " + vehiculo2.getMarca());
        System.out.println("Modelo: " + vehiculo2.getModelo());
        System.out.println("Color: " + vehiculo2.getColor());
        System.out.println("Placa: " + vehiculo2.getPlaca());
        System.out.println("Tarifa: " + vehiculo2.getTarifa());
    }
}
