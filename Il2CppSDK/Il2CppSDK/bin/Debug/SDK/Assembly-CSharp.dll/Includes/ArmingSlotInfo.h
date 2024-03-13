#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingSlotInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingSlotInfo"));
	}

	template <typename T = int32_t> T& SlotIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = EquipmentType*> T& EquipmentType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Func2GameDataEntity*, Il2CppString*>*> T& GetDefaultItemName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Func2GameEntity*, Il2CppString*>*> T& GetArmingItemName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Func4GameEntity*, ICommonContexts*, bool, float>*> T& GetPower() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Func3GameEntity*, ICommonContexts*, Il2CppString*>*> T& GetShowItemName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1GameEntity*>*> T& RemoveArming() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Func4GameEntity*, Il2CppString*, bool, bool>*> T& ReplaceArmingItemName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& IsCosmetic() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

