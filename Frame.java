import java.awt.BorderLayout;
import java.awt.EventQueue;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.awt.Color;
import java.awt.Font;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JPasswordField;

public class Frame extends JFrame {

	private JPanel contentPane;
	private JTextField textField;
	private JPasswordField passwordField;
	private JTextField textField_1;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Frame frame = new Frame();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Frame() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 450, 300);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		JLabel lblName = new JLabel("Name");
		lblName.setFont(new Font("Source Code Pro Medium", Font.BOLD, 15));
		lblName.setForeground(Color.DARK_GRAY);
		lblName.setBounds(10, 21, 75, 20);
		contentPane.add(lblName);
		
		textField = new JTextField();
		textField.setBounds(132, 22, 145, 20);
		contentPane.add(textField);
		textField.setColumns(10);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"Male", "Female", "Viranchi"}));
		comboBox.setToolTipText("Male");
		comboBox.setBounds(338, 21, 63, 22);
		contentPane.add(comboBox);
		
		passwordField = new JPasswordField();
		passwordField.setBounds(132, 53, 145, 20);
		contentPane.add(passwordField);
		
		JLabel lblPassword = new JLabel("PassWord");
		lblPassword.setForeground(Color.DARK_GRAY);
		lblPassword.setFont(new Font("Source Code Pro Medium", Font.BOLD, 15));
		lblPassword.setBounds(10, 52, 112, 20);
		contentPane.add(lblPassword);
		
		JLabel lblNewLabel = new JLabel("Amanananan");
		lblNewLabel.setBounds(10, 83, 75, 27);
		contentPane.add(lblNewLabel);
		
		textField_1 = new JTextField();
		textField_1.setBounds(132, 84, 145, 20);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
	}
}