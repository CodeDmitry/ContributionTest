import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class GamePanel extends JPanel
{
    /** <p>preferred width hints container for packing.</p> */
    private static final int PWIDTH = 800;

    /** <p>preferred height hints container for packing.</p> */
    private static final int PHEIGHT = 500;

    /** <p>offscreen image.</p> */
    private Image dbImage = null;
    
    /** <p>dbImage's graphics context.</p> */
    private Graphics dbg = null;        

    /** <p>Is the game running?</p> */        
    private volatile boolean running = false;
    
    /** <p>Is the game over?</p> */
    private volatile boolean gameOver = false;

    /** <p> Our second thread, avoid interacting with it directly </p> */
    private Thread animator = null;

    /** <p>Called on construction</p> */
    public GamePanel()
    {
        setBackground(Color.BLACK);
        setPreferredSize(new Dimension(PWIDTH, PHEIGHT));
        
        setFocusable(true);
        requestFocus();
        
        addKeyListener(new KeyAdapter() {
            public void keyPressed(KeyEvent evt) {
                int kc = evt.getKeyCode();
                
                if (kc == KeyEvent.VK_ESCAPE) {
                    gameOver = true;
                    System.out.println("detected.");
                }
            }
        });
        
        addMouseListener(new MouseAdapter() {
            public void mousePressed(MouseEvent evt) {
                /* TODO: add mouse handling logic. */
            }
        });        
    }
        
    /** <p>Called by containing class when adding the component.</p> */
    @Override
    public void addNotify()
    {
        super.addNotify();
        startGame();
    }
    
    /**
     * <p>called by addNotify to start the game.</p>
     */
    private void startGame()
    {
        if (animator == null || running == false) {
            animator = new Thread(new Runnable() {
                @Override
                public void run()
                {
                    running = true;
                    
                    while (running == true) {
                        gameUpdate();
                        gameRender();
                        paintScreen();
                        
                        try {
                            Thread.sleep(20);
                        } catch (InterruptedException e){}
                    }
                }
            });
            
            animator.start();
        }
    }
    
    /** 
     * <p>Called every game loop</p> 
     */
    private void gameUpdate()
    {
        if (gameOver == false) {
            /* TODO: update game state */
        }
    }

    /** 
     * <p>Called every game loop</p> 
     */
    private void gameRender()
    {
        dbImage = createImage(PWIDTH, PHEIGHT);
        if (dbImage == null) {
            System.out.println("gameRender> could not create dbImage"); 
            return;            
        } else {
            dbg = dbImage.getGraphics();
        }
        
        dbg.setColor(Color.BLACK);
        dbg.fillRect(0, 0, PWIDTH, PHEIGHT);
        
        if (gameOver) {
            FontMetrics fm = dbg.getFontMetrics(dbg.getFont());
            int fh = fm.getAscent();
        
            /* TODO: do something because the game is over. */
            int msg_w = 300;
            int msg_h = 125;
            int msg_x = (PWIDTH - msg_w) / 2;
            int msg_y = (PHEIGHT - msg_h) / 2;
            
            dbg.setColor(Color.BLUE);
            dbg.fillRect(msg_x, msg_y, msg_w, msg_h);
            dbg.setColor(Color.WHITE);
            dbg.drawString("You Pressed Escape!", msg_x + 1, msg_y + fh);
        }
    }
        
    /** 
     * <p>Responsible for painting.</p> 
     */    
    public void paintScreen()
    {
        Graphics g = null;
        try {
            g = getGraphics();
            if ((g != null) && (dbImage != null)) {
                g.drawImage(dbImage, 0, 0, null);
            }
            Toolkit.getDefaultToolkit().sync();
        } catch (Exception e) {
            System.out.println("paintScreen> could not obtain Graphics context.");
        }
    }
}