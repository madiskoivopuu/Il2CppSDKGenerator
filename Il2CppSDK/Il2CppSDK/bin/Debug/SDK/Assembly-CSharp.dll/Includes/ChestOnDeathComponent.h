#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestOnDeathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestOnDeathComponent"));
	}

	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Corpse() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PersonalCorpse() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& FromInventory() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& Drop() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = PersonalDrop*> T& AdditionalPersonalDrop() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(ChestOnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x17404D8))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(ChestOnDeathComponent*, Il2CppObject*))(Il2CppBase() + 0x17405B8))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChestOnDeathComponent*, uintptr_t))(Il2CppBase() + 0x17406F0))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChestOnDeathComponent*, uintptr_t))(Il2CppBase() + 0x174087C))(this, writer);
	}

};

