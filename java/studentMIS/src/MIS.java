import javax.swing.*;
import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.event.*;

public class MIS extends JFrame implements ActionListener {
	JTextField name_box;
	JTextField id_box;
	JTextField intgretResult_box;
	JTextField sport_box;
	JButton enter;
	JButton census;
	JMenuBar menuBar;
	JMenu menu;
	JMenuItem item1, item2, item3;
	
	MIS() {
		name_box = new JTextField(8);
		id_box = new JTextField(8);
		intgretResult_box = new JTextField(6);
		sport_box = new JTextField(6);
		enter = new JButton("¼ȡ");
		census = new JButton("ͳ��");
		menuBar = new JMenuBar();
		menu = new JMenu("�˵�");
		item1 = new JMenuItem("¼ȡ");
		item2 = new JMenuItem("ͳ��");
		item3 = new JMenuItem("�˳�");
		
		item1.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_E, KeyEvent.CTRL_MASK));
		item2.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Q, KeyEvent.CTRL_MASK));
		menu.add(item1);
		menu.addSeparator();
		menu.add(item2);
		menu.addSeparator();
		menu.add(item3);
		menuBar.add(menu);
		setJMenuBar(menuBar);
		
		this.setTitle("ѧ����Ϣ����ϵͳ");
		JPanel myTitle = new JPanel();
		myTitle.add(new JLabel("ѧ����Ϣ����ϵͳ"));
		myTitle.setBounds(170, 20, 150, 50);
		add(myTitle);
		
		JPanel nameText = new JPanel();
		nameText.add(new JLabel(" ������"));
		nameText.add(name_box);
		JPanel idText = new JPanel();
		idText.add(new JLabel(" ѧ�ţ�"));
		idText.add(id_box);
		JPanel resText = new JPanel();
		resText.add(new JLabel("�ۺϳɼ���"));
		resText.add(intgretResult_box);
		JPanel sportsText = new JPanel();
		sportsText.add(new JLabel("�����ɼ���"));
		sportsText.add(sport_box);
		
		Box myMain = Box.createVerticalBox();
		myMain.add(nameText);
		myMain.add(idText);
		myMain.add(resText);
		myMain.add(sportsText);
		myMain.setBounds(0, 80, 240, 200);
		add(myMain);
		
		enter.setBounds(280, 104, 100, 40);
		census.setBounds(280, 190, 100, 40);
		add(enter);
		add(census);
		
		setLayout(null);
		setBounds(680, 300, 480, 360);
		setVisible(true);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		//�¼�����
		enter.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
			}
		});
	}
	
	
	
	@Override
	public void actionPerformed(ActionEvent arg0) {
		// TODO Auto-generated method stub
		
	}

}
