#pragma once

enum ServiceMessage
{

	NotEnoughResourcesForUpgradeBuildEntity = 0,
	NotEnoughResourcesForCraftBlueprint = 1,
	CantTakeFurnitureToInventoryNoEmptySlots = 2,
	CantTakeFurnitureToInventoryFurnitureIsNotEmpty = 3,
	LearnBlueprintDoesntMeetLevelRequirement = 4,
	NotEnoughResourcesForPlaceBuildEntity = 5,
	CantPlaceMineBecauseOfOtherMineTooClose = 6,
	InventoryNoFreeSlots = 7,
	GlobalMapNotEnoughEnergyToRun = 8,
	NotEnoughCoins = 9,
	NotEnoughCurrency = 10,
	NotEnoughTickets = 11,
	LockpickBrokenNotificationText = 12,
	FurnitureIsBusy = 13,
	BuilderSomethingBlock = 14,
	PutItemPersonalBlockedNotifText = 15,
	ItemPersonalBlockedNotifText = 16,
	Custom = 17,
	Ok = 18,
	Error = 19,
	StackLimitNotifText = 20,
	NotEnoughSilverCaption = 21,
	NotEnoughInfluenceCaption = 22,
	NotEnoughGuildCoinsCaption = 23,
	ScoutingCantActivate = 24,
	FurnitureHasDeadWorker = 25,
	CantPutItemsNotifText = 26,
	CantGetItemsNotifText = 27,
	BuilderClosedRoom = 28

};

