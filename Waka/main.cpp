#include "stdafx.h"

#include "Boat.h"
#include "Raft.h"
#include "Canoe.h"
#include "Sailboat.h"
#include "Drift.h"
#include "Paddle.h"
#include "Sail.h"

int main() noexcept
{	      
	MonoHull raftHull;
	Drift raftProp;
	Raft myRaft("Struggler", raftProp, raftHull);
	Navigation nav(7, 1);
	myRaft.nav(nav);

	const auto raftTime{ myRaft.getElapsedTime() };

	//Canoe myCanoe();

	//Sailboat mySailboat();

	return 0;
}	    
	 
	 