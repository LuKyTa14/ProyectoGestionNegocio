#include <wx/image.h>
#include "Application.h"
#include "Ventana1Hija.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	Ventana1Hija *win = new Ventana1Hija(NULL, &producs);
	win->Show();
	return true;
}

