#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeComponent1.h" 
#include "Gender.h" 

class GenderComponent : public TypeTypeComponent1<Gender*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderComponent"));
	}


	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GenderComponent*, uintptr_t))(Il2CppBase() + 0x176E218))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GenderComponent*, uintptr_t))(Il2CppBase() + 0x176E294))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(GenderComponent*, Il2CppObject*))(Il2CppBase() + 0x176E2B8))(this, blueprintComponent);
	}
	template <typename R = ModifierGroup*> R GetGroup() {
		return ((R (*)(GenderComponent*))(Il2CppBase() + 0x176E354))(this);
	}
	template <typename R = float> R GetValue() {
		return ((R (*)(GenderComponent*))(Il2CppBase() + 0x176E35C))(this);
	}

};

