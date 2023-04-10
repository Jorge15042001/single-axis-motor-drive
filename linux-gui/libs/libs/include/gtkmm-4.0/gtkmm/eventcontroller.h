// Generated by gmmproc 2.73.2 -- DO NOT MODIFY!
#ifndef _GTKMM_EVENTCONTROLLER_H
#define _GTKMM_EVENTCONTROLLER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* Copyright (C) 2014 The gtkmm Development Team
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

#include <glibmm/object.h>
#include <gtkmm/widget.h>
#include <gdkmm/device.h>
#include <gdkmm/event.h>
#include <gdkmm/enums.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
using GtkEventController = struct _GtkEventController;
using GtkEventControllerClass = struct _GtkEventControllerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gtk
{ class GTKMM_API EventController_Class; } // namespace Gtk
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk
{
/** @addtogroup gtkmmEnums gtkmm Enums and Flags */

/**  @defgroup Gestures Event Controllers and Gestures
 *
 * These classes handle input events.
 *
 * Event controllers are standalone objects that can perform specific actions
 * upon received Gdk::Event%s. These are tied to a Widget, and can be told of
 * the event propagation phase at which they will manage the events.
 *
 * Gestures are a set of specific controllers that are prepared to handle pointer
 * and/or touch events. Each gestures implementation attempts to recognize specific
 * actions out the received events, notifying of the state/progress accordingly to
 * let the widget react to those. On multi-touch gestures, every interacting touch
 * sequence will be tracked independently.
 *
 * See <a href="https://developer.gnome.org/gtk4/unstable/chap-input-handling.html">The GTK Input Model</a>
 * for more information about input events and gestures.
 *
 * @newin{3,14}
 *  @var PropagationPhase NONE
 * Events are not delivered.
 * 
 *  @var PropagationPhase CAPTURE
 * Events are delivered in the capture phase. The
 * capture phase happens before the bubble phase, runs from the toplevel down
 * to the event widget. This option should only be used on containers that
 * might possibly handle events before their children do.
 * 
 *  @var PropagationPhase BUBBLE
 * Events are delivered in the bubble phase. The bubble
 * phase happens after the capture phase, and before the default handlers
 * are run. This phase runs from the event widget, up to the toplevel.
 * 
 *  @var PropagationPhase TARGET
 * Events are delivered in the default widget event handlers,
 * note that widget implementations must chain up on button, motion, touch and
 * grab broken handlers for controllers in this phase to be run.
 * 
 *  @enum PropagationPhase
 * 
 * Describes the stage at which events are fed into a Gtk::EventController.
 *
 * @ingroup gtkmmEnums
 */
enum class PropagationPhase
{
  NONE,
  CAPTURE,
  BUBBLE,
  TARGET
};


} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::PropagationPhase> : public Glib::Value_Enum<Gtk::PropagationPhase>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{

/** 
 *  @var PropagationLimit NONE
 * Events are handled regardless of what their
 * target is.
 * 
 *  @var PropagationLimit SAME_NATIVE
 * Events are only handled if their target
 * is in the same Gtk::Native as the event controllers widget. Note
 * that some event types have two targets (origin and destination).
 * 
 *  @enum PropagationLimit
 * 
 * Describes limits of a Gtk::EventController for handling events
 * targeting other widgets.
 *
 * @ingroup gtkmmEnums
 */
enum class PropagationLimit
{
  NONE,
  SAME_NATIVE
};


} // namespace Gtk

#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class GTKMM_API Value<Gtk::PropagationLimit> : public Glib::Value_Enum<Gtk::PropagationLimit>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

namespace Gtk
{


/** Self-contained handler of series of events.
 *
 * This is an abstract base class, low-level implementation for event
 * controllers. Those react to a series of Gdk::Event%s, and possibly trigger
 * actions as a consequence of those.
 *
 * @newin{3,14}
 *
 * @ingroup Gestures
 */

class GTKMM_API EventController : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  using CppObjectType = EventController;
  using CppClassType = EventController_Class;
  using BaseObjectType = GtkEventController;
  using BaseClassType = GtkEventControllerClass;

