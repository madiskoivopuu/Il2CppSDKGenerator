#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LearnBlueprintData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LearnBlueprintData"));
	}

	template <typename T = Il2CppString*> T& Blueprint() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LearnBlueprintData*, uintptr_t))(Il2CppBase() + 0x1429FF0))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LearnBlueprintData*, uintptr_t))(Il2CppBase() + 0x142A02C))(this, reader);
	}

};

}
