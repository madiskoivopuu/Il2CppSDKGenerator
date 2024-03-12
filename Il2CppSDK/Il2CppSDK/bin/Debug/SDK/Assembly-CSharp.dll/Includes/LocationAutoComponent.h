#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationAutoComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationAutoComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& Attempts() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LocationAutoComponent*, uintptr_t))(Il2CppBase() + 0x179C5AC))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocationAutoComponent*, uintptr_t))(Il2CppBase() + 0x179C644))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocationAutoComponent*, uintptr_t))(Il2CppBase() + 0x179C7FC))(this, writer);
	}

};

}
