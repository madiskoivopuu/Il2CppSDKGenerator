#pragma once

class InteractActionCondition
{

	None = 0,
	Locked = 1,
	Dead = 2,
	Shared = 4,
	Deactive = 8,
	Active = 16,
	NotBusy = 32,
	Owner = 64,
	ActorNotBusy = 128,
	DeactiveAndNotBusy = 40,
	ActiveAndLocked = 17

};

