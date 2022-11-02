#include "Bone.hh"
#include "unistd.h"

Bone::Bone(GLfloat *points, unsigned int len)
{
	unsigned int	i;

	i = 0;
	if (len % 3 != 0)
		write(2, "Bone::Error: points MUST be a multiple of 3\n", 34);
	while (points[i] != '\0')
	{
		this->anchors.push_back(\
			Point(points[i],points[i + 1], points[i + 2]);
		i += 3;
	}
}

Point	*Bone(unsigned int index)
{
	return (this->anchors[index]);
}
