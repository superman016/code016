import javax.swing.*;
import java.awt.BorderLayout;
import java.awt.Component;
import java.awt.event.*;
import java.util.ArrayList;

public class SonWin extends JFrame {
	Object a[][];
	JTable table;
	Object name[] = {"姓名", "学号", "综合成绩", "体育成绩"};
	
	SonWin(ArrayList<Student> msg) {
		a = new Object[msg.size()][4];
		
		for (int i = 0; i < msg.size(); i++) {
			for (int j = 0; j < 4; j++) {
				switch(j) {
				case 0:
					a[i][j] = msg.get(i).getName();
					break;
				case 1:
					a[i][j] = msg.get(i).getId();
					break;
				case 2:
					a[i][j] = msg.get(i).getIntgretResult();
					break;
				case 3:
					a[i][j] = msg.get(i).getSports();
					break;
				}
			}
		}
		
		table = new JTable(a, name);
		
		JScrollPane scroll = new JScrollPane(table);
		scroll.setSize(300, 200);
		add(scroll);
		setBounds(	680, 300, 480, 360);
		setVisible(true);
		validate();
		setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
	}
}
