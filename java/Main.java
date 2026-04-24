import java.util.Scanner;

public class Main {
    public static void pause() {
        System.out.println();
        System.out.print("Press Enter to continue...");
        new Scanner(System.in).nextLine();
    }

    public static void main(String[] args) {
        Arena arena = new Arena();
        Circus circus = new Circus();

        circus.animals.add(new Elephant("Gigi", "African"));
        circus.animals.add(new Snake("King", "Cobra"));
        circus.animals.add(new Lion("Kai", "Savana Lion"));
        circus.animals.add(new Kangaroo("Dj", "Savana"));

        System.out.println(arena.presentCircus("BestOfCircus"));
        circus.perform(arena);
        pause();
    }
}
