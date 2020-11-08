namespace New_namespace
{
	class Namespace_class{
	private:
		int x, y;
	public:
		Namespace_class(int i, int j);
		int Namespace_func_add();
		int get_x();
		int get_y();
	};
	Namespace_class add(Namespace_class i, Namespace_class j);
}