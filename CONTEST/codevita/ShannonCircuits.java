import java.util.*;

public class ShannonCircuits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        Map<String, String[]> darwaza = new HashMap<>(); 
        for (int i = 0; i < n; i++) {
            String[] parts = sc.nextLine().split("=");
            String gateName = parts[0].trim(); 
            String[] gateDefinition = parts[1].trim().split("[(), ]+");
            darwaza.put(gateName, gateDefinition);
        }
        int t = Integer.parseInt(sc.nextLine());
        Map<String, int[]> values = new HashMap<>();
        while (true) {
            String line = sc.nextLine();
            if (line.matches("[a-zA-Z]+")) {
                String lakshay = line.trim();
                another_circuit(darwaza, values, lakshay, t);
                break;
            }
            String[] parts = line.split(" ");
            String inputVar = parts[0];
            int[] samay = Arrays.stream(parts, 1, parts.length)
                    .mapToInt(Integer::parseInt)
                    .toArray();
            values.put(inputVar, samay);
        }
        sc.close();
    }

    private static void another_circuit(Map<String, String[]> darwaza, Map<String, int[]> values, String lakshay, int t) {
        Map<String, int[]> outputs = new HashMap<>();
        for (String gate : darwaza.keySet()) {
            outputs.put(gate, new int[t]);
        }
        for (int cycle = 1; cycle < t; cycle++) {
            for (String gate : darwaza.keySet()) {
                String[] defInation = darwaza.get(gate);
                String opt = defInation[0];
                String input1 = defInation[1];
                String input2 = defInation[2];

                int value1 = ValueGet(input1, outputs, values, cycle - 1);
                int value2 = ValueGet(input2, outputs, values, cycle - 1);
                int result = com_Gate(opt, value1, value2);
                outputs.get(gate)[cycle] = result;
            }
        }
        int[] targetOutput = outputs.get(lakshay);
        for (int i = 0; i < t; i++) {
            System.out.print(targetOutput[i] + (i == t - 1 ? "\n" : " "));
        }
    }

    private static int ValueGet(String var, Map<String, int[]> outputs, Map<String, int[]> values, int cycle) {
        if (values.containsKey(var)) {
            return values.get(var)[cycle];
        } else {
            return outputs.get(var)[cycle];
        }
    }
    private static int com_Gate(String opt, int value1, int value2) {
        int result = 0;
        switch (opt) {
            case "AND":
                result = value1 & value2;
                break;
            case "OR":
                result = value1 | value2;
                break;
            case "NAND":
                result = ~(value1 & value2) & 1;
                break;
            case "NOR":
                result = ~(value1 | value2) & 1;
                break;
            case "XOR":
                result = value1 ^ value2;
                break;
            default:
                result = 0;
                break;
        }
        return result;
    }
}