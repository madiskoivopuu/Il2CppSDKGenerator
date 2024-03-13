#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ServiceMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ServiceMessage"));
	}

	template <typename T = uint8_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughResourcesForUpgradeBuildEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughResourcesForCraftBlueprint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& CantTakeFurnitureToInventoryNoEmptySlots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& CantTakeFurnitureToInventoryFurnitureIsNotEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& LearnBlueprintDoesntMeetLevelRequirement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughResourcesForPlaceBuildEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& CantPlaceMineBecauseOfOtherMineTooClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& InventoryNoFreeSlots() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& GlobalMapNotEnoughEnergyToRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughCoins() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughCurrency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughTickets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& LockpickBrokenNotificationText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& FurnitureIsBusy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& BuilderSomethingBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& PutItemPersonalBlockedNotifText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& ItemPersonalBlockedNotifText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& Custom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& Ok() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& Error() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& StackLimitNotifText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughSilverCaption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughInfluenceCaption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& NotEnoughGuildCoinsCaption() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& ScoutingCantActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& FurnitureHasDeadWorker() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& CantPutItemsNotifText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& CantGetItemsNotifText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = ServiceMessage*> static T& BuilderClosedRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

