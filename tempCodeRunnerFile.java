// Java Program to Draw a rectangle
// using drawRect(int x, int y, int width, int height)
import java.awt.*;
import javax.swing.*;

public class big extends JApplet {

	public void init()
	{
		// set size
		setSize(400, 400);

		repaint();
	}

	// paint the applet
	public void paint(Graphics g)
	{
		// set Color for rectangle
		g.setColor(Color.red);

		// draw a rectangle
		g.drawRect(100, 100, 200, 200);
	}
}