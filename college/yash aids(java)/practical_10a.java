 import java.awt.Color;
import java.awt.Graphics;
import java.util.ArrayList;

import javax.swing.JFrame;
import javax.swing.JPanel;


public class practical_10a {
	public static void main(String args[]) {
	JFrame j1=new JFrame();
	j1.setSize(400,400);
	JPanel j2=new JPanel() {
		public void paint(Graphics g) {
            int xPoints[]={200,125,275};
            int yPoints[]={30,100,100}; 
            g.setColor(Color.BLUE);            
            g.fillOval(125, 100, 150, 150);
            g.setColor(Color.ORANGE);
            g.fillRect(75, 250, 50, 30);
            g.setColor(Color.BLUE); 
            g.drawRect(175, 250, 50 , 30);
            g.setColor(Color.GREEN);
            g.fillRect(275, 250, 50, 30);
            g.setColor(Color.black);
            g.fillOval(150, 140, 30 , 30);
            g.setColor(Color.black);
            g.fillOval(220, 140, 30 , 30);
            g.setColor(Color.MAGENTA);
            g.fillOval(100, 150, 25, 50);
            g.setColor(Color.MAGENTA);
            g.fillOval(275, 150, 25, 50);
            g.setColor(Color.red);
            g.drawArc(167, 180, 60, 40, 180, 180);
            g.drawPolygon(xPoints, yPoints, 3);
            g.setColor(Color.white);
            g.drawOval(190 , 165, 20, 20);
        }
	};
	j2.setBounds(10,10,400,400);
	j1.setVisible(true);
	j1.add(j2);
	}
	
}
