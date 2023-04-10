// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtkmm/buildercscope.h>
#include <gtkmm/private/buildercscope_p.h>


/* Copyright (C) 2020 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library. If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::BuilderCScope> wrap(GtkBuilderCScope* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gtk::BuilderCScope>( dynamic_cast<Gtk::BuilderCScope*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& BuilderCScope_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &BuilderCScope_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_builder_cscope_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  BuilderScope::add_interface(get_type());

  }

  return *this;
}


void BuilderCScope_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* BuilderCScope_Class::wrap_new(GObject* object)
{
  return new BuilderCScope((GtkBuilderCScope*)object);
}


/* The implementation: */

GtkBuilderCScope* BuilderCScope::gobj_copy()
{
  reference();
  return gobj();
}

BuilderCScope::BuilderCScope(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

BuilderCScope::BuilderCScope(GtkBuilderCScope* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


BuilderCScope::BuilderCScope(BuilderCScope&& src) noexcept
: Glib::Object(std::move(src))
  , BuilderScope(std::move(src))
{}

BuilderCScope& BuilderCScope::operator=(BuilderCScope&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  BuilderScope::operator=(std::move(src));
  return *this;
}


BuilderCScope::~BuilderCScope() noexcept
{}


BuilderCScope::CppClassType BuilderCScope::buildercscope_class_; // initialize static member

GType BuilderCScope::get_type()
{
  return buildercscope_class_.init().get_type();
}


GType BuilderCScope::get_base_type()
{
  return gtk_builder_cscope_get_type();
}


BuilderCScope::BuilderCScope()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Glib::Object(Glib::ConstructParams(buildercscope_class_.init()))
{
  

}

Glib::RefPtr<BuilderCScope> BuilderCScope::create()
{
  return Glib::make_refptr_for_instance<BuilderCScope>( new BuilderCScope() );
}


} // namespace Gtk

