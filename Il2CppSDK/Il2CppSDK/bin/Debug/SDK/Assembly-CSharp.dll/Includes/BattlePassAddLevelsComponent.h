#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassAddLevelsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassAddLevelsComponent"));
	}

	template <typename T = uintptr_t> T& CurrencyType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& AddLevels() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BattlePassAddLevelsComponent*, uintptr_t))(Il2CppBase() + 0x16739C4))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BattlePassAddLevelsComponent*, uintptr_t))(Il2CppBase() + 0x1673A60))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BattlePassAddLevelsComponent*, uintptr_t))(Il2CppBase() + 0x1673AA4))(this, reader);
	}

};

}
