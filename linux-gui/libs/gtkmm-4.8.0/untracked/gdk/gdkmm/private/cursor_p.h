// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GDKMM_CURSOR_P_H
#define _GDKMM_CURSOR_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gdk
{

class GDKMM_API Cursor_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  using CppObjectType = Cursor;
  using BaseObjectType = GdkCursor;
  using CppClassParent = Glib::Object_Class;

  friend class Cursor;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gdk


#endif /* _GDKMM_CURSOR_P_H */

