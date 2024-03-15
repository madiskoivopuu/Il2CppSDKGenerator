#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalDrop"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& PlayerCondition() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Nullable1<float>*& Chance() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x28);
	}

	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PersonalDrop*, uintptr_t))(Il2CppBase() + 0x1119E18))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PersonalDrop*, uintptr_t))(Il2CppBase() + 0x1119F0C))(this, writer);
	}
	template <typename R = bool> static R IsEquals(PersonalDrop* drop1, PersonalDrop* drop2) {
		return ((R (*)(void *, PersonalDrop*, PersonalDrop*))(Il2CppBase() + 0x1119F6C))(0, drop1, drop2);
	}

};

