/* Generated by emi-serializer-c tool. */
#include <stdio.h>
#include <stdlib.h>
#include "interpreter/interpreter.h"
#include "interpreter/event_pool/event_pool.h"
#include "interpreter/action_language/action_language.h"
#include "identifiers.h"
#include "model.h"

bool Atom_function0CE53DAFF85A6A53E7BF42ABF78BC551()
{
	ActiveObjects activeObjects = Interpreter_getActiveObjects();
	PassiveObjects passiveObjects = Interpreter_getPassiveObjects();
	SignalEvents globalSignalEvents = Interpreter_getSignalEvents();
	
	return GET(GET(GET(ROOT_instMain, system), trajectoryManager), playerConnected) == 1;
}
