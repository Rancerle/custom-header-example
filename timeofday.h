//FILE: timeofday.h
class TimeOfDay
{
public:
	//Constructors
	TimeOfDay();
	TimeOfDay(int hours, int minutes, int seconds);

	//Transformer
	TimeOfDay Increment() const;

	//Observers
	void Write() const;
	bool Equal(TimeOfDay otherTime) const;
	bool LessThan(TimeOfDay otherTime) const;

private:
	int hours;
	int minutes;
	int seconds;
};