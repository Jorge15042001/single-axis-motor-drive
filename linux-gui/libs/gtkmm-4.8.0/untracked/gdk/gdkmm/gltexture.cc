// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/gltexture.h>
#include <gdkmm/private/gltexture_p.h>


/* Copyright (C) 2018 The gtkmm Development Team
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

#include <gdkmm/glcontext.h>

namespace
{
void GLTexture_destroy_callback(void* data)
{
  auto the_slot = static_cast<Gdk::GLTexture::SlotGLReleased*>(data);
  try
  {
    (*the_slot)();
  }
  catch (...)
  {
    Glib::exception_handlers_invoke();
  }
  delete the_slot;
}

} // anonymous namespace

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::GLTexture> wrap(GdkGLTexture* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::GLTexture>( dynamic_cast<Gdk::GLTexture*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& GLTexture_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GLTexture_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_gl_texture_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GLTexture_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GLTexture_Class::wrap_new(GObject* object)
{
  return new GLTexture((GdkGLTexture*)object);
}


/* The implementation: */

GdkGLTexture* GLTexture::gobj_copy()
{
  reference();
  return gobj();
}

GLTexture::GLTexture(const Glib::ConstructParams& construct_params)
:
  Gdk::Texture(construct_params)
{

}

GLTexture::GLTexture(GdkGLTexture* castitem)
:
  Gdk::Texture((GdkTexture*)(castitem))
{}


GLTexture::GLTexture(GLTexture&& src) noexcept
: Gdk::Texture(std::move(src))
{}

GLTexture& GLTexture::operator=(GLTexture&& src) noexcept
{
  Gdk::Texture::operator=(std::move(src));
  return *this;
}


GLTexture::~GLTexture() noexcept
{}


GLTexture::CppClassType GLTexture::gltexture_class_; // initialize static member

GType GLTexture::get_type()
{
  return gltexture_class_.init().get_type();
}


GType GLTexture::get_base_type()
{
  return gdk_gl_texture_get_type();
}


GLTexture::GLTexture()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(nullptr),
  Gdk::Texture(Glib::ConstructParams(gltexture_class_.init()))
{
  

}

Glib::RefPtr<Texture> GLTexture::create(const Glib::RefPtr<GLContext>& context, guint id, int width, int height, const SlotGLReleased& slot)
{
  // Create a copy of the slot.
  auto slot_copy = new SlotGLReleased(slot); 

  return Glib::wrap(gdk_gl_texture_new(Glib::unwrap(context), id, width, height, &GLTexture_destroy_callback, slot_copy));
}

void GLTexture::release()
{
  gdk_gl_texture_release(gobj());
}


} // namespace Gdk


