//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  //
// This file is part of the Seadex yasmine ecosystem (http://yasmine.seadex.de).                    //
// Copyright (C) 2016 Seadex GmbH                                                                   //
//                                                                                                  //
// Licensing information is available in the folder "license" which is part of this distribution.   //
// The same information is available on the www @ http://yasmine.seadex.de/License.html.            //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef I_VERTEX_VISITOR_D71F9484_F3C5_4DEF_BC94_F273B6223268
#define I_VERTEX_VISITOR_D71F9484_F3C5_4DEF_BC94_F273B6223268


namespace sxy
{


class i_composite_state;
class i_final_state;
class i_simple_state;

class i_choice;
class i_deep_history;
class i_entry_point;
class i_exit_point;
class i_fork;
class i_initial_pseudostate;
class i_join;
class i_junction;
class i_shallow_history;
class i_terminate_pseudostate;


class i_vertex_visitor
{
public:
	i_vertex_visitor
	(
	) = default;


	virtual
	~i_vertex_visitor
	(
	) = default;


	i_vertex_visitor
	(
		const i_vertex_visitor&
	) = delete;


	i_vertex_visitor&
	operator=
	(
		const i_vertex_visitor&
	) = delete;


	virtual void visit
	(
		i_composite_state& p_composite_state
	) = 0;


	virtual void visit
	(
		i_simple_state& p_simple_state
	) = 0;


	virtual void visit
	(
		i_final_state& p_final_state
	) = 0;


	virtual void visit
	(
		i_initial_pseudostate& p_initial_pseudostate
	) = 0;


	virtual void visit
	(
		i_choice& p_choice
	) = 0;


	virtual void visit
	(
		i_junction& p_junction
	) = 0;


	virtual void visit
	(
		i_join& p_join
	) = 0;


	virtual void visit
	(
		i_fork& p_fork
	) = 0;


	virtual void visit
	(
		i_entry_point& p_entry_point
	) = 0;


	virtual void visit
	(
		i_exit_point& p_exit_point
	) = 0;


	virtual void visit
	(
		i_deep_history& p_deep_history
	) = 0;


	virtual void visit
	(
		i_shallow_history& p_shallow_history
	) = 0;


	virtual void visit
	(
		i_terminate_pseudostate& p_terminate_pseudostate
	) = 0;


};


}


#endif
