#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShowChestMarkerData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShowChestMarkerData"));
	}

	template <typename R = bool> R& Show() {
		return *(R*)((uintptr_t)this + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ShowChestMarkerData*, uintptr_t))(Il2CppBase() + 0x16330E4))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ShowChestMarkerData*, uintptr_t))(Il2CppBase() + 0x1633128))(this, reader);
	}

};

