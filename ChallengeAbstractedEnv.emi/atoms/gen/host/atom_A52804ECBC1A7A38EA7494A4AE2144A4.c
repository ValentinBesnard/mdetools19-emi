/* Generated by emi-serializer-c tool. */
#include <stdio.h>
#include <stdlib.h>
#include "interpreter/interpreter.h"
#include "interpreter/event_pool/event_pool.h"
#include "interpreter/action_language/action_language.h"
#include "identifiers.h"
#include "model.h"

bool Atom_functionA52804ECBC1A7A38EA7494A4AE2144A4()
{
	ActiveObjects activeObjects = Interpreter_getActiveObjects();
	PassiveObjects passiveObjects = Interpreter_getPassiveObjects();
	SignalEvents globalSignalEvents = Interpreter_getSignalEvents();
	
	return GET(GET(GET(ROOT_instMain, system), trajectoryManager), xPlayer) == GET(GET(GET(ROOT_instMain, system), trajectoryManager), xTarget) && GET(GET(GET(ROOT_instMain, system), trajectoryManager), zPlayer) == GET(GET(GET(ROOT_instMain, system), trajectoryManager), zTarget);
}
