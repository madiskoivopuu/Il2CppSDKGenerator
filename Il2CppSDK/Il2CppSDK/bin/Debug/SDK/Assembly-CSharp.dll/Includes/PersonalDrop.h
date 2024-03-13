#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalDrop"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& PlayerCondition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Nullable1float>*> T& Chance() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PersonalDrop*, uintptr_t))(Il2CppBase() + 0x1119E18))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PersonalDrop*, uintptr_t))(Il2CppBase() + 0x1119F0C))(this, writer);
	}
	template <typename T = bool> static T IsEquals(PersonalDrop* drop1, PersonalDrop* drop2) {
		return ((T (*)(void *, PersonalDrop*, PersonalDrop*))(Il2CppBase() + 0x1119F6C))(0, drop1, drop2);
	}

};

