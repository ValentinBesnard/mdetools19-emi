/* Generated by emi-serializer-c tool. */
#include <stdio.h>
#include <stdlib.h>
#include "interpreter/interpreter.h"
#include "interpreter/event_pool/event_pool.h"
#include "interpreter/action_language/action_language.h"
#include "identifiers.h"
#include "model.h"

bool Atom_function0EF68BEE213BB8B2F13D0F28D5625468()
{
	ActiveObjects activeObjects = Interpreter_getActiveObjects();
	PassiveObjects passiveObjects = Interpreter_getPassiveObjects();
	SignalEvents globalSignalEvents = Interpreter_getSignalEvents();
	
	return EP_CONTAINS(GET(GET(ROOT_instMain, system), controller), SIGNAL_finish);
}
