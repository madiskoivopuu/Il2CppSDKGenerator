#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArmingSlotInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArmingSlotInfo"));
	}

	template <typename R = int32_t> R& SlotIndex() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = EquipmentType*> R& EquipmentType() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Func2GameDataEntity*, Il2CppString*>*& GetDefaultItemName() {
		return *(Func2GameDataEntity*, Il2CppString*>**)((uintptr_t)this + 0x28);
	}
	 Func2GameEntity*, Il2CppString*>*& GetArmingItemName() {
		return *(Func2GameEntity*, Il2CppString*>**)((uintptr_t)this + 0x30);
	}
	 Func4GameEntity*, ICommonContexts*, bool, float>*& GetPower() {
		return *(Func4GameEntity*, ICommonContexts*, bool, float>**)((uintptr_t)this + 0x38);
	}
	 Func3GameEntity*, ICommonContexts*, Il2CppString*>*& GetShowItemName() {
		return *(Func3GameEntity*, ICommonContexts*, Il2CppString*>**)((uintptr_t)this + 0x40);
	}
	 Action1GameEntity*>*& RemoveArming() {
		return *(Action1GameEntity*>**)((uintptr_t)this + 0x48);
	}
	 Func4GameEntity*, Il2CppString*, bool, bool>*& ReplaceArmingItemName() {
		return *(Func4GameEntity*, Il2CppString*, bool, bool>**)((uintptr_t)this + 0x50);
	}
	template <typename R = bool> R& IsCosmetic() {
		return *(R*)((uintptr_t)this + 0x58);
	}


};

