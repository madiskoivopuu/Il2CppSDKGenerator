#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LearnBlueprintData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LearnBlueprintData"));
	}

	template <typename R = Il2CppString*> R& Blueprint() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LearnBlueprintData*, uintptr_t))(Il2CppBase() + 0x1429FF0))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LearnBlueprintData*, uintptr_t))(Il2CppBase() + 0x142A02C))(this, reader);
	}

};

