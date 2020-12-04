

public class Student {
	
	Student(String name, String id, int res, int sports) {
		name_ = name;
		id_ = id;
		intgretResult_ = res;
		sports_ = sports;
	}
	
	String getName() {
		return name_;
	}
	String getId() {
		return id_;
	}
	int getIntgretResult() {
		return intgretResult_;
	}
	int getSports() {
		return sports_;
	}
	
	String name_;
	String id_;
	int intgretResult_;
	int sports_;
}
