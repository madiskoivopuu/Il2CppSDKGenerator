#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowTempBuffInfoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowTempBuffInfoData"));
	}

	template <typename T = Il2CppString*> T& uniqueLookup() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ShowTempBuffInfoData*, uintptr_t))(Il2CppBase() + 0x147EE58))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ShowTempBuffInfoData*, uintptr_t))(Il2CppBase() + 0x147EE94))(this, reader);
	}

};

}
