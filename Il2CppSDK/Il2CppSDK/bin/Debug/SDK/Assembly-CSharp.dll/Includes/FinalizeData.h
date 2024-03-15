#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeData"));
	}


	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(FinalizeData*, uintptr_t))(Il2CppBase() + 0x1693C5C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(FinalizeData*, uintptr_t))(Il2CppBase() + 0x1693C6C))(this, reader);
	}

};

