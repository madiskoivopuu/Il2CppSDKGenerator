#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UseInstantData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UseInstantData"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(UseInstantData*, uintptr_t))(Il2CppBase() + 0x1542928))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(UseInstantData*, uintptr_t))(Il2CppBase() + 0x154296C))(this, reader);
	}

};

}
