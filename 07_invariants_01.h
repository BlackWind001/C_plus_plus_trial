class Vector
{
public:
	Vector(int sz, bool should_assign);
	void assign();
	double& operator[](int i);
	int get_size();
private:
	int size;
	double* elem;
	bool is_assigned;
};