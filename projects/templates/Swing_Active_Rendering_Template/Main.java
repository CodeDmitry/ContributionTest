import javax.swing.*;

public class Main
{
    public static void main(String[] args) 
    {
        GamePanel gp = new GamePanel();
    
        JFrame f = new JFrame("A JFrame");
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        f.add(gp);
        f.setResizable(false);
        f.pack();
        f.setLocationRelativeTo(null);
        f.setVisible(true);
    }
}