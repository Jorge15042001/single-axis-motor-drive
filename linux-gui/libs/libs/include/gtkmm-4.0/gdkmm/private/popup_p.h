// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GDKMM_POPUP_P_H
#define _GDKMM_POPUP_P_H


#include <glibmm/private/interface_p.h>
#include <gdk/gdk.h>

#include <glibmm/private/interface_p.h>

namespace Gdk
{

class GDKMM_API Popup_Class : public Glib::Interface_Class
{
public:
  using CppObjectType = Popup;
  using BaseObjectType = GdkPopup;
  using BaseClassType = GdkPopupInterface;
  using CppClassParent = Glib::Interface_Class;

  friend class Popup;

  const Glib::Interface_Class& init();

  static void iface_init_function(void* g_iface, void* iface_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gdk


#endif /* _GDKMM_POPUP_P_H */

