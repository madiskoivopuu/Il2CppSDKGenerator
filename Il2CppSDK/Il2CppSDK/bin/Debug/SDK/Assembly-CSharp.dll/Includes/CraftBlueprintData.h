#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftBlueprintData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftBlueprintData"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CraftBlueprintData*, uintptr_t))(Il2CppBase() + 0x13411E0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CraftBlueprintData*, uintptr_t))(Il2CppBase() + 0x134121C))(this, reader);
	}

};

