import javax.swing.*;
import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.event.*;
import java.util.ArrayList;

public class MIS extends JFrame implements ActionListener {
	ArrayList<Student> stuMSG = new ArrayList();
	JTextField name_box;
	JTextField id_box;
	JTextField intgretResult_box;
	JTextField sports_box;
	JButton enter;
	JButton census;
	JMenuBar menuBar;
	JMenu menu;
	JMenuItem item1, item2, item3;
	
	MIS() {
		name_box = new JTextField(8);
		id_box = new JTextField(8);
		intgretResult_box = new JTextField(6);
		sports_box = new JTextField(6);
		enter = new JButton("录取");
		census = new JButton("统计");
		menuBar = new JMenuBar();
		menu = new JMenu("菜单");
		item1 = new JMenuItem("录取");
		item2 = new JMenuItem("统计");
		item3 = new JMenuItem("退出");
		
		item1.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_E, KeyEvent.CTRL_MASK));
		item2.setAccelerator(KeyStroke.getKeyStroke(KeyEvent.VK_Q, KeyEvent.CTRL_MASK));
		menu.add(item1);
		menu.addSeparator();
		menu.add(item2);
		menu.addSeparator();
		menu.add(item3);
		menuBar.add(menu);
		setJMenuBar(menuBar);
		
		this.setTitle("学生信息管理系统");
		JPanel myTitle = new JPanel();
		myTitle.add(new JLabel("学生信息管理系统"));
		myTitle.setBounds(170, 20, 150, 50);
		add(myTitle);
		
		JPanel nameText = new JPanel();
		nameText.add(new JLabel(" 姓名："));
		nameText.add(name_box);
		JPanel idText = new JPanel();
		idText.add(new JLabel(" 学号："));
		idText.add(id_box);
		JPanel resText = new JPanel();
		resText.add(new JLabel("综合成绩："));
		resText.add(intgretResult_box);
		JPanel sportsText = new JPanel();
		sportsText.add(new JLabel("体育成绩："));
		sportsText.add(sports_box);
		
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
		
		//事件监听
		enter.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent arg0) {
				// TODO Auto-generated method stub
				
				Student temp = new Student(name_box.getText(), id_box.getText(),
											Integer.valueOf(intgretResult_box.getText()),
											Integer.valueOf(sports_box.getText()));
				
				School tool = new School(300);
				if (tool.isAllowToEnter(temp)) {
					JOptionPane.showMessageDialog(null, 
							"学号"+id_box.getText()+"姓名"+name_box.getText()+"已被录取",
							"提示", JOptionPane.PLAIN_MESSAGE);
					
					stuMSG.add(temp);
				} else {
					JOptionPane.showMessageDialog(null, 
							"该生分数不足，未录取",
							"提示", JOptionPane.PLAIN_MESSAGE);
				}
				
			}
		});
		
		census.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				SonWin look = new SonWin(stuMSG);
			}
		});
		
		item1.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				Student temp = new Student(name_box.getText(), id_box.getText(),
						Integer.valueOf(intgretResult_box.getText()),
						Integer.valueOf(sports_box.getText()));

				School tool = new School(300);
				if (tool.isAllowToEnter(temp)) {
					JOptionPane.showMessageDialog(null, 
							"学号"+id_box.getText()+"姓名"+name_box.getText()+"已被录取",
							"提示", JOptionPane.PLAIN_MESSAGE);

					stuMSG.add(temp);
				} else {
					JOptionPane.showMessageDialog(null, 
							"该生分数不足，未录取",
							"提示", JOptionPane.PLAIN_MESSAGE);
}
			}
		});
		
		item2.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				SonWin look = new SonWin(stuMSG);
			}
		});
		
		item3.addActionListener(new ActionListener() {
			
			@Override
			public void actionPerformed(ActionEvent arg0) {
				System.exit(0);
			}
		});
	}
	
	
	
	@Override
	public void actionPerformed(ActionEvent arg0) {
		// TODO Auto-generated method stub
		
	}

}
