//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// This file is part of the Seadex yasmine ecosystem (http://yasmine.seadex.de).                    //
// Copyright (C) 2016-2017 Seadex GmbH                                                              //
//                                                                                                  //
// Licensing information is available in the folder "license" which is part of this distribution.   //
// The same information is available on the www @ http://yasmine.seadex.de/Licenses.html.           //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

#include "pseudostate_model_impl.hpp"

#include "transition_model.hpp"


namespace sxy
{


namespace model
{


pseudostate_model_impl::pseudostate_model_impl( const std::string& _name, const model_element_type& _type )
	: state_machine_element_model_impl( _name, _type )
{
	// Nothing to do...
}


pseudostate_model_impl::~pseudostate_model_impl() SX_NOEXCEPT
{
	// Nothing to do...
}


raw_const_transition_models pseudostate_model_impl::get_incoming_transitions() const
{
	raw_const_transition_models transitions;
	SX_FOR( const transition_model_uptr &transition, incoming_transitions_ )
	{
		transitions.push_back( transition.get() );
	}
	return( transitions );
}


void pseudostate_model_impl::add_incoming_transition( transition_models _incoming_transition )
{
	incoming_transitions_ = sxe::move( _incoming_transition );
}


raw_const_transition_models pseudostate_model_impl::get_outgoing_transitions() const
{
	raw_const_transition_models transitions;
	SX_FOR( const transition_model_uptr &transition, outgoing_transitions_ )
	{
		transitions.push_back( transition.get() );
	}
	return( transitions );
}


void pseudostate_model_impl::add_outgoing_transition( transition_models _outgoing_transition )
{
	outgoing_transitions_ = sxe::move( _outgoing_transition );
}


}


}