  // noncopyable
  EventController(const EventController&) = delete;
  EventController& operator=(const EventController&) = delete;

private:  friend class EventController_Class;
  static CppClassType eventcontroller_class_;

protected:
  explicit EventController(const Glib::ConstructParams& construct_params);
  explicit EventController(GtkEventController* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  EventController(EventController&& src) noexcept;
  EventController& operator=(EventController&& src) noexcept;

  ~EventController() noexcept override;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkEventController*       gobj()       { return reinterpret_cast<GtkEventController*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkEventController* gobj() const { return reinterpret_cast<GtkEventController*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkEventController* gobj_copy();

private:


protected:
  /** There is no create() method that corresponds to this constructor,
   * because only derived classes shall be created.
   */
  EventController();

public:
  // No create() because only derived classes shall be instantiated.

  
  /** Returns the `Gtk::Widget` this controller relates to.
   * 
   * @return A `Gtk::Widget`.
   */
  Widget* get_widget();
  
  /** Returns the `Gtk::Widget` this controller relates to.
   * 
   * @return A `Gtk::Widget`.
   */
  const Widget* get_widget() const;
  
  /** Resets the @a controller to a clean state.
   */
  void reset();
  
  /** Gets the propagation phase at which @a controller handles events.
   * 
   * @return The propagation phase.
   */
  PropagationPhase get_propagation_phase() const;
  
  /** Sets the propagation phase at which a controller handles events.
   * 
   * If @a phase is Gtk::PropagationPhase::NONE, no automatic event handling will be
   * performed, but other additional gesture maintenance will.
   * 
   * @param phase A propagation phase.
   */
  void set_propagation_phase(PropagationPhase phase);
  
  /** Gets the propagation limit of the event controller.
   * 
   * @return The propagation limit.
   */
  PropagationLimit get_propagation_limit() const;
  
  /** Sets the event propagation limit on the event controller.
   * 
   * If the limit is set to Gtk::PropagationLimit::SAME_NATIVE, the controller
   * won't handle events that are targeted at widgets on a different
   * surface, such as popovers.
   * 
   * @param limit The propagation limit.
   */
  void set_propagation_limit(PropagationLimit limit);
  
  /** Gets the name of @a controller.
   * 
   * @return The controller name.
   */
  Glib::ustring get_name() const;
  
  /** Sets a name on the controller that can be used for debugging.
   * 
   * @param name A name for @a controller.
   */
  void set_name(const Glib::ustring& name);
  

  /** Returns the event that is currently being handled by the controller.
   * 
   * At other times, <tt>nullptr</tt> is returned.
   * 
   * @return The event that is currently
   * handled by @a controller.
   */
  Glib::RefPtr<const Gdk::Event> get_current_event() const;
  
  /** Returns the timestamp of the event that is currently being
   * handled by the controller.
   * 
   * At other times, 0 is returned.
   * 
   * @return Timestamp of the event is currently handled by @a controller.
   */
  guint32 get_current_event_time() const;
  
  /** Returns the device of the event that is currently being
   * handled by the controller.
   * 
   * At other times, <tt>nullptr</tt> is returned.
   * 
   * @return Device of the event is
   * currently handled by @a controller.
   */
  Glib::RefPtr<Gdk::Device> get_current_event_device();
  
  /** Returns the event that is currently being handled by the controller.
   * 
   * At other times, <tt>nullptr</tt> is returned.
   * 
   * @return The event that is currently
   * handled by @a controller.
   */
  Glib::RefPtr<const Gdk::Device> get_current_event_device() const;
  
  /** Returns the modifier state of the event that is currently being
   * handled by the controller.
   * 
   * At other times, 0 is returned.
   * 
   * @return Modifier state of the event is currently handled by @a controller.
   */
  Gdk::ModifierType get_current_event_state() const;

  /** The widget receiving the `Gdk::Events` that the controller will handle.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Widget* > property_widget() const;


  /** The propagation phase at which this controller will handle events.
   *
   * Default value: Gtk::PropagationPhase::BUBBLE
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PropagationPhase > property_propagation_phase() ;

/** The propagation phase at which this controller will handle events.
   *
   * Default value: Gtk::PropagationPhase::BUBBLE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PropagationPhase > property_propagation_phase() const;

  /** The limit for which events this controller will handle.
   *
   * Default value: Gtk::PropagationLimit::SAME_NATIVE
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< PropagationLimit > property_propagation_limit() ;

/** The limit for which events this controller will handle.
   *
   * Default value: Gtk::PropagationLimit::SAME_NATIVE
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< PropagationLimit > property_propagation_limit() const;

  /** The name for this controller, typically used for debugging purposes.
   *
   * Default value: ""
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_name() ;

/** The name for this controller, typically used for debugging purposes.
   *
   * Default value: ""
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_name() const;


  // EventController has no signals


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   *
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::EventController
   */
  GTKMM_API
  Glib::RefPtr<Gtk::EventController> wrap(GtkEventController* object, bool take_copy = false);
}


#endif /* _GTKMM_EVENTCONTROLLER_H */

