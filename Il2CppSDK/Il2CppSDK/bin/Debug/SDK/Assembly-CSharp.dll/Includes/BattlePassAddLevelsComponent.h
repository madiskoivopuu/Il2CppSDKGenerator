#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BattlePassAddLevelsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BattlePassAddLevelsComponent"));
	}

	template <typename R = CurrencyType> R& CurrencyType() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& AddLevels() {
		return *(R*)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BattlePassAddLevelsComponent*, Il2CppObject*))(Il2CppBase() + 0x16739C4))(this, targetObject);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BattlePassAddLevelsComponent*, uintptr_t))(Il2CppBase() + 0x1673A60))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BattlePassAddLevelsComponent*, uintptr_t))(Il2CppBase() + 0x1673AA4))(this, reader);
	}

};

