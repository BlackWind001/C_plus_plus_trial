//The 'invariants' is a topic that I did not understand completely and hence this file will later be modifed
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