#pragma once

class Errors
{

	NoError = 0,
	ReadCommandId = 10,
	ReadCommandParams = 11,
	UnknownCommand = 12,
	NoEntityWithId = 13,
	WrongTicks = 14,
	NoComponent = 15,
	FromFutute = 16,
	ArgumentOutOfRange = 17,
	NotInCell = 18,
	NoEntityWithBlueprint = 19,
	NoEntityWithPlayerId = 20,
	NoEntitiesWithPositionNear = 21,
	ActorIsBusy = 22,
	NoEntityWithParentId = 23,
	NoEntityWithUniqueLookup = 24,
	ForeignInventory = 25,
	Equipment = 26,
	Count = 27,
	Resource = 28,
	NotShareable = 29,
	ClanLeaderRestriction = 30,
	NotHavePermission = 31,
	WrongItem = 32,
	NoEntityWithCurrencyType = 33,
	DuplicateTransaction = 34,
	ConfigError = 35

};

