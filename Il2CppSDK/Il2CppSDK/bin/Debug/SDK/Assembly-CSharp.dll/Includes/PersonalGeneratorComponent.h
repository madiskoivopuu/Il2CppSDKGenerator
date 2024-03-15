#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PersonalGeneratorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PersonalGeneratorComponent"));
	}

	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& BlueprintName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& SaveInLocation() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& Once() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = bool> R& SaveForOneVersion() {
		return *(R*)((uintptr_t)this + 0x22);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PersonalGeneratorComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAEC8))(this, target);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(PersonalGeneratorComponent*, Il2CppObject*))(Il2CppBase() + 0x11EAF8C))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(PersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x11EB0A4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(PersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x11EB1C4))(this, writer);
	}

};

