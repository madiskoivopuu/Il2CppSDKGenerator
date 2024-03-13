#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "TypeTypeComponent1.h" 

class GenderComponent : public TypeTypeComponent1<Gender*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenderComponent"));
	}


	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(GenderComponent*, uintptr_t))(Il2CppBase() + 0x176E218))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(GenderComponent*, uintptr_t))(Il2CppBase() + 0x176E294))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(GenderComponent*, Il2CppObject*))(Il2CppBase() + 0x176E2B8))(this, blueprintComponent);
	}
	template <typename T = ModifierGroup*> T GetGroup() {
		return ((T (*)(GenderComponent*))(Il2CppBase() + 0x176E354))(this);
	}
	template <typename T = float> T GetValue() {
		return ((T (*)(GenderComponent*))(Il2CppBase() + 0x176E35C))(this);
	}

};

