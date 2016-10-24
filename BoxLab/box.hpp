#ifndef BOX_H
#define BOX_H
class Box {
	private:
		// Member variables
		double width,length,depth;
	public:
		// Constructor (default)
		Box() {
		}
		// Constructor (overloaded)
		Box(double w, double l, double d) {
			width = w;
			length=l;
			depth=d;
		}
		// Destructor
		~Box() {
		}
		// Getters (inline member functions)
		double getWidth() {return width;}
		double getLength() {return length;}
		double getDepth() {return depth;}
		// Setters (inline member functions)
		void setWidth(double w) {width=w;}
		void setLength(double l) {length=l;}
		void setDepth(double d) {depth=d;}
		// Calculate box area prototype
		double calcBoxArea();
		// Calculate box volume prototype
		double calcBoxVolume();
};
#endif

