#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MapPathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapPathComponent"));
	}

	template <typename T = Il2CppString*> T& StartId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& EndId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MapPathComponent*, uintptr_t))(Il2CppBase() + 0x12BEBC0))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(MapPathComponent*, uintptr_t))(Il2CppBase() + 0x12BEC68))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(MapPathComponent*, uintptr_t))(Il2CppBase() + 0x12BECA8))(this, reader);
	}

};

}
