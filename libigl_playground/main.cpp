#include <Eigen/Core>
#include <igl/opengl/glfw/Viewer.h>
#include <igl/opengl/glfw/imgui/ImGuiMenu.h>


int main(int argc, char* argv[])
{
	Eigen::MatrixXd V(3, 3);
	V <<
		0, 0, 0,
		1, 0, 0,
		1, 1, 0,
		0, 1, 0;


	Eigen::MatrixXi F(2, 3);
	F <<
		0, 1, 2,
		1, 2, 3;


	igl::opengl::glfw::Viewer viewer;
	viewer.data().set_mesh(V, F);

	return 0;
}