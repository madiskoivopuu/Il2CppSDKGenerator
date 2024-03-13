#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowChestMarkerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowChestMarkerData"));
	}

	template <typename T = bool> T& Show() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ShowChestMarkerData*, uintptr_t))(Il2CppBase() + 0x16330E4))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ShowChestMarkerData*, uintptr_t))(Il2CppBase() + 0x1633128))(this, reader);
	}

};

