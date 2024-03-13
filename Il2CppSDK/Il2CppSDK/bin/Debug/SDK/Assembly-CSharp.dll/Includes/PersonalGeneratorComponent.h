#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalGeneratorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalGeneratorComponent"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BlueprintName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& SaveInLocation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& Once() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& SaveForOneVersion() {
		return *(T*)((uintptr_t)this + 0x22);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(PersonalGeneratorComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAEC8))(this, target);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(PersonalGeneratorComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAF8C))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x11EB0A4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x11EB1C4))(this, writer);
	}

};

