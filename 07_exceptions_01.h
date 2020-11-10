class Vector{
public:
	Vector(int sz);
	void assign();
	double& operator[](int i);
	int get_size();
private:
	int size;
	double* elem;
};