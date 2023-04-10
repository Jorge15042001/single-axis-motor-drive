// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERERTEXT_P_H
#define _GTKMM_CELLRENDERERTEXT_P_H


#include <gtkmm/private/cellrenderer_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class GTKMM_API CellRendererText_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = CellRendererText;
  using BaseObjectType = GtkCellRendererText;
  using BaseClassType = GtkCellRendererTextClass;
  using CppClassParent = Gtk::CellRenderer_Class;
  using BaseClassParent = GtkCellRendererClass;

  friend class CellRendererText;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void edited_callback(GtkCellRendererText* self, const gchar* p0, const gchar* p1);

  //Callbacks (virtual functions):
};


} // namespace Gtk


#endif /* _GTKMM_CELLRENDERERTEXT_P_H */

