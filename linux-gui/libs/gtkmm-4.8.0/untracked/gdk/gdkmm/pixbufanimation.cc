// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gdkmm/pixbufanimation.h>
#include <gdkmm/private/pixbufanimation_p.h>


/*
 * Copyright 1998-2002 The gtkmm Development Team
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
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#include <giomm/slot_async.h>
#include <gdk/gdk.h>

namespace Gdk
{

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
Glib::RefPtr<PixbufAnimationIter> PixbufAnimation::get_iter(gint64 start_time)
{
  // GTimeVal is deprecated, but gdk-pixbuf has no replacement for
  // gdk_pixbuf_animation_get_iter() without GTimeVal.
  GTimeVal tv;
  tv.tv_sec = start_time / 1000000;
  tv.tv_usec = start_time % 1000000;
  return Glib::wrap(gdk_pixbuf_animation_get_iter(gobj(), &tv));
}
G_GNUC_END_IGNORE_DEPRECATIONS

} //namespace Gdk

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gdk::PixbufAnimation> wrap(GdkPixbufAnimation* object, bool take_copy)
{
  return Glib::make_refptr_for_instance<Gdk::PixbufAnimation>( dynamic_cast<Gdk::PixbufAnimation*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gdk
{


/* The *_Class implementation: */

const Glib::Class& PixbufAnimation_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &PixbufAnimation_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gdk_pixbuf_animation_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void PixbufAnimation_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* PixbufAnimation_Class::wrap_new(GObject* object)
{
  return new PixbufAnimation((GdkPixbufAnimation*)object);
}


/* The implementation: */

GdkPixbufAnimation* PixbufAnimation::gobj_copy()
{
  reference();
  return gobj();
}

PixbufAnimation::PixbufAnimation(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

PixbufAnimation::PixbufAnimation(GdkPixbufAnimation* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


PixbufAnimation::PixbufAnimation(PixbufAnimation&& src) noexcept
: Glib::Object(std::move(src))
{}

PixbufAnimation& PixbufAnimation::operator=(PixbufAnimation&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}


PixbufAnimation::~PixbufAnimation() noexcept
{}


PixbufAnimation::CppClassType PixbufAnimation::pixbufanimation_class_; // initialize static member

GType PixbufAnimation::get_type()
{
  return pixbufanimation_class_.init().get_type();
}


GType PixbufAnimation::get_base_type()
{
  return gdk_pixbuf_animation_get_type();
}


Glib::RefPtr<PixbufAnimation> PixbufAnimation::create_from_file(const std::string& filename)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_pixbuf_animation_new_from_file(filename.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<PixbufAnimation> PixbufAnimation::create_from_stream(const Glib::RefPtr<Gio::InputStream>& stream, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_pixbuf_animation_new_from_stream(const_cast<GInputStream*>(Glib::unwrap(stream)), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

void PixbufAnimation::create_from_stream_async(const Glib::RefPtr<Gio::InputStream>& stream, const Gio::SlotAsyncReady& slot, const Glib::RefPtr<Gio::Cancellable>& cancellable)
{
  // Create a copy of the slot.
  auto slot_copy = new Gio::SlotAsyncReady(slot); 

  gdk_pixbuf_animation_new_from_stream_async(const_cast<GInputStream*>(Glib::unwrap(stream)), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &Gio::SignalProxy_async_callback, slot_copy);
}

Glib::RefPtr<PixbufAnimation> PixbufAnimation::create_from_stream_finish(const Glib::RefPtr<Gio::AsyncResult>& result)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_pixbuf_animation_new_from_stream_finish(Glib::unwrap(result), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

Glib::RefPtr<PixbufAnimation> PixbufAnimation::create_from_resource(const std::string& resource_path)
{
  GError* gerror = nullptr;
  auto retvalue = Glib::wrap(gdk_pixbuf_animation_new_from_resource(resource_path.c_str(), &(gerror)));
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
  return retvalue;
}

int PixbufAnimation::get_width() const
{
  return gdk_pixbuf_animation_get_width(const_cast<GdkPixbufAnimation*>(gobj()));
}

int PixbufAnimation::get_height() const
{
  return gdk_pixbuf_animation_get_height(const_cast<GdkPixbufAnimation*>(gobj()));
}

bool PixbufAnimation::is_static_image() const
{
  return gdk_pixbuf_animation_is_static_image(const_cast<GdkPixbufAnimation*>(gobj()));
}

Glib::RefPtr<Pixbuf> PixbufAnimation::get_static_image()
{
  auto retvalue = Glib::wrap(gdk_pixbuf_animation_get_static_image(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}


} // namespace Gdk


