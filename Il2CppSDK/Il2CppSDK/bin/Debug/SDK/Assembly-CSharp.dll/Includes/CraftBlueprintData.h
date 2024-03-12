#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CraftBlueprintData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CraftBlueprintData"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CraftBlueprintData*, uintptr_t))(Il2CppBase() + 0x13411E0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CraftBlueprintData*, uintptr_t))(Il2CppBase() + 0x134121C))(this, reader);
	}

};

}
