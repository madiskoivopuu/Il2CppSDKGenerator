#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClanPersonalGeneratorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClanPersonalGeneratorComponent"));
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

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(ClanPersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x159725C))(this, target);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(ClanPersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x1597320))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ClanPersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x1597438))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ClanPersonalGeneratorComponent*, uintptr_t))(Il2CppBase() + 0x1597558))(this, writer);
	}

};

}
