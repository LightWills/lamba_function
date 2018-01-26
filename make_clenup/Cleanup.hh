#pragma
template <typename T>

class Cleanup
{
public:
	Cleanup(T f_);
	~Cleanup();

private:
	T f_;


};