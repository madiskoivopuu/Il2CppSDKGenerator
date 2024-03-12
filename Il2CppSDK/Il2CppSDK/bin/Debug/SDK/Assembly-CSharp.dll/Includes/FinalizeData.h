#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FinalizeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FinalizeData"));
	}


	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(FinalizeData*, uintptr_t))(Il2CppBase() + 0x1693C5C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(FinalizeData*, uintptr_t))(Il2CppBase() + 0x1693C6C))(this, reader);
	}

};

}
