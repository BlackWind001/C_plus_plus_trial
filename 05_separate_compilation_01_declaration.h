class Vector{
private:
	double* elem;
	int sz;
public:
	Vector(int size);	
	int get_sz();
	double get_value_at(int i);
	double get_square_of(int i);
	double get_sum_of_squares();
};