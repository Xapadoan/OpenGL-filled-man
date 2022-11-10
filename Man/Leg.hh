#ifndef LEG_HH
#define LEG_HH

#include <GL/glut.h>
#include "RelativePoint.hh"
#include "Articulation.hh"
#include "InnerArticulation.hh"

class Leg {
	public:
		Leg(RelativePoint &base, bool side);
		void	render(void);
		void	renderTight(void);
		void	renderMollet(void);
		Leg		*setXAngle(GLfloat x);
		Leg		*setYAngle(GLfloat y);
		Leg		*setZAngle(GLfloat z);
	private:
		Articulation			_articulation;
		InnerArticulation	_knee;
		bool							_side = false;
};

#endif
