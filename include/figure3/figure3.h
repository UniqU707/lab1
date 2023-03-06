#pragma once
namespace figure3 {

	const float PI = 3.1411592f;

	enum FigureTypes
	{
		BALL,
		CYLINDR,
		PARALLELEPIPED
	};

	class Point
	{
		double x, y;
	public:
		Point();
		Point(double x, double y);
		double get_x();
		double get_y();
		void set_x(double x);
		void set_y(double y);
	};

	class Figure
	{
		FigureTypes type;
	public:
		FigureTypes get_figure_types();
		void set_figure_types(FigureTypes type);
		double figure_surface_area();
		double figure_volume();
	};

	class FigureList
	{
		static const int CAPACITY = 10;
		Figure figures[CAPACITY];
		int size;
	public:



	};
}