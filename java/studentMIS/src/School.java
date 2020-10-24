
public class School {
	School(int scoreLine) {
		scoreLine_ = scoreLine;
	}
	
	void setScoreLine(int scoreLine) {
		scoreLine_ = scoreLine;
	}
	int getScoreLine() {
		return scoreLine_;
	}
	
	boolean isAllowToEnter(Student stu) {
		boolean flag = false;
		
		if (stu.intgretResult_ > scoreLine_) {
			flag = true;
		}
		if (stu.sports_ >= 96 && stu.intgretResult_ >= 300) {
			flag = true;
		}
		
		return flag;
	}
	
	int scoreLine_;
}
