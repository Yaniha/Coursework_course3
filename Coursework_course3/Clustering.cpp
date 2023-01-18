#include "Clustering.h"

using namespace System;
using namespace System::Windows::Forms;

#include "ClusteringBase.h"

[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Courseworkcourse3::Clustering form;
	Application::Run(% form);
}

System::Void Courseworkcourse3::Clustering::buttonResultOnClick(System::Object^ sender, System::EventArgs^ e)
{
	auto c = ClusteringBase();
	c.setData(".\\abalone.data");
}
