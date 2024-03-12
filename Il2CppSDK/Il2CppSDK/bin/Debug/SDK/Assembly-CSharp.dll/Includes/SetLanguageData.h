#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetLanguageData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetLanguageData"));
	}

	template <typename T = Il2CppString*> T& Language() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SetLanguageData*, uintptr_t))(Il2CppBase() + 0x1624524))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SetLanguageData*, uintptr_t))(Il2CppBase() + 0x1624568))(this, reader);
	}

};

}
