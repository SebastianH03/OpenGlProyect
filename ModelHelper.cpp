#include "ModelHelper.h"


void ModelHelper::InicializarObjeto(GLMmodel* objmodel, char* fileName) {
	if (!objmodel)
	{
		objmodel = glmReadOBJ(fileName);
		if (!objmodel)
			exit(0);

		glmUnitize(objmodel);
		glmFacetNormals(objmodel);
		glmVertexNormals(objmodel, 90.0);
	}
}
