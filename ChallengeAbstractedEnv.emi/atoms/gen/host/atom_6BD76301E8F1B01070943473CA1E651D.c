/* Generated by emi-serializer-c tool. */
#include <stdio.h>
#include <stdlib.h>
#include "interpreter/interpreter.h"
#include "interpreter/event_pool/event_pool.h"
#include "interpreter/action_language/action_language.h"
#include "identifiers.h"
#include "model.h"

bool Atom_function6BD76301E8F1B01070943473CA1E651D()
{
	ActiveObjects activeObjects = Interpreter_getActiveObjects();
	PassiveObjects passiveObjects = Interpreter_getPassiveObjects();
	SignalEvents globalSignalEvents = Interpreter_getSignalEvents();
	
	return GET(GET(GET(ROOT_instMain, system), trajectoryManager), aPlayer) > 175 && GET(GET(GET(ROOT_instMain, system), trajectoryManager), aPlayer) < 185;
}
